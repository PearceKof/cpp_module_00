/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:53:11 by blaurent          #+#    #+#             */
/*   Updated: 2023/04/04 14:53:11 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	m_number_of_contact = 0;
	m_index_older_contact = 0;
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
	char	index_of_searched_contact('\0');
	int		index_integer(0);
	int		i(0);

	for ( i = 0 ; i < m_number_of_contact ; i++ )
	{
		m_contact[i].print_contact_tab( i );
	}

	if ( i == 0 )
	{
		std::cout << "No contact added in the phone book" << std::endl;
		std::cout << "Please, use the ADD command and try again" << std::endl;
		return ;
	}

	std::cout << "Type the index of the contact you are intersted in: ";
	do
	{
		index_of_searched_contact = std::getchar();
	}
	while ( ( index_of_searched_contact <= 33 ) || ( 126 <= index_of_searched_contact) );

	if ( '1' <= index_of_searched_contact && index_of_searched_contact <= '8' )
	{
		index_integer = ( ( int )index_of_searched_contact - 48 );
		if ( index_integer <= m_number_of_contact )
		{
			m_contact[index_integer - 1].print_all_contact_infos();
		}
		else
		{
			std::cout << "No contact registered there" << std::endl;
		}
	}
	else
	{
		std::cout << "Invalid index" << std::endl;
	}

	return ;
}

void	PhoneBook::add()
{
	Contact	new_contact;

	new_contact.create_new_contact();
	if ( m_number_of_contact >= 8 )
	{
		m_contact[m_index_older_contact] = new_contact;
		m_index_older_contact++;
		if ( m_index_older_contact >= 8 )
		{
			m_index_older_contact = 0;
		}
	}
	else
	{
		m_contact[m_number_of_contact] = new_contact;
		m_number_of_contact++;
	}
	return ;
}
