/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FralTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 09:46:16 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/28 09:46:16 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP    

#include "ClapTrap.hpp"

class FlagTrap : ClapTrap
{
    private :

    public :

    FlagTrap();
    FlagTrap(std::string name);
    // Flagtrap();
    ~FlagTrap();
    void    hightFivesGuys(void);

};

#endif