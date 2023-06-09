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

std::string	get_and_trim_line()
{
	std::string	line;
	std::string	trimmed_line;

	do
	{
			std::getline(std::cin, line);
	} while (line.empty() || !is_valid_input(line));
	size_t	begin(line.find_first_not_of(' ')), size(line.find_last_not_of(' ') + 1);
	size = size - begin;
	return (line.substr(begin, size));
}

std::string	get_and_trim_line( std::string prompt )
{
	std::string	line;
	std::string	trimmed_line;

	std::cout << prompt << std::endl;
	do
	{
			std::getline(std::cin, line);
	} while (line.empty() || !is_valid_input(line));
	size_t	begin(line.find_first_not_of(' ')), size(line.find_last_not_of(' ') + 1);
	size = size - begin;
	return (line.substr(begin, size));
}

bool	is_valid_input(std::string line)
{
	bool	is_only_space(1);

	for (size_t i = 0 ; i < line.length() ; i++)
	{
		if (!isprint(line[i]))
			return(0);
		if (is_only_space == 1 && line[i] != ' ')
			is_only_space = 0;
	}
	if (is_only_space == 1)
	{
		return (0);
	}
	return (1);
}

int	main( void )
{
	PhoneBook	phonebook;
	std::string	line("");

	while (line != "EXIT")
	{
		line = get_and_trim_line();
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
	return (0);
}
