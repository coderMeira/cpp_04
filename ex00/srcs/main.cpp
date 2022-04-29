//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "ex00.hpp"

int	main(void)
{
	std::cout << RED << "\t\t\n[ CONSTRUCTORS ]\n\n" << ENDC;
	const Animal		*meta = new Animal();
	std::cout << YELLOW << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << ENDC;
	const Animal		*cao = new Dog();
	std::cout << YELLOW << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << ENDC;
	const Animal		*gato = new Cat();
	std::cout << YELLOW << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << ENDC;
	const WrongAnimal	*mosquito = new WrongAnimal();
	std::cout << YELLOW << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << ENDC;
	const WrongCat		*tigre = new WrongCat();

	std::cout << YELLOW << "\n****************************************************\n" << ENDC;

	std::cout << RED <<"\t\t\n[ ANIMAL TYPES ]\n\n" << ENDC;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << cao->getType() << " " << std::endl;
	std::cout << gato->getType() << " " << std::endl;
	std::cout << mosquito->getType() << " " << std::endl;
	std::cout << tigre->getType() << " " << std::endl;

	std::cout << YELLOW << "\n****************************************************\n" << ENDC;

	std::cout << RED <<"\t\t\n[ ANIMAL SOUNDS ]\n\n" << ENDC;
	meta->makeSound();
	gato->makeSound(); //will output the cat sound!
	cao->makeSound();
	mosquito->makeSound();
	tigre->makeSound();

	std::cout << YELLOW << "\n****************************************************\n" << ENDC;

	std::cout << RED <<"\t\t\n[ DESTRUCTORS ]\n\n" << ENDC;
	delete meta;
	std::cout << YELLOW << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << ENDC;
	delete cao;
	std::cout << YELLOW << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << ENDC;
	delete gato;
	std::cout << YELLOW << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << ENDC;
	delete mosquito;
	std::cout << YELLOW << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << ENDC;
	delete tigre;

	return (0);
}
