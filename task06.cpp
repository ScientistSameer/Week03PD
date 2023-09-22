#include <iostream>
using namespace std;
main()
{
	float sizeOfFertilizerBag , costOfBag , areaInSquareFeet ;
	cout << "Enter the size of the fertilizer bag in pounds: ";
	cin >> sizeOfFertilizerBag ;
	cout << "Enter the cost of the bag: $";
	cin >> costOfBag ;
	cout << "Enter the area in square feet that can be covered by the bag: ";
	cin >>  areaInSquareFeet ;
	cout <<"Cost of fertilizer per pound: $"<<costOfBag/sizeOfFertilizerBag << endl;
	cout <<"Cost of fertilizing per square foot: $"<<costOfBag / areaInSquareFeet ;

}
