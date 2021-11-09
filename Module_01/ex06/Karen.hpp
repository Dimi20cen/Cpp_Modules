#ifndef KAREN_HPP
# define KAREN_HPP

#include "iostream"

class Karen{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		std::string levels[4];

		void (Karen::*pointer_to_funcs[4])(void);

	public:
		Karen(void);
		void complain(std::string level);
};

#endif