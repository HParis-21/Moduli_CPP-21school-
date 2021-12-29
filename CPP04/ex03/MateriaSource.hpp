#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *_source[4];
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource & obj);
	MateriaSource & operator= (MateriaSource const & other);

	void learnMateria(AMateria* materia);
	AMateria* createMateria(std::string const & type);
};

#endif //MATERIASOURCE_HPP
