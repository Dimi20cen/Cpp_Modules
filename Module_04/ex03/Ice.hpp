#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

class Ice : public AMateria{
public:
	Ice();
	Ice(const Ice& old);
	~Ice();
	virtual Ice*	clone() const;
	Ice				&operator=(const Ice &rhs);

};

#endif
