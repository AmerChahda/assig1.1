/*
 * Print_out_backward.cpp
 *
 *  Created on: 29 juni 2018
 *      Author: ACH11739
 */

#include <stdio.h>
#include <iostream>
#include <string>



//using substring
std::string reverce_the_string(std::string s)
{
   return s.empty()?s:reverce_the_string(s.substr(1))+s[0];
}


int main(int argc, char **argv)
{
    std::cout << "Enter a sentence you want to print backward:\t";
    std::string org_sent;
    getline(std::cin, org_sent);
    std::cout << "Your backward sentence is:\t" << reverce_the_string(org_sent);
    return 0;
}




