#include <iostream>
using namespace std;
int main()
{
	float squareMeters , width , height , walls;
	cout << "Number of square meters you can paint: ";
	cin >> squareMeters;
	cout << "Width of the single wall (in meters): ";
	cin >> width;
	cout << "Height of the single wall (in meters): ";
	cin >> height;
	walls = squareMeters / (width * height);
	cout <<"Number of walls you can paint: "<<walls;

}
