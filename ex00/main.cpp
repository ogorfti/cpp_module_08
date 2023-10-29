/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:10:38 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/29 14:41:12 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	try
	{
		std::list<int> v;
		v.push_back(13);
		v.push_back(37);
		::easyfind(v, 42);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
