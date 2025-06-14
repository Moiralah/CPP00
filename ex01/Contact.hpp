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

		// SEARCH
		void displayContact() const;
		void searchContact() const;
		std::string getContact(const std::string &contact) const;

		// TEST
		void setTest();
};

#endif
