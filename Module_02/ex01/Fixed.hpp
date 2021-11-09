#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					value;
		static const int	n_of_fracBits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &toCopy);
		Fixed(const int param);
		Fixed(const float param);
		~Fixed(void);

		void operator = (const Fixed &toCopyFrom);

		float toFloat( void ) const;
		int toInt( void ) const; 
};

std::ostream &operator << (std::ostream &output, const Fixed &obj);

#endif