#include<iostream>
using namespace std;
main(){

int num,width,height;
cout<<"Number of square meters you can paint: ";
cin>>num;
cout<<"Width of the single wall (in meters): ";
cin>>width;
cout<<"Height of the single wall (in meters): ";
cin>>height;
int total=num/(height*width);
cout<<"Number of walls you can paint: "<<total;
} 