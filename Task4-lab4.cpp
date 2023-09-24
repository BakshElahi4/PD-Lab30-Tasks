#include<iostream>
using namespace std;
main(){
float ImposterCount;
float PlayerCount;
cout<<"Enter Imposter Count: ";
cin>>ImposterCount;
cout<<"Enter Player Count: ";
cin>>PlayerCount;
float ChanceOfBeingImposter=100* (ImposterCount/PlayerCount);
cout<<"Chance of being an imposter: "<<ChanceOfBeingImposter<<"%";
}

