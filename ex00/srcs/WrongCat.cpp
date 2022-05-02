//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	type_ = "Wrong cat! ABORT!";
	sound_ = "Mew 👽";
	std::cout << "Default constructor for WrongCat called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& param): WrongAnimal() {
	type_ = param.type_;
	sound_ = param.sound_;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat" << " destroyed" << std::endl;
	// TODO (destructor)
}

WrongCat& WrongCat::operator= (const WrongCat& param) {
	// TODO (Assignment operatior)
	// std::swap()
	(void)param;
	return (*this);
}

std::ostream& operator<<(std::ostream& s, const WrongCat& param) {
	// s << param.CONST_METHOD()
	(void)param;
	return (s);
}

