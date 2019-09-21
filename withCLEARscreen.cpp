#include<iostream>
#include<sstream>
#include<string>
#include<cstdlib>

using namespace std;

int main(){
    string myString;
    int test1=0,test2=0;
    getline (cin,myString);
    stringstream(myString)>>test1;
    cout<<"Enter Multiplyer:"<<endl;
    getline (cin,myString);
    stringstream(myString)>>test2;
    system("clear");
    cout<<"This is final answer: "<<test1*test2<<endl;
    return 0;
}
