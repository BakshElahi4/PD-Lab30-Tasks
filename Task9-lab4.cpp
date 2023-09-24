#include<iostream>
using namespace std;
main(){
int num;
cout<<"Enter a 4-digit number: ";
cin>>num;
int four=num%10;
int three=(num/10)%10;
int two=(num/100)%10;
int one=(num/1000)%10;
int sum=four+three+two+one;
cout<<"Sum of the individual digits: "<<sum;
}
