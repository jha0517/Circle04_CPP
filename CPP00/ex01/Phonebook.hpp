/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahjung <hyunahjung@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:33:27 by hyunahjung        #+#    #+#             */
/*   Updated: 2022/12/08 21:43:25 by hyunahjung       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

int	isequal(std::string a, std::string b);

class Phonebook {
public:
	void	loop();
	Phonebook(void);
	~Phonebook(void);

private:
	int 	_add(void);
	int 	_search(void);
	int		_total;
	Contact	_contact[8];
};

#endif