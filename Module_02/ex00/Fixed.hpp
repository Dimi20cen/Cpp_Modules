#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					value;
		static const int	n_of_fracBits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &toCopy);
		~Fixed(void);
		void operator = (const Fixed &toCopyFrom);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif