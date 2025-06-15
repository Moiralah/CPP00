/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 19:14:23 by huidris           #+#    #+#             */
/*   Updated: 2025/06/15 19:14:49 by huidris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;

	public:
		Contact();
		~Contact();

		// ADD
		void setContact();
		std::string validateInput(std::string &input);
		std::string trimInput(std::string &input);

		// SEARCH
		void displayContact() const;
		void searchContact() const;
		std::string getContact(const std::string &contact) const;

		// TEST
		void setTest();
};

#endif
