// drg-Cookies.cpp : Defines the entry point for the console application.
// By: David Garza
// Date: 20200227
// Description: Converting an amount of cookies to be shipped in a box (24) then converting how many containers are needed for the boxes (75).

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
   int intCookiesInBox = 24;
   int intBoxesInContainer = 75;
   int intNumberOfCookies = 0;

   std::cout << "\nPlease enter an amount of cookies to be shipped: ";
   std::cin >> intNumberOfCookies;

   
   int intNumbersOfBoxes = intNumberOfCookies / intCookiesInBox;
   int intRemainingUnboxedCookies = intNumberOfCookies % intCookiesInBox;
   int intContainer = intNumbersOfBoxes / intBoxesInContainer;
   int IntRemainingBoxes = intNumbersOfBoxes % intBoxesInContainer;

   
   cout << "Number of Cookies: " << intNumberOfCookies << endl;
   cout << "Number of unboxed Cookies: " << intRemainingUnboxedCookies << endl;
   cout << "Number of Boxes of Cookies (" << intCookiesInBox << "): " << intNumbersOfBoxes << endl;
   cout << "Number of Box Containers (" << intBoxesInContainer << "): " << intContainer << endl;
   cout << "Number of leftover Boxes: " << IntRemainingBoxes << endl;
   
}

