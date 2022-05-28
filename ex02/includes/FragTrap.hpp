/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:45:03 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 18:00:40 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# define FRAG_TRAP_DEFAULT_HIT_POINTS 100
# define FRAG_TRAP_DEFAULT_ENERGY_POINTS 100
# define FRAG_TRAP_DEFAULT_ATTACK_DAMAGE 30

# include <string>

# include "ClapTrap.hpp"

class	FragTrap:	public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &obj);
		~FragTrap(void);

		FragTrap	&operator=(FragTrap const &obj);

		void	highFiveGuys(void);
};

#endif
