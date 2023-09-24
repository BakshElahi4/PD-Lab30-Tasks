#include<iostream>
using namespace std;
main(){
int SidesOfPolygon;
int SumOfInternalAngles;
cout<<"Enter the number of sides of the polygon: ";
cin>>SidesOfPolygon;
SumOfInternalAngles=(SidesOfPolygon-2)*180;
cout<<"The sum of internal angles of a "<<SidesOfPolygon<<"-sided polygon is: "<<SumOfInternalAngles<<" degrees";
}