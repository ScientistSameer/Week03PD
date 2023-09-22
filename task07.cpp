#include <iostream>
using namespace std;
int main()
{
	string movieName;
	int adultTicketPrice , childTicketPrice , noOfAdultTicketsSold , noOfChildTicketsSold , donationpercentage , sales , remainingAmount;
	float donationToCharity ;  
	cout << "Enter the movie name: ";
	cin >> movieName ;
	cout << "Enter the adult ticket price: $";
	cin >> adultTicketPrice ;
	cout << "Enter the child ticket price: $";
	cin >> childTicketPrice ;
	cout << "Enter the number of adult tickets sold: ";
	cin >> noOfAdultTicketsSold ;
	cout << "Enter the number of child tickets sold: ";
	cin >> noOfChildTicketsSold ;
	cout << "Enter the percentage of the amount to be donated to charity: ";
	cin >> donationpercentage ;
	cout <<endl;
	cout << "Movie: " << movieName <<endl;
	sales = (adultTicketPrice * noOfAdultTicketsSold) + (childTicketPrice * noOfChildTicketsSold) ;
	cout << "Total amount generated from ticket sales: $" <<sales <<endl;
	donationToCharity = sales * 0.10 ;
	cout << "Donation to charity (" << donationpercentage <<"%): $" <<donationToCharity <<endl;
	remainingAmount = sales - donationToCharity;
	cout << "Remaining amount after donation: $" << remainingAmount ;
}
