//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "Animal.hpp"

Animal::Animal() {
	type_ = "Just an animal";
	std::cout << "Default constructor for Animal called" << std::endl;
}

Animal::Animal(const Animal& param) {
	type_ = param.type_;
}

Animal::~Animal() {
	std::cout << "Animal destroyed" << std::endl;
	// TODO (destructor)
}

Animal& Animal::operator= (const Animal& param) {
	(void)param;
	return (*this);
}

std::ostream& operator<<(std::ostream& s, const Animal& param) {
	(void)param;
	return (s);
}

std::string	Animal::getType(void) const {
	return (this->type_);
}

void	Animal::makeSound(void) const {
	std::cout << "Standard animal noise" << std::endl;
}
