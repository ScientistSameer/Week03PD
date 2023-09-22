#include <iostream>
using namespace std;
int main()
{
	float imposter,players,chance;
	cout << "Enter Imposter Count: ";
	cin >> imposter;
	cout << "Enter Player Count: ";
	cin >> players;
	chance = (imposter/players)*100;
	cout <<"Chance of being an imposter: "<<chance <<"%";

}
