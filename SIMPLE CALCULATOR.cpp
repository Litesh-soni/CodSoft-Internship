/*                 TASK 2
              SIMPLE CALCULATOR

Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction ,multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.
*/
#include<iostream>
using namespace std;

int main()
{   int choice;

   // while(choice != 0) {
        cout<<"\n[1].addition";
        cout<<"\n[2].subtraction";
        cout<<"\n[3].multiplication";
        cout<<"\n[4].division";
        cout<<"\n[0] for exit"<<endl;
      while(choice != 0) {
        cout<<"\nenter your chioce (1,2,3,4,0) -|:";
        cin>>choice ;
      
        switch(choice) {

        case 1: {
            int a,b;
            cout<<"enter value for (addition) \na=";
            cin>>a;
            cout<<"b=";
            cin>>b;
            cout<<a<<"+"<<b<<"="<<a+b<<endl;
            break;

        }
        case 2: {
            int a,b;
            cout<<"enter value for (subtraction) \na=";
            cin>>a;
            cout<<"b=";
            cin>>b;
            cout<<a<<"-"<<b<<"="<<a-b<<endl;
            break;
        }
        case 3: {
            int a,b;
            cout<<"enter value for (multiplication) \na=";
            cin>>a;
            cout<<"b=";
            cin>>b;
            cout<<a<<"*"<<b<<"="<<a*b<<endl;
            break;
        }
        case 4: {
            float a,b;
            cout<<"enter value for (division) \na=";
            cin>>a;
            cout<<"b=";
            cin>>b;
            cout<<a<<"/"<<b<<"="<<a/b<<endl;
            break;
        }
         {
            default :
                cout<<"\n*invalid/NO choice"<<endl;
            }
        }
    }
    return 0;
}