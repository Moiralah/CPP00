/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:05:48 by huidris           #+#    #+#             */
/*   Updated: 2025/06/15 19:11:19 by huidris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {};
Contact::~Contact() {};

void Contact::setContact()
{
	std::string input;

	std::cout << "Enter first name" << std::endl;
	_firstName = validateInput(input);
	std::cout << "Enter last name" << std::endl;
	_lastName = validateInput(input);
	std::cout << "Enter nickname" << std::endl;
	_nickName = validateInput(input);
	std::cout << "Enter phone number" << std::endl;
	_phoneNumber = validateInput(input);
	std::cout << "Enter darkest secret" << std::endl;
	_darkestSecret = validateInput(input);
	std::cout << "Contact added successfully!" << std::endl;
}

std::string Contact::validateInput(std::string &input)
{
	std::cout << ": ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return (" ");
	input = trimInput(input);
	if (input.empty())
	{
		std::cout << "Input cannot be empty. Please try again." << std::endl;
		return validateInput(input);
	}
	return input;
}

std::string Contact::trimInput(std::string &input)
{
	size_t start = input.find_first_not_of(" \t");
	size_t end = input.find_last_not_of(" \t");
	if (start == std::string::npos || end == std::string::npos)
		return "";
	return (input.substr(start, end - start + 1));
}

void Contact::displayContact() const
{
	std::cout << std::setw(10) << std::right << getContact(_firstName) << "|"
			  << std::setw(10) << std::right << getContact(_lastName) << "|"
			  << std::setw(10) << std::right << getContact(_nickName) << "|"
			  << std::endl;
}

std::string Contact::getContact(const std::string &contact) const
{
	if (contact.length() > 10)
		return (contact.substr(0, 9) + ".");
	return contact;
}

void Contact::searchContact() const
{
	std::cout << "First Name	: " << this->_firstName << std::endl;
	std::cout << "Last Name	: " << this->_lastName << std::endl;
	std::cout << "Nickname	: " << this->_nickName << std::endl;
	std::cout << "Phone Number	: " << this->_phoneNumber << std::endl;
	std::cout << "Darkest Secret	: " << this->_darkestSecret << std::endl;
}

void Contact::setTest()
{
	this->_firstName = "John Lechan Kin";
	this->_lastName = "Chan";
	this->_nickName = "Legend";
	this->_phoneNumber = "1234567890";
	this->_darkestSecret = "I love pineapple on pizza.";
	std::cout << "Test contact added successfully!" << std::endl;
}
