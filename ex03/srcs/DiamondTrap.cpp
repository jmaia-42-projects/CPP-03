/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 16:06:40 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 17:57:53 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap: Default constructor called" << std::endl;
	this->name = "";
	ClapTrap::name = "_clap_name";
	this->hitPoints = FRAG_TRAP_DEFAULT_HIT_POINTS;
	this->energyPoints = SCAV_TRAP_DEFAULT_ENERGY_POINTS;
	this->attackDamage = FRAG_TRAP_DEFAULT_ATTACK_DAMAGE;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap: Constructor with name called" << std::endl;
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	this->hitPoints = FRAG_TRAP_DEFAULT_HIT_POINTS;
	this->energyPoints = SCAV_TRAP_DEFAULT_ENERGY_POINTS;
	this->attackDamage = FRAG_TRAP_DEFAULT_ATTACK_DAMAGE;
}

DiamondTrap::DiamondTrap(DiamondTrap const &obj):	ClapTrap(obj), FragTrap(obj), ScavTrap(obj)
{
	std::cout << "DiamondTrap: Copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap: Destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &obj)
{
	(void) obj;
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Hello ! I am " << this->name << " as a DiamondTrap but I am " << ClapTrap::name << " as a ClapTrap" << std::endl;
}
