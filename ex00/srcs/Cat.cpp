//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "Cat.hpp"

Cat::Cat() {
	type_ = "Cat";
	sound_ = "Meoh!";
	std::cout << "Default constructor for Cat called" << std::endl;
}

Cat::Cat(const Cat& param): Animal() {
	// TODO (copy constructor)
	(void)param;
}

Cat::~Cat() {
	std::cout << "Cat" << " destroyed" << std::endl;
	// TODO (destructor)
}

Cat& Cat::operator= (const Cat& param) {
	// TODO (Assignment operatior)
	// std::swap()
	(void)param;
	return (*this);
}

std::ostream& operator<<(std::ostream& s, const Cat& param) {
	// s << param.CONST_METHOD()
	(void)param;
	return (s);
}

