#include<iostream>
#include<string>
using namespace std;

void factorFormula(unsigned long long int number){
    unsigned long long int initialNumber=1;
    long double factorDOUBLE;
    unsigned long long int factorINTEGER;
    unsigned long long int numberOfFactors=0;
    unsigned long long int numberOfFactors2=0;
    unsigned long long int i=1;
    
    for(initialNumber=1;initialNumber<=number;initialNumber++){
        ++numberOfFactors;
        cout<<"Prime Number "<<numberOfFactors<<" is "<<1<<"."<<endl;
        for(i=1;i<initialNumber;i++){
            ++numberOfFactors2;
            factorDOUBLE = initialNumber/(long double)i;
            factorINTEGER = factorDOUBLE;
            if(factorINTEGER >= factorDOUBLE){
                if(numberOfFactors2==1)
                if(factorINTEGER==1&&factorINTEGER==initialNumber){
                    cout<<"Prime Number "<<numberOfFactors<<" is "<<factorINTEGER<<"."<<endl;
                }
            }else{
                continue;
            }
        }
        continue;
    }

   // cout<<"Total Factors are "<<numberOfFactors<<"."<<endl;

   //next line prints all divisors
//        cout<<factorDOUBLE<<endl;
}

int main(){
    
    cout<<"-----------------------------------------"<<endl;
    cout<<"Use this to have series of Prime Number."<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"I DARE YOU TO RUN FOR THIS NUMBER :\n18,446,744,073,709,551,615"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"Enter the number: ";
    unsigned long long int number;
    cin>>number;
    
    factorFormula(number);

    return 0;
}
