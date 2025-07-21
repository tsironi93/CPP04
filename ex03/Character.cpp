#include "./Character.hpp"
#include <iostream>

Character::Character(const std::string &name) : name(name) {
	for (int i = 0; i < 4; ++i)
		inventory[i] = nullptr;
}

Character::Character(const Character &other) : name(other.name) {
	for (int i = 0; i < 4; ++i)
		inventory[i] = other.inventory[i] ? other.inventory[i]->clone() : nullptr;
}

Character &Character::operator=(const Character &other) {
	if (this != &other) {
		name = other.name;
		for (int i = 0; i < 4; ++i) {
			delete inventory[i];
			inventory[i] = other.inventory[i] ? other.inventory[i]->clone() : nullptr;
		}
	}
	return *this;
}

Character::~Character() {
	std::cout << "Character " << name << " destroyed." << std::endl;
	for (int i = 0; i < 4; ++i)
		if (inventory[i])
			delete inventory[i];
}

std::string const &Character::getName() const {
	return name;
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; ++i) {
		if (!inventory[i]) {
			inventory[i] = m;
			return;
		}
	}
	delete m;
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4) {
		inventory[idx] = nullptr;
	}
	else
		std::cout << "Wrong Index" << std::endl;
}

void Character::use(int idx, ICharacter &target) {
	if (idx >= 0 && idx < 4 && inventory[idx]) {
		inventory[idx]->use(target);
	}
	else
		std::cout << "Wrong Index or No Materia" << std::endl;
}

void Character::printInventory() const {
	std::cout << "Inventory of " << name << ":" << std::endl;
	for (int i = 0; i < 4; ++i) {
		if (inventory[i])
			std::cout << "Slot " << i << ": " << inventory[i]->getType() << std::endl;
		else
			std::cout << "Slot " << i << ": empty" << std::endl;
	}
}
