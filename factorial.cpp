#include<iostream>

using namespace std;

int main(){
    cout<<"Enter any number to find out its Factorial"<<endl;
    int i ;
    cin>>i;
    
    int a,fact=1;
    for(a=1;a<=i;++a){
        fact*=a;
    }
    cout<<"The factorial is "<<fact<<endl;
    return 0;
}
