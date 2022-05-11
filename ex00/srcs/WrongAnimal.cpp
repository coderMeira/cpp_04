//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	type_ = "Wrong animal type";
	std::cout << "Default constructor for WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& param) {
	type_ = param.type_;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal" << " destroyed" << std::endl;
	// TODO (destructor)
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& param) {
	// TODO (Assignment operatior)
	// std::swap()
	(void)param;
	return (*this);
}

std::ostream& operator<<(std::ostream& s, const WrongAnimal& param) {
	// s << param.CONST_METHOD()
	(void)param;
	return (s);
}

std::string	WrongAnimal::getType(void) const {
	return (this->type_);
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "An animal animal noise that sounds...wrong" << std::endl;
}

