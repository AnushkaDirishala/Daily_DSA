#include<bits/stdc++.h>
using namespace std;
/*
take the age from the user and then decide accordingly
if age is<18 print not eligible for the job
if age is >18 and <=54
print eligible for job
if age is >=55 and <=57 
then print eligible for job but retirement soon
if age is >57
then print retirement soon
*/
int main(){
    int age;
    cin>>age;
    if(age <18){
        cout<<"not eligible for job";
    }
    else if(age<=57){
        cout<<"eligible for job";
        if(age>=55){
            cout<<"but retirement soon";
        }
    }
    else if(age>57){
        cout<<"retirement time";
    }
    return 0;
}