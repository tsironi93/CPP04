#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "./ICharacter.hpp"
#include "./AMateria.hpp"

class Character : public ICharacter {

	private:
		std::string name;
		AMateria *inventory[4];

	public:
		Character() = delete;
		Character(const std::string &name);
		Character(const Character &other);
		Character &operator=(const Character &other);
		~Character();

		const std::string &getName() const override;

		void equip(AMateria *m) override;
		void unequip(int idx) override;
		void use(int idx, ICharacter &target) override;

		void printInventory() const;
};


#endif // !#ifndef CHARACTER_HPP


