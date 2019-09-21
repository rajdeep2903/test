#include <iostream>
#include <cmath>

using namespace std;

int main(){
    cout <<"Enter two number seprated by space."<<endl;
    int num_f,num_s,g_num,s_num;
    cin >>num_f>>num_s;
    if(num_s<num_f){
        g_num=num_f;
        s_num=num_s;
    } else {
        g_num=num_s;
        s_num=num_f;
    }
    
    int i,g_varg,g_vars;
    for(i=1;i<=s_num;i++){
        g_vars=(g_num%i);
        g_varg=(s_num%i);
        
        if(g_vars==0 && g_varg==0)
            cout <<i<<" is the GCF."<<endl;
    }
}
