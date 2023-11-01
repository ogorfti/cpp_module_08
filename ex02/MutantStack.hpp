/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:36:11 by ogorfti           #+#    #+#             */
/*   Updated: 2023/11/01 13:16:56 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template <typename T>

class MutantStack : public std::stack<T>
{
	public:
		class iterator
		{
			private:
				typename std::deque<T>::iterator _it;
			public:
				iterator(typename std::deque<T>::iterator it) : _it(it){}
				iterator& operator++()
				{
					++_it;
					return (*this);
				}
				iterator& operator--()
				{
					--_it;
					return (*this);
				}
				T& operator*()
				{
					return (*_it);
				}
				bool operator!=(const iterator& other)
				{
					return (_it != other._it);
				}
				
		};
		iterator begin()
		{
			return (iterator(std::stack<T>::c.begin()));
		}
		iterator end()
		{
			return (iterator(std::stack<T>::c.end()));
		}
		MutantStack(){}
		MutantStack(const MutantStack &other) : std::stack<T>(other){}
};
