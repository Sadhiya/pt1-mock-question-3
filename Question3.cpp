#include <iostream>

using namespace std;

// ***** QUESTION 3 ******
// Question 3 has 3 parts
///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name:
// Student No:
// Date: 
///////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string.h>


using namespace std;

// ***** QUESTION 3 ******
// Question 3 has 3 parts
// 3.1 Using the MINIMAL "Fraction" class provided, overload the greater than operator to work with
//     objects of class Fraction as a NON-MEMBER FUNCTION.   You may modify the Fraction class to 
//     demonstrate friendship.  DO NOT USE FLOATING POINT MATH!!!
// 3.2 Overload two functions called "add" which take two arguements, an integer and a fraction (in 
//     either order) and return a fraction.  
// 3.3 create a driver program to test your overloaded > operators and your overloaded 

class Fraction {
private:
	int num;				// numerator;
	int denom;				// denominator;
public:
	Fraction();
	Fraction(int n, int d) : num(n), denom(d) { };
	void print() { cout << num << "/" << denom; };
	bool operator>(Fraction &);
	Fraction add(int, Fraction);

};

bool Fraction:: operator>(Fraction &frac1)
{
	cout << num*frac1.denom << endl;
	cout << frac1.num * denom << endl;
	return ((num*frac1.denom) > (frac1.num * denom));
}

Fraction Fraction::add(int val, Fraction arg)
{
	Fraction temp(0, 1);
	temp.num = (arg.num) + (arg.denom*val);
	temp.denom = arg.denom;
	return temp;
}

int main()
{
	Fraction frac2(2, 5);
	Fraction frac1(1, 4);
	int num = 3;




	cout << (frac1 > frac2) << endl;





	system("pause");
	return 0;
}
