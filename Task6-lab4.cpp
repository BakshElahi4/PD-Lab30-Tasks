#include<iostream>
using namespace std;
main(){
int SizeOfFertilizerBag;
int CostOfBag;
int AreaOfBag;
cout<<"Enter the size of the fertilizer bag in pounds: ";
cin>>SizeOfFertilizerBag;
cout<<"Enter the cost of the bag: $";
cin>>CostOfBag;
cout<<"Enter the area in square feet that can be covered by the bag: ";
cin>>AreaOfBag;
int CostPerPound=CostOfBag/SizeOfFertilizerBag;
int CostPerSquareFoot=CostOfBag/AreaOfBag;
cout<<"Cost of fertilizer per pound: $"<<CostPerPound<<endl;
cout<<"Cost of fertilizing per square foot: $"<<CostPerSquareFoot; 
}