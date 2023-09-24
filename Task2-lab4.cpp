#include<iostream>
using namespace std;
main(){
int minutes;
int frames;
cout<<"Number of Minutes: ";
cin>>minutes;
cout<<"Frames per Second: ";
cin>>frames;
int total=frames*60*minutes;
cout<<"Total Number of Frames: "<<total;
} 