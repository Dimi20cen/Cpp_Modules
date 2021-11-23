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

		bool operator == (const Fixed &obj) const;
		bool operator <= (const Fixed &obj) const;
		bool operator >= (const Fixed &obj) const;
		bool operator < (const Fixed &obj) const;
		bool operator > (const Fixed &obj) const;
		bool operator != (const Fixed &obj) const;

		Fixed operator + (const Fixed &obj);
		Fixed operator - (const Fixed &obj);
		Fixed operator * (const Fixed &obj);
		Fixed operator / (const Fixed &obj);

		Fixed operator++(int);
		Fixed &operator++(void);
		Fixed operator--(int);
		Fixed &operator--(void);

		static Fixed &min(Fixed &num1, Fixed &num2);
		static Fixed &max(Fixed &num1, Fixed &num2);
		const static Fixed &min(const Fixed &num1, const Fixed &num2);
		const static Fixed &max(const Fixed &num1, const Fixed &num2);

		float toFloat( void ) const;
		int toInt( void ) const; 
};

std::ostream &operator << (std::ostream &output, const Fixed &obj);

#endif