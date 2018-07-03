/*
 * Print_out_backward.cpp
 *
 *  Created on: 29 juni 2018
 *      Author: ACH11739
 */

#include <stdio.h>
#include <iostream>
#include <string>


using namespace std;
//using substring
string reverce_the_string(string s)
    {
    return s.empty()?s:reverce_the_string(s.substr(1))+s[0] ;
    }


int main(int argc, char **argv) {
    cout<<"Enter a sentence you want to print backward:\t";
    string org_sent;
    getline (cin,org_sent);
    cout<<"Your backward sentence is:\t"<<reverce_the_string(org_sent);
    return 0;
}




