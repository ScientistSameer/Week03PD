#include <iostream>
using namespace std;
int main()
{
	float vegetablePrice , fruitPrice , totalEarningsInCoins , totalEarningsInRupees ;
	int totalVegetables , totalFruits ;  
	cout << "Enter vegetable price per kilogram (in coins): ";
	cin >> vegetablePrice ;
	cout << "Enter fruit price per kilogram (in coins): ";
	cin >> fruitPrice ;
	cout << "Enter total kilograms of vegetables: ";
	cin >> totalVegetables ;
	cout << "Enter total kilograms of fruits: ";
	cin >> totalFruits ;
	totalEarningsInCoins = (vegetablePrice * totalVegetables) + (fruitPrice * totalFruits);
	totalEarningsInRupees = totalEarningsInCoins / 1.94;
	cout << "Total earnings in Rupees (Rps): " << totalEarningsInRupees ;
}
