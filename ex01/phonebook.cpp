
#include <iostream>
#include "Phonebook.hpp"

PhoneBook::PhoneBook(char p1, int p2, float const p3) :
	a1(p1),
	a2(p2),
	a3(p3) // intialization list simpler way to initialize
{
	std::cout << "Constructor called" << std::endl;

	this->phonenumber = 01234; // this is pointer variable
	std::cout << "this->phonenumber: " << this->phonenumber << std::endl;

	this->dono();

	this->a1 = p1;
	std::cout << "this->a1 = " << this->a1 << std::endl;

	this->a2 = p2;
	std::cout << "this->a2 = " << this->a2 << std::endl;

	this->a3 = p3;
	std::cout << "this->a3 = " << this->a3 << std::endl;

	return;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	PhoneBook::dono(void) const // const ensure it doesnt change anything
{
	std::cout << "Member function" << std::endl;
	return;
}

int main()
{
	char	buffer[9];

	std::cout << "Please input name" << std::endl;
	std::cin >> buffer;
	std::cout << "Name:"<< buffer << std::endl;

	PhoneBook detail;

	return (0);
}
