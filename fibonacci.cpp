#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    
    int a,b,c=0,d=1,e=0;
    cout<<"Enter the lengeth of Fibonacci Series:"<<endl;
    cin>>b;
    cout<<endl;
    cout<<"Fibonacci Series is following:"<<endl;
    
    for(a=1;a<=b;++a){
        if(a==1){
            cout<< c;
            continue;
        }
        if(a==2){
            cout<<" "<<d<<" ";
            continue;
        }
        e=c+d;
        c=d;
        d=e;
        
        cout<<e<<" ";
    }
    cout<<endl;
    return 0;
}
