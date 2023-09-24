#include<iostream>
using namespace std;
main()
{
string movie;
int AdultTicket;
int ChildTicket;
int AdultSold;
int ChildSold;
float PercentageCharity;
cout<<"Enter the movie name: ";
cin>>movie;
cout<<"Enter the adult ticket price: $";
cin>>AdultTicket;
cout<<"Enter the child ticket price: $";
cin>>ChildTicket;
cout<<"Enter the number of adult tickets sold: ";
cin>>AdultSold;
cout<<"Enter the number of child tickets sold: ";
cin>>ChildSold;
cout<<"Enter the percentage of the amount to be donated to charity: ";
cin>>PercentageCharity;
float TotalAmount=(AdultTicket*AdultSold)+(ChildTicket*ChildSold);
float donation=(TotalAmount/100)*PercentageCharity;
int RemainingAmount=TotalAmount-donation;
cout<<endl;
cout<<"Movie: "<<movie<<endl;
cout<<"Total amount generated from ticket sales: $"<<TotalAmount<<endl;
cout<<"Donation to charity ("<<PercentageCharity<<"%): $"<<donation<<endl;
cout<<"Remaining amount after donation: $"<<RemainingAmount<<endl;
}