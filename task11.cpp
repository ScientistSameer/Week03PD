#include <iostream>
using namespace std;
int main()
{
	int age , timesMoved , yearsLived;
	cout << "Enter the person's age: ";
	cin >> age;
	cout << "Enter the number of times they've moved: ";
	cin >> timesMoved;
	yearsLived = age/(timesMoved+1) ;
	cout <<"Average number of years lived in the same house: "<<yearsLived;

}
