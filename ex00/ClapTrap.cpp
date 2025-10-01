/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 22:10:09 by yosherau          #+#    #+#             */
/*   Updated: 2025/10/01 23:42:14 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void):
	name("dflt_"),
	hitPoints(10),
	energyPoints(10),
	attackDamage(0)
{
	std::cout << "Default ClapTrap has spawned" << std::endl;
}

ClapTrap::ClapTrap(std::string name):
	name(name),
	hitPoints(10),
	energyPoints(10),
	attackDamage(0)
{
	std::cout << "ClapTrap " << this->name << " has spawned" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap ";
	std::cout << this->name;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << ", causing";
	std::cout << this->attackDamage;
	std::cout << " points of damage" << std::endl;
}