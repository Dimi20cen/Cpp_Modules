#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

MateriaSource::MateriaSource(){
	_i = 0;
}

MateriaSource::MateriaSource(const MateriaSource& old){
	int	i = 0;
	
	_i = old._i;
	while (i < _i){
		_sources[i] = _sources[i];
		i++;
	}
}

MateriaSource::~MateriaSource(){

}

void	MateriaSource::learnMateria(AMateria* m){
	if (_i <= 3 && m != NULL){
		_sources[_i] = m;
		if (_i < 3)
			_i++;
	}
	else
		delete m;
}

AMateria*	MateriaSource::createMateria(std::string const & type){
	if (type == "cure")
		return (new Cure());
	else if (type == "ice")
		return (new Ice());
	return (NULL);
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs){
	int i = 0;

	_i = rhs._i;
	while (i < _i){
		_sources[i] = rhs._sources[i];
		i++;
	}
	return (*this);
}