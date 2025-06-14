
#include <iostream>
#include "Phonebook.hpp"
#include "Contact.hpp"
#include <string>
#include <iomanip>

// PhoneBook::PhoneBook(char p1, int p2, float const p3) :
// 	a1(p1),
// 	a2(p2),
// 	a3(p3) // intialization list simpler way to initialize
// {
// 	std::cout << "Constructor called" << std::endl;

// 	this->phonenumber = 01234; // this is pointer variable
// 	std::cout << "this->phonenumber: " << this->phonenumber << std::endl;

// 	this->dono();

// 	this->a1 = p1;
// 	std::cout << "this->a1 = " << this->a1 << std::endl;

// 	this->a2 = p2;
// 	std::cout << "this->a2 = " << this->a2 << std::endl;

// 	this->a3 = p3;
// 	std::cout << "this->a3 = " << this->a3 << std::endl;

// 	return;
// }

// PhoneBook::~PhoneBook(void)
// {
// 	std::cout << "Destructor called" << std::endl;
// 	return;
// }

// void	PhoneBook::dono(void) const // const ensure it doesnt change anything
// {
// 	std::cout << "Member function" << std::endl;
// 	return;
// }

PhoneBook::PhoneBook()
{
	_contactNumber = 0;
}
PhoneBook::~PhoneBook() {}

void PhoneBook::addContact()
{
	int index = _contactNumber;
	std::cout << "Adding contact..." << std::endl;
	if (_contactNumber >= 8)
	{
		index = _contactNumber % 8; // Reset contact number to 0 if it exceeds 8
		std::cout << "Phonebook is full. Overwriting the oldest contact." << std::endl;
	}
	_contacts[index].setContact();
	_contactNumber++;
}

void PhoneBook::searchContact()
{
	if (_contactNumber == 0)
	{
		std::cout << "No contacts available. Please add a contact first." << std::endl;
		return;
	}
	headerDisplay();
	int index = 0;
	while(index < _contactNumber && index < 8)
	{
		std::cout << std::setw(9) <<std::left << "Num " << index + 1 << "| ";
		_contacts[index].displayContact();
		index++;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "Searching contact..." << std::endl;
	int indexInt = 0;
	while (1)
	{
		std::cout << "Enter the index of the contact you want to search: ";
		std::string indexChoice;
		std::getline(std::cin, indexChoice);
		indexInt = indexChoice[0] - '0' - 1;
		if (indexChoice.length() == 1 && indexInt >= 0 && indexInt < _contactNumber)
			break;
		else
			std::cout << "Invalid index. Please try again." << std::endl;
	}
	_contacts[indexInt].searchContact();

}

void PhoneBook::headerDisplay()
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << std::setw(10) << std::left << "Index" << "|"
			  << std::setw(10) << std::left << "First Name " << "|"
			  << std::setw(10) << std::left << "Last Name" << "|"
			  << std::setw(10) << std::left << "Nickname" << "|"
			  << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

void PhoneBook::exitPhonebook()
{
	std::cout << "Exiting phonebook..." << std::endl;
	return;
}

void PhoneBook::inputTest()
{
	int index = 0;
	while (index < 8)
	{
		_contacts[index].setTest();
		_contactNumber++;
		index++;
		std::cout << "Contact " << _contactNumber << " added for testing." << std::endl;
	}
}
