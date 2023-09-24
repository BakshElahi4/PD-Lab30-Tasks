#include<iostream>
using namespace std;
main(){

float InitialVelocity;
float Acceleration;
float time;
cout<<"Enter Initial Velocity (m/s): ";
cin>>InitialVelocity;
cout<<"Enter Acceleration (m/s^2): ";
cin>>Acceleration;
cout<<"Enter Time (s): ";
cin>>time;
float FinalVelocity=Acceleration*time+InitialVelocity;
cout<<"Final Velocity (m/s): "<<FinalVelocity;
}