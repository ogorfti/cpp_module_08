/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 13:32:58 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/29 19:14:05 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);

		std::vector<int> range;
		range.push_back(17);
		range.push_back(9);
		range.push_back(11);
		sp.ultimateAdd(range.begin(), range.end());

		sp.verifyOutput();
		std::cout << "--" << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
