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
		~Animal();
		Animal&	operator= (const Animal&); // const for safety... not super nesessary
		std::string	getType(void) const ;
		void		makeSound(void) const ;

	protected:
		std::string	type_;
		std::string	sound_;
};

std::ostream&	operator<<(std::ostream&, const Animal&);

#endif

