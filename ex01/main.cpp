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
		do
		{
			std::getline(std::cin, line);
		} while (line.empty());
		if (line.find_first_not_of(' ') < line.find_last_not_of(' '))
		{
			line = line.substr(line.find_first_not_of(' '), (line.find_last_not_of(' ') + 1));
			if (line == "ADD")
			{
				phonebook.add();
			}
			else if (line == "SEARCH")
			{
				phonebook.search();
			}
			else if (line != "EXIT")
			{
				std::cout << "Unkmown command \""<< line << "\"\nPlease use a valid command :" << std::endl;
				std::cout << "ADD    : add a new contact" << std::endl;
				std::cout << "SEARCH : looking for someone ?" << std::endl;
				std::cout << "EXIT   : end the program\n" << std::endl;
			}
		}
	}
	return (0);
}
