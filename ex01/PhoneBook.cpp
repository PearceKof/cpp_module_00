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

PhoneBook::PhoneBook() : number_of_contact(0), index_older_contact(0)
{
	std::cout << "Welcome in the phone book :)\n" << std::endl;
	std::cout << "Please choose an option :" << std::endl;
	std::cout << "ADD    : add a new contact" << std::endl;
	std::cout << "SEARCH : looking for someone ?" << std::endl;
	std::cout << "EXIT   : end the program\n" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Phone book destroyed" << std::endl;
}

void	PhoneBook::search()
{
	int		i(0);

	if (i < this->number_of_contact == 0)
	{
		std::cout << "No contact added in the phone book" << std::endl;
		std::cout << "Please, use the ADD command and try again" << std::endl;
		return ;
	}
	std::cout << " __________ __________ __________ __________ " << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << " ---------- ---------- ---------- ---------- " << std::endl;
	for (i = 0 ; i < this->number_of_contact ; i++)
	{
		this->contact[i].print_contact_tab( i );
	}

	std::string	index_of_searched_contact(get_and_trim_line("Type the index of the contact you are intersted in: "));
	if (index_of_searched_contact.size() == 1)
	{
		int		index_integer(atoi(index_of_searched_contact.c_str()));
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
}
