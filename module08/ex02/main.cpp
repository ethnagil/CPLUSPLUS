/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 14:49:14 by egillesp          #+#    #+#             */
/*   Updated: 2021/04/01 14:49:17 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
// MutantStack rewritten version of stack
int main()
{
    std::cout << "\nRECOMMENDED TEST SEQUENCE \n";
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3); mstack.push(5); mstack.push(737); //[...] mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin(); 
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it; }
    std::stack<int> s(mstack);

    std::cout << "\nEXTRA TEST SEQUENCE \n";

    std::cout << "\nstack functions on s which was created using the copy constructor from mstack \n";

    std::cout << "empty ? " << s.empty() << std::endl;
    std::cout << "size ? " << s.size() << std::endl;
    std::cout << "top ? " << s.top() << std::endl;

    std::cout << "\niterate through s1 which was created using the copy constructor from mstack \n";
    MutantStack<int> s1(mstack);

    it = s1.begin(); 
    ite = s1.end();
    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it; }



     return 0;
}
