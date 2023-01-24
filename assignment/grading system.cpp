#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the number:";
    cin>>a;
    if ( 0<=a && a<40)
      cout<<"Grade F ";
     else if ( 40<=a && a<45)
      cout<<"Grade D ";
      else if ( 45<=a && a<50)
      cout<<"Grade C ";
      else if ( 50<=a && a<55)
      cout<<"Grade C+ ";
      else if ( 55<=a && a<60)
      cout<<"Grade B- ";
      else if ( 60<=a && a<65)
      cout<<"Grade B ";
      else if ( 65<=a && a<70)
      cout<<"Grade B+ ";
      else if ( 70<=a && a<75)
      cout<<"Grade A- ";
      else if ( 75<=a && a<80)
      cout<<"Grade A ";
      else if ( 80<=a && a<101)
      cout<<"Grade A+ ";

     else
        cout<<"Error";
}

