/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 08:11:13 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/28 08:11:13 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

int main()
{
    FlagTrap Flag("Odin");
    FlagTrap Flag2("Floki");
    FlagTrap Flaag = Flag2;
    Flag.attack("Floki");
    Flag2.takeDamage(500);
    Flag.beRepaired(10);
    Flag.();
    return 0;
}

// Change this main
// voir pour attack
// regler couleur and name of attribut et tout
