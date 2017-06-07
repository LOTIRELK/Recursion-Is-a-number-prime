// RecursionAssignemnt3Q6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

bool isPrime(int p, int i);

int main()
{
	int number;
	int num;

	cin >> number;//take in input assign to number

	bool answer = isPrime(number, num=2);//invoke method
	cout << answer << endl;//output result of method

    return 0;
}

bool isPrime(int p, int i)
{
	if (p ==2)//if number equals 2
	{
		//return true (is prime)
		return true;
	}

	if (p > 2)//greater than 2
	{
	if (i == 1)
	{
		if (p%i == 0)//if remainder = 0
		{
			return true;//is a prime number
		}
	}
	else if (p % i == 0)//if remainder = 0
	{
		return false;//is not prime
	}

		else
		return isPrime(p, i - 1);//continue to invoke until a condition is met
	}
	else 
		return false;//default value
}
