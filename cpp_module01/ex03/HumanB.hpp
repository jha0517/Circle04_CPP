/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahjung <hyunahjung@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:33:23 by hyunahjung        #+#    #+#             */
/*   Updated: 2022/11/29 09:44:56 by hyunahjung       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_H
# define HumanB_H
# include "Weapon.hpp"

class HumanB {

public:
	void setWeapon(Weapon& weapon);
	void attack(void);
	HumanB(std::string name);
	~HumanB(void);

private:
	std::string _name;
	Weapon* _weapon;
};

#endif