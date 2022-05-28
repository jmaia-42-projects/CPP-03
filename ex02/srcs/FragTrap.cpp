/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:10:22 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 15:49:28 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <iostream>
#include <string>

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap: Default constructor called" << std::endl;
	this->name = "";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name):	ClapTrap(name)
{
	std::cout << "FragTrap: Constructor with name called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
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
