//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "ex01.hpp"

int main() {
	const Animal*	animals[10];
	const Animal*	gato = new Cat;
	const Animal*	cao = new Dog;


	for (int i = 0; i < 10; i++) {
		if (i < 5)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	std::cout << std::endl;

	for (int i = 0; i < 10; i++) {
		delete animals[i];
	}

	delete gato;
	delete cao;
	std::cout << std::endl;

	{
		Dog basic;
		Dog copy(basic);
	}
}
