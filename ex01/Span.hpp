/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 13:33:11 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/29 18:16:44 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <cstdarg>
#include <vector>

class Span
{
	private:
		unsigned int _N;
		std::vector <int> v;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();
		
		void addNumber(int value);
		int shortestSpan();
		int longestSpan();
		void ultimateAdd(std::vector<int>::iterator bg, std::vector<int>::iterator nd);
		// {
		// 	va_list ap;
		// 	va_start(ap, count);
		// 	for (int i = 0; i < count; i++)
		// 	{
		// 		addNumber(va_arg(ap, int));
		// 	}
		// 	va_end(ap);
		// }
		void verifyOutput();
};

