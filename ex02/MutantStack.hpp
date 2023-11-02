/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:36:11 by ogorfti           #+#    #+#             */
/*   Updated: 2023/11/02 10:13:44 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <list>
#include <stack>

template <typename T>

class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()
		{
			return (iterator(std::stack<T>::c.begin()));
		}
		iterator end()
		{
			return (iterator(std::stack<T>::c.end()));
		}
};
