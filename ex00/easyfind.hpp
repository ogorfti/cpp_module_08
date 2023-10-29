/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:11:08 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/29 14:40:58 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <list>

template <typename T>

void easyfind(T& container, int find)
{
	if (std::find(container.begin(), container.end(), find) != container.end())
			std::cout << "find it\n";
	else
		throw std::invalid_argument("not found");
}
