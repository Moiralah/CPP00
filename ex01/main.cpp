/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 05:12:36 by huidris           #+#    #+#             */
/*   Updated: 2025/06/15 05:15:09 by huidris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>
#include <string>
#include <iomanip>

int main()
{
	std::string	input;
	PhoneBook phonebook;

	std::cout << "----MAI AWESOME PHONEBOOK----" << std::endl;
	std::cout << "Use 'ADD' to add contact" << std::endl;
	std::cout << "Use 'SEARCH' to find contact" << std::endl;
	std::cout << "Use 'EXIT' to get out" << std::endl;
	std::cout << "Use 'HELP' for instruction" << std::endl;
	while(1)
	{

		std::cout << "Enter command :- ";
		std::getline(std::cin, input);
		if (input == "EXIT" || std::cin.eof())
			return (phonebook.exitPhonebook(), 0);
		else if (input == "ADD")
			phonebook.addContact();
		else if (input == "SEARCH")
			phonebook.searchContact();
		else if (input.empty() || input == "")
			std::cout << "Input cannot be empty. Please try again." << std::endl;
		else if (input == "HELP")
			{
				std::cout << "Use 'ADD' to add contact" << std::endl;
				std::cout << "Use 'SEARCH' to find contact" << std::endl;
				std::cout << "Use 'EXIT' to exit." << std::endl;
			}
		else if (input == "TEST")
			phonebook.inputTest();
		else
			std::cout << "Invalid command. Read instruction." << std::endl;
	}
}
