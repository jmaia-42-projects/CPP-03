/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:10:22 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 16:44:54 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <iostream>
#include <string>

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap: Default constructor called" << std::endl;
	this->name = "";
	this->hitPoints = FRAG_TRAP_DEFAULT_HIT_POINTS;
	this->energyPoints = FRAG_TRAP_DEFAULT_ENERGY_POINTS;
	this->attackDamage = FRAG_TRAP_DEFAULT_ATTACK_DAMAGE;
}

FragTrap::FragTrap(std::string name):	ClapTrap(name)
{
	std::cout << "FragTrap: Constructor with name called" << std::endl;
	this->hitPoints = FRAG_TRAP_DEFAULT_HIT_POINTS;
	this->energyPoints = FRAG_TRAP_DEFAULT_ENERGY_POINTS;
	this->attackDamage = FRAG_TRAP_DEFAULT_ATTACK_DAMAGE;
}

FragTrap::FragTrap(FragTrap const &obj):	ClapTrap()
{
	std::cout << "FragTrap: Copy constructor called" << std::endl;
	*this = obj;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap: Destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &obj)
{
	std::cout << "FragTrap: Assignment operator called" << std::endl;
	ClapTrap::operator=(obj);
	return (*this);
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->name << " wants a high five !" << std::endl;
}
