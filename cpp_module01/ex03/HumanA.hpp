/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahjung <hyunahjung@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:33:23 by hyunahjung        #+#    #+#             */
/*   Updated: 2022/11/29 15:42:05 by hyunahjung       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H
# include "Weapon.hpp"

class HumanA {

public:
	void attack(void);
	HumanA(std::string name, Weapon& newtype);
	~HumanA(void);

private:
	std::string _name;
	Weapon& _weapon;
};

#endif