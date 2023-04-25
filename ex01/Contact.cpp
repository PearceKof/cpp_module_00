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

#include "Contact.hpp"

Contact::Contact() : first_name(""), last_name(""), nickname(""),
	phone_number(""), darkest_secret("")
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
	return (to_print.substr(0, 9) + ".");
}

void	Contact::print_contact_tab( int index ) const
{
	std::cout << "|         " << ( index + 1 );
	std::cout << "|" << std::setw(10) << print_one_row(this->first_name);
	std::cout << "|" << std::setw(10) << print_one_row(this->last_name);
	std::cout << "|" << std::setw(10) << print_one_row(this->nickname);
	std::cout << "|" << std::endl;
}

void	Contact::print_all_contact_infos( void ) const
{
	std::cout << "first name: " << this->first_name << std::endl;
	std::cout << "last name: " << this->last_name << std::endl;
	std::cout << "nickname: " << this->nickname << std::endl;
	std::cout << "phone number: " << this->phone_number << std::endl;
	std::cout << "darkest secret: " << this->darkest_secret << std::endl;
}

void	Contact::create_new_contact()
{
	this->first_name = get_and_trim_line("Enter the first name: ");
	this->last_name = get_and_trim_line("Enter the last name: ");
	this->nickname = get_and_trim_line( "Enter the nickanme: ");
	this->phone_number = get_and_trim_line("Enter the phone number: ");
	this->darkest_secret = get_and_trim_line("Enter the darkest secret: ");
	std::cout << this->first_name << " succesfully added to the phonebook" << std::endl;
}
