/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:15:44 by blaurent          #+#    #+#             */
/*   Updated: 2023/04/19 13:15:44 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <string>
# include <iostream>
# include <iomanip>

class Contact
{
	public :

	Contact();
	~Contact();
	std::string	readUntilNotEmpty( std::string prompt );
	void		create_new_contact( void );
	void		print_all_contact_infos( void ) const;
	void		print_contact_tab( int index ) const;
	std::string	print_one_row( std::string to_print ) const;

	private :

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

};

bool	is_valid_input(std::string line);

#endif