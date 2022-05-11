//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	type_ = "Wrong cat";
	std::cout << "Default constructor for WrongCat called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& param): WrongAnimal() {
	type_ = param.type_;
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

void	WrongCat::makeSound(void) const
{
	std::cout << "Wrong Meoh!" << std::endl;
}
