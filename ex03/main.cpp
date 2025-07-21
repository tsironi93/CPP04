#include "./AMateria.hpp"
#include "./Cure.hpp"
#include "./Ice.hpp"
#include "./MateriaSource.hpp"
#include "./Character.hpp"
#include "./IMateriaSource.hpp"
#include <iostream>

// int main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	delete bob;
// 	delete me;
// 	delete src;
// }



void testMateriaLearningAndCreation() {
    std::cout << "\n=== Materia Learning and Creation Test ===" << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    AMateria* m1 = src->createMateria("ice");
    AMateria* m2 = src->createMateria("cure");
    AMateria* m3 = src->createMateria("unknown");

    std::cout << "Created Materia Types: " 
              << (m1 ? m1->getType() : "null") << ", "
              << (m2 ? m2->getType() : "null") << ", "
              << (m3 ? m3->getType() : "null") << std::endl;

    delete m1;
    delete m2;
    delete src;
}

void testInventoryFull() {
    std::cout << "\n=== Inventory Full Test ===" << std::endl;
    ICharacter* hero = new Character("Hero");
    AMateria* ice = new Ice();
    AMateria* cure = new Cure();

    for (int i = 0; i < 5; ++i) {
        hero->equip(i % 2 == 0 ? ice->clone() : cure->clone());
    }

    delete ice;
    delete cure;
    delete hero;
}

void testEquipUnequipUse() {
    std::cout << "\n=== Equip, Unequip and Use Test ===" << std::endl;
    ICharacter* hero = new Character("Hero");
    ICharacter* villain = new Character("Villain");

    AMateria* ice = new Ice();
    AMateria* cure = new Cure();

    hero->equip(ice);
    hero->equip(cure);

    hero->use(0, *villain);
    hero->use(1, *villain);
    hero->use(2, *villain);  // should do nothing

    hero->unequip(0);

    delete ice;
	delete hero;
    delete villain;
}

void testDeepCopy() {
    std::cout << "\n=== Deep Copy Test ===" << std::endl;
    Character original("Original");
    original.equip(new Ice());
    original.equip(new Cure());

	original.printInventory();

    Character copy = original; // invokes copy constructor

    std::cout << "Original uses slot 0:" << std::endl;
    original.use(0, original);

    std::cout << "Copy uses slot 1:" << std::endl;
    copy.use(1, copy);

    std::cout << "After unequip, Original uses slot 0:" << std::endl;
    original.use(0, original);  // should do nothing

    std::cout << "Copy still uses slot 0:" << std::endl;
    copy.use(0, copy); // should still work (deep copy)
}

int main() {
    testMateriaLearningAndCreation();
    testInventoryFull();
    testEquipUnequipUse();
    testDeepCopy();

    return 0;
}
