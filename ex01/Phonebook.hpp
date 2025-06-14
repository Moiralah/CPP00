/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 03:59:46 by huidris           #+#    #+#             */
/*   Updated: 2025/06/15 01:40:26 by huidris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

// class PhoneBook
// {
// 	public: // can be accesesed inside and outside the class

// 		int	phonenumber;

// 		char	a1;
// 		int		a2;
// 		float	const a3;

// 		PhoneBook(char p1, int p2, float const p3);
// 		~PhoneBook(void);

// 		void	dono(void) const;

// 	private: // can only be seen  inside. can protect from user to see it

// 		int _foo; // use _for the naming to easily diffrentiate from the public

// 		void _secretfoo (void) const;
// };
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
