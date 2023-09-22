#include <iostream>
using namespace std;
int main()
{
	int number,sum = 0, n;
	cout << "Enter a 4-digit number: ";
	cin >> number;
	n = number % 10;
	number = number / 10;
	sum += n;
	n = number % 10;
	number = number / 10;
	sum += n;
	n = number % 10;
	number = number / 10;
	sum += n;
	n = number % 10;
	number = number / 10;
	sum += n;
	cout << "Sum of the individual digits: " <<sum;
	
}
