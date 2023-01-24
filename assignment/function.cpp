#include<iostream>

using namespace std;



float prod(float a, int b)
{
	float pro;
	pro=a*b;
	return pro;
}

int main()
{
	float num1;
	int num2;
	cout<<"Enter Decimal value: ";
	cin>>num1;
	cout<<"Enter Integer value: ";
	cin>>num2;
	cout<<"Product of Two Numbers is: "<<prod(num1,num2);


}

