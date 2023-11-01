/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 20:53:37 by ogorfti           #+#    #+#             */
/*   Updated: 2023/11/01 13:16:49 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main ()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;

	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	// std::cout << "it : " << '\n';
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "it : " << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << s.top() << std::endl;
	s.pop();
	std::cout << s.top() << std::endl;
}