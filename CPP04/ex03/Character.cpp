#include "Character.hpp"

Character::Character(std::string name) : _name(name) {
	std::cout << "Constructor called (Character)" << std::endl;
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

Character::~Character() {
	std::cout << "Destructor called (Character)" << std::endl;
	for (int i = 0; i < 4; i++)
		if (_materia[i])
			delete _materia[i];
}

Character::Character(const Character & obj) {
	std::cout << "Copy constructor called (Character)" << std::endl;
    this->_name = obj._name;
    for (int i = 0; i < 4; i++)
    {
        if (obj._materia[i])
            this->_materia[i] = obj._materia[i];
        else
            _materia[i] = 0;
    }
}

Character & Character::operator= (Character const & target) {
    this->_name = target._name;
    if (this == &target)
        return (*this);

    for (int i = 0; i < 4; i++)
    {
        if (this->_materia[i])
            delete this->_materia[i];
        _materia[i] = 0;
        if (target._materia[i])
            this->_materia[i] = target._materia[i];
        else
            _materia[i] = 0;
    }
    return (*this);
}

std::string const & Character::getName() const { return (this->_name); }

void Character::equip(AMateria* mat) {
	for (int i = 0; i < 4; i++)
	{
		if (!_materia[i])
		{
			_materia[i] = mat;
			std::cout << "Put " << i << " " << mat->getType() << " in inventory" << std::endl;
			return ;
		}
	}
	std::cout << "Inventory is full!" << std::endl;
}

void Character::unequip(int idx) {
	if (idx > 3 || idx < 0)
	{
		std::cout << "Wrong index materia" << std::endl;
		return ;
	}
	std::cout << "Unequip " << idx << " materia: " << _materia[idx]->getType() << std::endl;
	_materia[idx] = NULL;
}

void Character::use(int idx, ICharacter & target) {
	if (!_materia[idx])
	{
		std::cout  << "Materia not exist!" << std::endl;
		return ;
	}
	if (idx > 3 || idx < 0)
	{
		std::cout << "Wrong index materia" << std::endl;
		return ;
	}
	_materia[idx]->use(target);
}