/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:53:11 by blaurent          #+#    #+#             */
/*   Updated: 2023/04/04 14:53:11 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->number_of_contact = 0;
	this->index_older_contact = 0;
	std::cout << "Welcome in the phone book :)\n" << std::endl;
	std::cout << "Please choose an option :" << std::endl;
	std::cout << "ADD    : add a new contact" << std::endl;
	std::cout << "SEARCH : looking for someone ?" << std::endl;
	std::cout << "EXIT   : end the program\n" << std::endl;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::search()
{
	int		i(0);

	for (i = 0 ; i < this->number_of_contact ; i++)
	{
		this->contact[i].print_contact_tab( i );
	}
	if (i == 0)
	{
		std::cout << "No contact added in the phone book" << std::endl;
		std::cout << "Please, use the ADD command and try again" << std::endl;
		return ;
	}
	std::cout << "Type the index of the contact you are intersted in: " << std::endl;
	std::string	index_of_searched_contact("");
	do
	{
		std::getline(std::cin, index_of_searched_contact);
	}
	while (index_of_searched_contact.empty() || !is_valid_input(index_of_searched_contact));
	if (index_of_searched_contact.size() == 1)
	{
		int		index_integer(std::stoi(index_of_searched_contact));
		if (0 < index_integer && index_integer <= this->number_of_contact)
		{
			this->contact[index_integer - 1].print_all_contact_infos();
			return ;
		}
	}
	std::cout << "Invalid index" << std::endl;
}

void	PhoneBook::add()
{
	Contact	new_contact;

	new_contact.create_new_contact();
	if (this->number_of_contact >= 8)
	{
		this->contact[this->index_older_contact] = new_contact;
		this->index_older_contact++;
		if (this->index_older_contact >= 8)
		{
			this->index_older_contact = 0;
		}
	}
	else
	{
		this->contact[this->number_of_contact] = new_contact;
		this->number_of_contact++;
	}
	return ;
}
