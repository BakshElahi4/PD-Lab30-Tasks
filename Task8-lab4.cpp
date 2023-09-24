#include<iostream>
using namespace std;
main(){
float vgprinkg;
float frprinkg;
int kgsOfVg;
int kgsOfFr;
cout<<"Enter vegetable price per kilogram (in coins): ";
cin>>vgprinkg;
cout<<"Enter fruit price per kilogram (in coins): ";
cin>>frprinkg;
cout<<"Enter total kilograms of vegetables: ";
cin>>kgsOfVg;
cout<<"Enter total kilograms of fruits: ";
cin>>kgsOfFr;
float cearning=(vgprinkg*kgsOfVg)+(frprinkg*kgsOfFr);
float rearning=cearning/1.94;
cout<<"Total earnings in Rupees (Rps): "<<rearning;
}