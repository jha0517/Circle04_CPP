/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahjung <hyunahjung@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:33:23 by hyunahjung        #+#    #+#             */
/*   Updated: 2022/12/08 11:42:42 by hyunahjung       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
# include <string>
# include <iostream>
# include <stdlib.h>
# include <iomanip>

class Contact {

public:
	int 		setContact(void);
	void 		printDetails(void) const;
	std::string getFirstName(void) const;
	std::string getLastName(void) const;
	std::string getNickName(void) const;
	Contact(void);
	~Contact(void);

private:

	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _darkestSecret;
	std::string _phoneNumber;
};

#endif