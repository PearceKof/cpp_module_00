/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 15:08:58 by blaurent          #+#    #+#             */
/*   Updated: 2023/04/04 15:08:58 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main( void )
{
	PhoneBook	phonebook;
	std::string	line("");

	while (line != "EXIT")
	{
		std::cin >> line;
		if (line == "ADD")
		{
			phonebook.add();
		}
		else if (line == "SEARCH")
		{
			phonebook.search();
		}
	}
	return (0);
}
