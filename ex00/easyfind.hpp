/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:11:08 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/29 13:29:51 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <list>

template <typename T>

void easyfind(T& container, int find)
{
	for (typename T::iterator it = container.begin(); it != container.end() ; it++)
	{
		if (*it == find)
		{
			std::cout << "find it\n";
			return ;
		}
	}
	throw std::invalid_argument("not found");
}
