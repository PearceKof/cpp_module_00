/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:48:50 by blaurent          #+#    #+#             */
/*   Updated: 2023/03/21 15:48:50 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

int main( int ac, char **av )
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (EXIT_SUCCESS);
	}
	for(int i = 1 ; av[i]; i++)
	{
		for(int j = 0 ; av[i][j] ; j++)
		{
			if (av[i][j] >= 'a' && av[i][j] <= 'z')
			{
				std::cout << (char)(toupper((int)av[i][j])) << std::flush;;
			}
			else
			{
				std::cout << av[i][j] << std::flush;
			}
		}
		if ((ac - 1) > i)
			std::cout << ' ' << std::flush;;
	}
	std::cout << std::endl;
    return (0);
}
