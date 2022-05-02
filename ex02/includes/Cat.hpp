//***************************//
//*Template by pulgamecanica*//
//***************************//

#ifndef __CAT_HPP__
# define __CAT_HPP__

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	public:
		Cat();
		Cat(const Cat&);
		~Cat();
		Cat&	operator= (const Cat&); // const for safety... not super nesessary
		virtual void	makeSound(void) const;

	private:
		Brain*	brain_;
};

std::ostream&	operator<<(std::ostream&, const Cat&);

#endif

