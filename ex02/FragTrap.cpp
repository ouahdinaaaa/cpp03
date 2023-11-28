/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 09:55:45 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/28 09:55:45 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FlagTrap::FlagTrap(): ClapTrap(), name(name)
{
    hitPoint = 100;
    energyPoint = 100;
    attckDamage = 30;
    std::cout << "FlagTrap : Default construtor called !!!" << std::endl;
}

FlagTrap::FlagTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FlagTrap : " << name << "has been created !!!" << std::endl;
}

FlagTrap::~FlagTrap(){
    std::cout << "FlagTrap has been destroyed !!!" << std::endl;
}

FlagTrap::FlagTrap(FlagTrap &Flag) : ClapTrap(&Flag)
{
    *this = Flag;
    std::cout << "FlagTrap : copy constructor called !!!" << std::endl;
}


FlagTrap& FlagTrap::operator=(const FlagTrap &Flag)
{
    if (this != &Flag){
        name = Flag.name;
        hitPoint = Flag.hitPoint;
        energyPoint = Flag.energyPoint;
        attckDamage = Flag.attckDamage;
        std::cout << "FlagTrap : Copy assignement called" << std::endl;
    }
    return (*this);
}
