//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "Dog.hpp"

Dog::Dog() {
	type_ = "Dog";
	std::cout << "Default constructor for Dog called" << std::endl;
}

Dog::Dog(const Dog& param): Animal() {
	// TODO (copy constructor)
	(void)param;
}

Dog::~Dog() {
	std::cout << "Dog" << " destroyed" << std::endl;
	// TODO (destructor)
}

Dog& Dog::operator= (const Dog& param) {
	// TODO (Assignment operatior)
	// std::swap()
	(void)param;
	return (*this);
}

std::ostream& operator<<(std::ostream& s, const Dog& param) {
	// s << param.CONST_METHOD()
	(void)param;
	return (s);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof!" << std::endl;
}
