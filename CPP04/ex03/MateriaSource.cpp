#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "Constructor called (MateriaSource)" << std::endl;
	for (int i = 0; i < 4; i++)
		_source[i] = NULL;
}

MateriaSource::~MateriaSource() {
	std::cout << "Destructor called (MateriaSource)" << std::endl;
	for (int i = 0; i < 4; i++)
		if (_source[i])
			delete this->_source[i];
}

MateriaSource::MateriaSource(const MateriaSource & obj) {
	std::cout << "Copy constructor called (MateriaSource)" << std::endl;
	(*this) = obj;
}

MateriaSource & MateriaSource::operator= (MateriaSource const & other) {
	for (int i = 0; i < 4; i++)
		this->_source[i] = other._source[i];
	return (*this);
}

void MateriaSource::learnMateria(AMateria* materia) // приходит материя с выделенной памятью
{
	for (int i = 0; i < 4; i++)
	{
		if (!_source[i])
		{
			_source[i] = materia; // тут лежит указатель на материю (либо лед, либо здоровье)
			std::cout << "Learn " << materia->getType() << std::endl;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++)
	{
		if (_source[i] && _source[i]->getType() == type)
		{
			std::cout << "Find our materia " << _source[i]->getType() << std::endl;
			return (_source[i]->clone());//тут выделяется еще помять и возвращаем новый клон который будет
			// использоваться в инвентаре Персонажа, а инвентарь персонажа мы чистим когда выходим, поэтому не будет
			// сеги когда удалим (в деструкторе) и инвентарь персонажа и ящик материи. Получается что ящик Материи
			// имеет свой набор из выделенных материй и инвентарь персонажа имеет собственные клоны с памятью.
		}
	}
	return (0);
}