/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 03:59:46 by huidris           #+#    #+#             */
/*   Updated: 2025/06/15 17:12:34 by huidris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

class PhoneBook
{
	private:
		int _contactNumber;
		Contact _contacts[8];

	public:
		PhoneBook();
		~PhoneBook();

		void addContact();
		void searchContact();
		void headerDisplay();
		void exitPhonebook();
		void inputTest();
};

#endif
