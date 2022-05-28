/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 10:57:52 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 13:18:08 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(void) : 
	hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap : Default constructor called" << std::endl;
	this->name = "";
}

ClapTrap::ClapTrap(std::string name) :
	hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap : Constructor with name called" << std::endl;
	this->name = name;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
	std::cout << "ClapTrap : Copy constructor called" << std::endl;
	*this = obj;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap : Destructor called" << std::endl;
};

ClapTrap &ClapTrap::operator=(ClapTrap const &obj)
{
	std::cout << "ClapTrap : Assignement operator called" << std::endl;
	this->name = obj.name;
	this->hitPoints =  obj.hitPoints;
	this->energyPoints = obj.energyPoints;
	this->attackDamage = obj.attackDamage;
	return (*this);
}

void	ClapTrap::attack(std::string const &target)
{
	if (!checkCanDoAction(*this))
		return ;
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints == 0)
	{
		std::cerr << "ClapTrap " << this->name << " is already dead !" << std::endl;
		return ;
	}
	this->hitPoints -= amount <= this->hitPoints ? amount : this->hitPoints;
	std::cout << "ClapTrap " << this->name << " took " << amount << " damage ! Its life is now " << this->hitPoints << "HP" << std::endl;
	if (this->hitPoints == 0)
		std::cout << "ClapTrap " << this->name << " died" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int	oldHitPoints;

	if (!checkCanDoAction(*this))
		return ;
	this->energyPoints--;
	oldHitPoints = this->hitPoints;
	this->hitPoints += amount;
	if (this->hitPoints < oldHitPoints)
		this->hitPoints = -1;
	std::cout << "ClapTrap " << this->name << " repaired by " << amount << "HP. Its life is now " << this->hitPoints << std::endl;
}

bool	ClapTrap::checkCanDoAction(ClapTrap const &clapTrap)
{
	if (clapTrap.hitPoints == 0)
	{
		std::cerr << "ClapTrap " << this->name << " is dead" << std::endl;
		return (false);
	}
	if (clapTrap.energyPoints == 0)
	{
		std::cerr << "ClapTrap " << this->name << " do not have enough energy points to attack" << std::endl;
		return (false);
	}
	return (true);
}

void	ClapTrap::print(std::ostream &os) const
{
	os << "ClapTrap : {name: " << this->name << ", hitPoints: " << this->hitPoints << ", energyPoints: " << this->energyPoints << ", attackDamage: " << this->attackDamage << "}";
}

std::ostream	&operator<<(std::ostream &os, ClapTrap const &clapTrap)
{
	clapTrap.print(os);
	return (os);
}
