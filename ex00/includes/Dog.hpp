//***************************//
//*Template by pulgamecanica*//
//***************************//

#ifndef __DOG_HPP__
# define __DOG_HPP__

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog();
		Dog(const Dog&);
		~Dog();
		Dog&	operator= (const Dog&); // const for safety... not super nesessary
		void	makeSound(void) const ;
};

std::ostream&	operator<<(std::ostream&, const Dog&);

#endif

