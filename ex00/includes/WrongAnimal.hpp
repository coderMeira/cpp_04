//***************************//
//*Template by pulgamecanica*//
//***************************//

#ifndef __WRONGANIMAL_HPP__
# define __WRONGANIMAL_HPP__

#include <iostream>

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal&);
		~WrongAnimal();
		WrongAnimal&	operator= (const WrongAnimal&); // const for safety... not super nesessary
		std::string	getType(void) const ;
		void		makeSound(void) const ;

	protected:
		std::string	type_;
};

std::ostream&	operator<<(std::ostream&, const WrongAnimal&);

#endif

