/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 13:33:08 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/29 19:15:44 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*-------------------- Orthodox --------------------*/

Span::Span(): _N(0){}

Span::Span(unsigned int N)
{
	this->_N = N;
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		this->_N = other._N;
		this->v = other.v;
	}
	return (*this);
}

Span::Span(const Span& other)
{
	*this = other;
}

Span::~Span(){}

/*-------------------- Member functions --------------------*/

void Span::addNumber(int value)
{
	if (value < 0)
		throw std::invalid_argument("only positive!");
	else if (this->v.size() < this->_N)
		this->v.push_back(value);
	else
		throw std::out_of_range("is full!");
}

int Span::longestSpan()
{
	std::vector<int> tmp = v;
	if (tmp.size() < 2)
		throw std::invalid_argument("no span can be found");
	else
		std::sort(tmp.begin(), tmp.end());
	return (*(tmp.end() - 1) - *tmp.begin());
}

int Span::shortestSpan()
{
	int span = 0;
	if (v.size() < 2)
		throw std::invalid_argument("no span can be found");
	else
	{
		std::vector<int> tmp = v;
		std::sort(tmp.rbegin(), tmp.rend());
		span = tmp[0] - tmp[1];
		int prev = tmp[1];
		for (std::vector<int>::iterator it = tmp.begin()+2; it != tmp.end(); it++)
		{
			if (prev - *it < span)
				span = prev - *it;
			prev = *it;
		}
	}
	return (span);
}

void Span::ultimateAdd(std::vector<int>::iterator beg, std::vector<int>::iterator en)
{
	for (; beg != en; beg++)
	{
		addNumber(*beg);
	}
}

// This function is for testing purposes only	
void Span::verifyOutput()
{
	for (std::vector<int>::iterator it = this->v.begin(); it != this->v.end(); it++)
	{
		std::cout << *it << '\n';
	}
}
