/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:38:26 by blaurent          #+#    #+#             */
/*   Updated: 2023/03/21 15:38:26 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for(int i = 1; av[i]; i++)
	{
		for(int j = 0; av[i][j]; j++)
		{
			if (av[i][j] >= 'a'  && av[i][j] <= 'z')
				std::cout << (char)(av[i][j] - 32);
			else
				std::cout << av[i][j];
		}
		if ((ac - 1) > i)
			std::cout << ' ';
	}
	std::cout << std::endl;
    return (0);
}
