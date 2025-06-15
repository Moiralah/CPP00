#include "Contact.hpp"
#include "Phonebook.hpp"
#include <iostream>
#include <string>
#include <iomanip>

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
	if (input.empty())
	{
		std::cout << "Input cannot be empty. Please try again." << std::endl;
		return validateInput(input);
	}
	// for (size_t i = 0; i < input.length(); i++)
	// {
	// 	if (input[i] == ' '|| input[i] == '\t')
	// 	{
	// 		std::cout << "Input cannot contain spaces. Please try again." << std::endl;
	// 		return validateInput(input);
	// 	}
	// }
	return input;
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
