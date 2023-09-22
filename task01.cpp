#include <iostream>
using namespace std;
int main()
{
	int sides,degree;
	cout << "Enter the number of sides of the polygon: ";
	cin >> sides;
	degree = (sides-2)*180;
	cout <<"The sum of internal angles of a "<<sides <<"-sided polygon is: "<<degree <<" degrees";

}
