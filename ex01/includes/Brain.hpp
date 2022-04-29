//***************************//
//*Template by pulgamecanica*//
//***************************//

#ifndef __BRAIN_HPP__
# define __BRAIN_HPP__

#include <iostream>

class Brain {
	public:
		Brain();
		Brain(const Brain&);
		~Brain();
		Brain&	operator= (const Brain&); // const for safety... not super nesessary

	private:
	std::string	ideas_[100];
};

std::ostream&	operator<<(std::ostream&, const Brain&);

#endif

