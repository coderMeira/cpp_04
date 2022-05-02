//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
	type_ = "Cat";
	sound_ = "Meoh!";
	brain_ = new Brain();
	std::cout << "Default constructor for Cat called" << std::endl;
}

Cat::Cat(const Cat &param) : Animal()
{
	Brain *copy = new Brain();

	type_ = param.type_;
	sound_ = param.sound_;
	for (int i = 0; i < 100; i++)
	{
		copy->ideas_[i] = param.brain_->ideas_[i];
	}
	brain_ = copy;
}

Cat::~Cat()
{
	delete brain_;
	std::cout << "Cat" << " destroyed" << std::endl;
}

Cat &Cat::operator=(const Cat &param)
{
	Brain *copy = new Brain();

	type_ = param.type_;
	sound_ = param.sound_;
	for (int i = 0; i < 100; i++)
	{
		copy->ideas_[i] = param.brain_->ideas_[i];
	}
	brain_ = copy;
	return (*this);
}

std::ostream &operator<<(std::ostream &s, const Cat &param)
{
	// s << param.CONST_METHOD()
	(void)param;
	return (s);
}
