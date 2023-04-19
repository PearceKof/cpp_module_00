/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:53:24 by blaurent          #+#    #+#             */
/*   Updated: 2023/04/04 14:53:24 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <fstream>
# include "Contact.hpp"

class PhoneBook
{
	public :

	PhoneBook();
	~PhoneBook();
	void	add( void );
	void	search( void );

	private :

	Contact m_contact[8];
	int		m_number_of_contact;
	int		m_index_older_contact;
};


#endif