#include "Ice.hpp"
#include "Cure.hpp"
#include "Fire.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
void subject_test_part()
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter *me = new Character("me");

	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter *bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete (bob);
	delete (me);
	delete (src);
}

void my_test_part()
{
	IMateriaSource *src = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure()); // already learned

	AMateria	*tmp;
	tmp = src->createMateria("fire"); // not learned
	src->learnMateria(new Fire);
	tmp = src->createMateria("fire"); // not learned
	std::cout << "Type of created: \"" <<tmp->getType() << "\"\n";

	ICharacter	*bob = new Character("Bob");
	ICharacter	*jeb = new Character("Jeb");

	bob->use(0, *jeb); //not equipped
	bob->equip(src->createMateria("fire"));
	bob->use(0, *jeb);
	bob->unequip(2);
	bob->equip(tmp);
	bob->use(1, *jeb);
	bob->equip(tmp);
	
	bob->unequip(1);
	bob->unequip(0);
	
	bob->use(1, *jeb);
	bob->use(0, *jeb);


	bob->equip(src->createMateria("fire"));
	bob->equip(src->createMateria("fire"));
	bob->equip(src->createMateria("fire"));
	bob->equip(src->createMateria("fire"));
	bob->equip(src->createMateria("fire"));
	std::cout << "---\n";
	bob->use(0, *jeb);
	bob->use(1, *jeb);
	bob->use(2, *jeb);
	bob->use(3, *jeb);
	bob->use(4, *jeb);
	std::cout << "---\n";
	bob->unequip(0);
	bob->equip(src->createMateria("ice"));
	bob->use(0, *jeb);
	bob->use(1, *jeb);
	bob->use(2, *jeb);
	bob->use(3, *jeb);
	std::cout << "---\n";

	AMateria	*first = src->createMateria("cure");
	AMateria	*second = src->createMateria("ice");
	std::cout << "First  XP: "<< first->getXP() << "\n";
	std::cout << "Second XP: "<< second->getXP() << "\n";

	jeb->equip(first);	
	jeb->equip(second);

	jeb->use(0, *bob);	
	jeb->use(0, *bob);	
	jeb->use(0, *bob);	

	jeb->use(1, *bob);	
	jeb->use(1, *bob);	
	
	std::cout << "First  XP: "<< first->getXP() << "\n";
	std::cout << "Second XP: "<< second->getXP() << "\n";

	delete (bob);
	delete (jeb);
	delete (src);
}

int main(void)
{
	std::cout << "==========\n";
	subject_test_part();
	std::cout << "==========\n";
	my_test_part();
	std::cout << "==========\n";
}