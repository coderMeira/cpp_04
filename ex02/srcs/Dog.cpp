//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() {
	type_ = "Dog";
	sound_ = "Woof!";
	brain_ = new Brain();
	std::cout << "Default constructor for Dog called" << std::endl;
}

Dog::Dog(const Dog& param): Animal(){
	Brain	*copy = new Brain();

	type_ = param.type_;
	sound_ = param.sound_;
	for (int i = 0; i < 100; i++)
	{
		copy->ideas_[i] = param.brain_->ideas_[i];
	}
	brain_ = copy;
}

Dog::~Dog() {
	delete brain_;
	std::cout << "Dog" << " destroyed" << std::endl;
}

Dog& Dog::operator= (const Dog& param) {
	Brain	*copy = new Brain();

	type_ = param.type_;
	sound_ = param.sound_;
	for (int i = 0; i < 100; i++)
	{
		copy->ideas_[i] = param.brain_->ideas_[i];
	}
	brain_ = copy;
	return (*this);
}

std::ostream& operator<<(std::ostream& s, const Dog& param) {
	// s << param.CONST_METHOD()
	(void)param;
	return (s);
}

void Dog::makeSound(void) const {
	std::cout << this->sound_ << std::endl;
}
