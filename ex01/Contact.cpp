/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:54:06 by blaurent          #+#    #+#             */
/*   Updated: 2023/04/04 14:54:06 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact() : m_first_name(""), m_last_name(""), m_nickname(""),
	m_phone_number(""), m_darkest_secret("")
{
}

Contact::~Contact()
{
}

std::string	Contact::print_one_row( std::string to_print ) const
{
	if (to_print.size() <= 10)
	{
		return (to_print);
	}
	else
	{
		return (to_print.substr(0, 9) + ".");
	}
}

void	Contact::print_contact_tab( int index ) const
{
	std::cout << " __________ __________ __________ __________ " << std::endl;
	std::cout << "|         " << ( index + 1 );
	std::cout << "|" << std::setw(10) << print_one_row(m_first_name);
	std::cout << "|" << std::setw(10) << print_one_row(m_last_name);
	std::cout << "|" << std::setw(10) << print_one_row(m_nickname);
	std::cout << "|" << std::endl;
}

void	Contact::print_all_contact_infos( void ) const
{
	std::cout << "first name: " << m_first_name << std::endl;
	std::cout << "last name: " << m_last_name << std::endl;
	std::cout << "nickname: " << m_nickname << std::endl;
	std::cout << "phone number: " << m_phone_number << std::endl;
	std::cout << "darkest secret: " << m_darkest_secret << std::endl;
}

std::string	Contact::readUntilNotEmpty( std::string prompt )
{
	std::string	line;

	do
	{
		std::cout << prompt << std::flush;
		std::getline(std::cin, line);
	}
	while (line.empty());
	return (line);
}

void	Contact::create_new_contact()
{
	m_first_name = readUntilNotEmpty("Enter the first name: ");
	m_last_name = readUntilNotEmpty("Enter the last name: ");
	m_nickname = readUntilNotEmpty( "Enter the nickanme: ");
	m_phone_number = readUntilNotEmpty("Enter the phone number: ");
	m_darkest_secret = readUntilNotEmpty("Enter the darkest secret: ");
}
