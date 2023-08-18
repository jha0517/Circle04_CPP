/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:33:23 by hyunahjung        #+#    #+#             */
/*   Updated: 2023/02/04 19:12:58 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <string>
# include <iostream>

class Weapon {

public:
	Weapon(std::string type);
	~Weapon(void);
	std::string const & getType() const;
	void				setType(std::string newtype);

private:

	std::string _type;

};

#endif