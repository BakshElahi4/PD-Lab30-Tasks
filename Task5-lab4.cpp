#include<iostream>
using namespace std;
main(){
string Name;
float TargetWeightLoss;
cout<<"Enter the Name of the Person: ";
cin>>Name;
cout<<"Enter the target weight loss in kilograms: ";
cin>>TargetWeightLoss;
float Days=15*TargetWeightLoss;
cout<<Name<<" will need "<<Days<<" days to lose "<<TargetWeightLoss<<" kg of weight by following the doctor's suggestions";
}