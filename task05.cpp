#include <iostream>
using namespace std;
int main()
{
	string name;
	float targetWeightLoss , requiredDays;
	cout << "Enter the Name of the Person: ";
	cin >> name;
	cout << "Enter the target weight loss in kilograms: ";
	cin >> targetWeightLoss;
	requiredDays = targetWeightLoss*15;
	cout <<name <<" will need " <<requiredDays <<" days to lose " <<targetWeightLoss <<" kg of weight by following the doctor's suggestions";

}
