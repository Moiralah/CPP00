/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 03:59:46 by huidris           #+#    #+#             */
/*   Updated: 2025/05/26 06:28:55 by huidris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook
{
	public: // can be accesesed inside and outside the class

		int	phonenumber;

		char	a1;
		int		a2;
		float	const a3;

		PhoneBook(char p1, int p2, float const p3);
		~PhoneBook(void);

		void	dono(void) const;

	private: // can only be seen  inside. can protect from user to see it

		int _foo; // use _for the naming to easily diffrentiate from the public

		void _secretfoo (void) const;
};

#endif
