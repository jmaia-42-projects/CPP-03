/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:10:22 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 15:42:12 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#include <iostream>
#include <string>

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap: Default constructor called" << std::endl;
	this->name = "";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name):	ClapTrap(name)
{
	std::cout << "ScavTrap: Constructor with name called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &obj):	ClapTrap()
{
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
	*this = obj;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap: Destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &obj)
{
	std::cout << "ScavTrap: Assignment operator called" << std::endl;
	ClapTrap::operator=(obj);
	return (*this);
}

void	ScavTrap::guardGuate(void)
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode !" << std::endl;
}
