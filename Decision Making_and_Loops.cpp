// The above video explains a C++ program where we check if a person is eligible to vote or not. We ask the user for an input of their age and give them an output which states whether or not they are eligible.

// Your task is to replicate this program and to make as many innovative changes to it as possible. We look forward to review your code. Swipe right to Begin !

#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter age:";
    cin>>age;
    if(age>18)
    {
        cout<<"Eligible to vote!!"<<endl;
    }
    else
    {
        cout<<"Not Eligible to vote yet!!"<<endl;
        cout<<"Wait for "<<18-age<<" years!!";
    }    
    return 0;
}
