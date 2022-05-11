//***************************//
//*Template by pulgamecanica*//
//***************************//

#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

#include <iostream>

class Animal {
	public:
		Animal();
		Animal(const Animal&);
		virtual ~Animal();
		Animal&	operator= (const Animal&); // const for safety... not super nesessary
		std::string		getType(void) const;
		virtual void	makeSound(void) const = 0;

	protected:
		std::string	type_;
};

std::ostream&	operator<<(std::ostream&, const Animal&);

#endif

