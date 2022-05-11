//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "ex01.hpp"

int main() {
	std::cout << RED << "\t\t\n[ CONSTRUCTORS ]\n\n" << ENDC;
	const Animal*	animals[10];
	std::cout << YELLOW << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << ENDC;
	const Animal*	gato = new Cat;
	std::cout << YELLOW << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << ENDC;
	const Animal*	cao = new Dog;

	std::cout << YELLOW << "\n****************************************************\n" << ENDC;
	std::cout << RED <<"\t\t\n[ ASSIGN LOOP ]\n\n" << ENDC;
	for (int i = 0; i < 10; i++) {
		if (i < 5)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	std::cout << YELLOW << "\n****************************************************\n" << ENDC;
	std::cout << RED <<"\t\t\n[ DELETE LOOP ]\n\n" << ENDC;

	for (int i = 0; i < 10; i++) {
		delete animals[i];
	}
	std::cout << RED <<"\t\t\n[ DELETE CAO AND GATO ]\n\n" << ENDC;
	delete gato;
	delete cao;
	std::cout << YELLOW << "\n****************************************************\n" << ENDC;
	std::cout << RED <<"\t\t\n[ TESTING COPY ]\n\n" << ENDC;
	{
		Dog basic;
		std::cout << YELLOW << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << ENDC;
		Dog copy(basic);
	}
}
