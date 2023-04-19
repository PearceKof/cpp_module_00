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

	std::string m_first_name;
	std::string m_last_name;
	std::string m_nickname;
	std::string m_phone_number;
	std::string m_darkest_secret;

};

#endif