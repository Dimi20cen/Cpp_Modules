#include "Character.hpp"

Character::Character() : _name("Default")
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(std::string name){
	_i = 0;
	_name = name;
}

Character::Character(const Character& old){
	int	i = 0;
	
	_i = old._i;
	_name = old._name;
	while (i < _i){
		_inventory[i] = old._inventory[i];
		i++;
	}
}

Character::~Character(){

}

const std::string &Character::getName() const{
	return (_name);
}

void	Character::equip(AMateria *m){
	if (_i <= 3 && m != NULL){
		_inventory[_i] = m;
		if (_i < 3)
			_i++;
	}
}

void	Character::unequip(int idx){
	if (idx <= _i && idx >= 0){
		while (idx < _i - 1){
			_inventory[idx] = _inventory[idx + 1];
			idx++;
		}
		_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target){
	if (idx < 4 && idx >= 0 && _inventory[idx]){
		_inventory[idx]->use(target);
	}
}

Character	&Character::operator=(const Character &rhs){
	int i = 0;

	_i = rhs._i;
	_name = rhs._name;
	while (i < _i){
		_inventory[i] = rhs._inventory[i];
		i++;
	}
	return (*this);
}