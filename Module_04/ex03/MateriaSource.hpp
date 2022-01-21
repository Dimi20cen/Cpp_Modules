#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource{
private :
	AMateria*	_sources[4];
	int			_i;
public:
	MateriaSource();
	MateriaSource(const MateriaSource& old);
	virtual ~MateriaSource();
	virtual void		learnMateria(AMateria*);
	virtual AMateria*	createMateria(std::string const & type);
	MateriaSource		&operator=(const MateriaSource &rhs);
};

#endif