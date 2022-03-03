/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 04:07:38 by melperri          #+#    #+#             */
/*   Updated: 2022/03/04 00:31:57 by rvalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


void	ft_print_energy(const ClapTrap &claptrap) {
	std::cout << "ClapTrap " << claptrap.getName()
		<< " has " << GREEN << claptrap.getEnergie() << END_COLOR
		<< " points of energy..." << std::endl;
}

void	ft_print_hit(const ClapTrap &claptrap) {
	std::cout << "ClapTrap " << claptrap.getName() << " has "
		<< GREEN << claptrap.getHit() << END_COLOR
		<< " hit points." << std::endl;
}

int	main(void) {
	ClapTrap	john("John");
	ClapTrap	rambo("Rambo");

	ft_print_hit(john);
	ft_print_hit(rambo);
	rambo.attack(john.getName());
	john.takeDamage(john.getDamage());
	rambo.beRepaired(1);
	rambo.attack(john.getName());
	john.takeDamage(rambo.getDamage());
	ft_print_hit(john);
	ft_print_hit(rambo);
	rambo.beRepaired(2);
	rambo.attack(john.getName());
	john.takeDamage(rambo.getDamage());
	rambo.beRepaired(1);
	ft_print_hit(john);
	ft_print_hit(rambo);
	rambo.attack(john.getName());
	john.takeDamage(rambo.getDamage());
	rambo.attack(john.getName());
	john.takeDamage(rambo.getDamage());
	rambo.attack(john.getName());
	john.takeDamage(rambo.getDamage());
	rambo.attack(john.getName());
	rambo.beRepaired(1);

	return 0;
}
