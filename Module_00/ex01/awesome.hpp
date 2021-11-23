/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   awesome.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmylonas <dmylonas@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:08:35 by dmylonas          #+#    #+#             */
/*   Updated: 2021/11/02 15:36:55 by dmylonas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWESOME_HPP
# define AWESOME_HPP

# include <string>
# include <iostream>

class contacts{
	public:
		std::string fname;
		std::string lname;
		std::string nickname;
		std::string number;
		std::string secret;
		bool add_info(void);
		void get_header(int index);
		void get_contact(void);
};

class PhoneBooks{
	public:
		int			index;
		contacts	array_contacts[8];
	bool add_contact(int index);
	void searching(void);
};

#endif