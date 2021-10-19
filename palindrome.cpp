//  Copyright 2021 - Khayotbek Azimov
//  Email: kazimov@mail.sfsu.edu
//  This file is part of CSC 340 - Assignment 3

#include <iostream>
#include <string>
using namespace std;
bool palindrome(string str);
int main()
{
  string str;
	getline(cin,str);
    
    if(palindrome(str))
    	cout<<str<<" is a palindrome!"<<endl;
    else
    	cout<<str<<" is not a palindrome!"<<endl;

    return 0;
}

bool palindrome(string str)
{
	if(str.length() == 0)
		return true;
    for(int i = 0,len = str.length() - 1;i<=len;)
    {
    	char left = tolower(str[i]);
    	char right = tolower(str[len]);
    	if((left >= '0' && left <= '9') || (left >= 'a' && left <= 'z')) 
    		;
    	else
        {
        	i++;
        	continue;
        }    	
        if((right >= '0' && right <= '9') || (right >= 'a' && right <= 'z')) 
    		;
    	else
        {
        	len--;
        	continue;
        } 

        if(left == right)
        {
          i++;
          len--;
          continue;
        }
        return false;
    }

    return true;
}