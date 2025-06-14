/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 06:28:46 by huidris           #+#    #+#             */
/*   Updated: 2025/06/14 12:56:55 by huidris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **argv)
{
	if(ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	if (ac > 1)
	{
		int i = 0;
		while (argv[++i])
		{
			int j = -1;
			while (argv[i][++j])
				std::cout << (char)toupper(argv[i][j]);
		}
	}
	std::cout << '\n';
	return 0;
}
