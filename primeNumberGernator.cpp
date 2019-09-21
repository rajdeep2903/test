#include<iostream>
#include<cstring>
#include<string>
#include<stdio.h>
#include<fstream>
#include<chrono> 
#include<ctime>

using namespace std;
ofstream dataEntry;

unsigned long long int inputFactorisingNumber;
unsigned long long int inputRange;
unsigned long long int inputLastRange;
unsigned long long int inputNumberLowerLimit;
unsigned long long int inputNumberUpperLimit;
unsigned long long int inputLastLimit;
unsigned int selectOptionForPNGandUFE;
char garbageStringForEnterKey;
unsigned int selectOptionForPNG;
unsigned long long int entryKeyForMLT;
string userName1,userName2;

void header();
char garbageEnterKey();
void thankYouNote();
void headerForUFE();
void headerForPNG();
void headerForMLT();
void entryForMLT();
unsigned int PNG_options();
void PNGfunctionCall(unsigned int PNG_options);
char garbageEnterKeyForMLT();
bool singlePrimeNumberCheck(unsigned long long int inputSingleNumber);
void entryKeyVerificationForMLT();

class UNIVERSAL_FACTORISATION_ENGINE{
    public:
        void factorFormula(unsigned long long int number){
        unsigned long long int initial,primeFactors=0;
        unsigned long long int factorCount=0;
        for(initial=1;initial<=number;++initial){
            if(number%initial==0){
                factorCount++;
                if(singlePrimeNumberCheck(initial)){
                    primeFactors++;
                    cout<<"Factor "<<factorCount<<" is "<<initial<<". (P)"<<endl;
                }else{
                    cout<<"Factor "<<factorCount<<" is "<<initial<<"."<<endl;
                }
            }
        }
        cout<<"----------------------------------------------------------"<<endl;
        cout<<"There are total "<<factorCount<<" factors of "<<number<<"."<<endl;
        
        if(primeFactors>0){
            cout<<"----------------------------------------------------------"<<endl;
            cout<<primeFactors<<" out of "<<factorCount<<" factors are Prime Factors."<<endl;
        }
                    
    }
};

class PRIME_NUMBER_GENERATOR{
    public:

        void primeNumberInTotal(){
            cout<<"Enter 'n' : ";
            cin>>inputRange;
            unsigned long long int i=3,count,c;
            if(inputRange>=1){
                cout<<2<<endl;
            }
 
            for(count=2;count<=inputRange;){
                for(c=2;c<=i-1;c++){
                    if(i%c==0)
                        break;
                }
                if(c==i){
                    cout<<i<<endl;
                    count++;
                }
            i++;
            }
            garbageEnterKey();
        }

        void primeNumberTillLast(){
            cout<<"Enter End Limit Number : ";
            cin>>inputLastRange;
            cout<<"----------------------------------------------------------"<<endl;
            unsigned long long int i,j,totalPrimeNumber=1,recordLastValue;

            if(inputLastRange==1){
                cout<<"As per definition Prime Number must be\nInteger and greater than 1."<<endl;
                cout<<"----------------------------------------------------------"<<endl;
                cout<<"There is no available set of prime number in given range."<<endl;
            }else{
                cout<<"Prime Numbers till "<<inputLastRange<<" are as follows :"<<endl;
                cout<<2<<endl;
                for (i=2;i<=inputLastRange;i++){
                    for (j=2;j<i;j++){
                        if(i%j==0){ 
                            break;
                        }else if(i==j+1){
                            cout<<i<<endl;
                            recordLastValue=i;
                            totalPrimeNumber++;
                        }
                    }   
                }
                cout<<"----------------------------------------------------------"<<endl;
                cout<<"There are total "<<totalPrimeNumber<<" Prime Numbers till "<<inputLastRange<<"."<<endl;
            }

            if(inputLastRange==recordLastValue){
                cout<<"----------------------------------------------------------"<<endl;
                cout<<recordLastValue<<" itself a Prime Number."<<endl;
            }
            garbageEnterKey();
        }

        void primeNumberLimited(){
            cout<<"Enter Lower Limit : ";
            cin>>inputNumberLowerLimit;
            cout<<"Enter Upper Limit : ";
            cin>>inputNumberUpperLimit;
            cout<<"----------------------------------------------------------"<<endl;
            unsigned long long int i,j,totalPrimeNumber=0,swapVariable;

            if(inputNumberLowerLimit>inputNumberUpperLimit){
                cout<<"VALUES ARE NOT ENTERED IN CORRECT ORDER."<<endl;
                cout<<"WE'RE SWAPING THE UPPER AND LOWER LIMITS."<<endl;
                swapVariable=inputNumberUpperLimit;
                inputNumberUpperLimit=inputNumberLowerLimit;
                inputNumberLowerLimit=swapVariable;
                cout<<"----------------------------------------------------------"<<endl;
            }

            if(inputNumberLowerLimit==inputNumberUpperLimit&&inputNumberLowerLimit==1){
                cout<<"As per definition Prime Number must be\nInteger and greater than 1."<<endl;
                cout<<"----------------------------------------------------------"<<endl;
                cout<<"There is no available set of prime number in given range."<<endl;
            }else{
                cout<<"Prime Numbers from "<<inputNumberLowerLimit<<" till "<<inputNumberUpperLimit<<" are as follows :"<<endl;
                if(inputNumberLowerLimit==2||inputNumberLowerLimit==1){
                    cout<<2<<endl;
                    totalPrimeNumber=1;
                }
                for (i=inputNumberLowerLimit;i<=inputNumberUpperLimit;i++){
                    for (j=2;j<i;j++){
                        if(i%j==0){ 
                            break;
                        }else if(i==j+1){
                            cout<<i<<endl;
                            totalPrimeNumber++;
                        }
                    }   
                }
                if(inputNumberLowerLimit==inputNumberUpperLimit){
                    cout<<"----------------------------------------------------------"<<endl;
                    cout<<"Entered Upper and Lower Limits are found to same."<<endl;
                }else{
                    cout<<"----------------------------------------------------------"<<endl;
                    cout<<"There are total "<<totalPrimeNumber<<" Prime Numbers from "<<inputNumberLowerLimit<<" till "<<inputNumberUpperLimit<<"."<<endl;
                }
            }

            if(singlePrimeNumberCheck(inputNumberUpperLimit)&&singlePrimeNumberCheck(inputNumberLowerLimit)){
                cout<<"----------------------------------------------------------"<<endl;
                cout<<inputNumberLowerLimit<<" and "<<inputNumberUpperLimit<<" both are Prime Numbers."<<endl;
            } else if(singlePrimeNumberCheck(inputNumberUpperLimit)){
                cout<<"----------------------------------------------------------"<<endl;
                cout<<inputNumberUpperLimit<<" itself a Prime Number."<<endl;
            } else if(singlePrimeNumberCheck(inputNumberLowerLimit)){
                cout<<"----------------------------------------------------------"<<endl;
                cout<<inputNumberLowerLimit<<" itself a Prime Number."<<endl;
            }
            garbageEnterKey();
        }

        void specificDigitPrimeNumber(){
            cout<<"Enter Digit : ";
            unsigned long long int digit;
            cin>>digit;

            if(digit==1){
                inputNumberLowerLimit=1;
                inputNumberUpperLimit=9;
            }else if(digit==2){
                inputNumberLowerLimit=10;
                inputNumberUpperLimit=99;
            }else if(digit==3){
                inputNumberLowerLimit=100;
                inputNumberUpperLimit=999;
            }else if(digit==4){
                inputNumberLowerLimit=1000;
                inputNumberUpperLimit=9999;
            }else if(digit==5){
                inputNumberLowerLimit=10000;
                inputNumberUpperLimit=99999;
            }else if(digit==6){
                inputNumberLowerLimit=100000;
                inputNumberUpperLimit=999999;
            }else if(digit==7){
                inputNumberLowerLimit=1000000;
                inputNumberUpperLimit=9999999;
            }else if(digit==8){
                inputNumberLowerLimit=10000000;
                inputNumberUpperLimit=99999999;
            }else if(digit==9){
                inputNumberLowerLimit=100000000;
                inputNumberUpperLimit=999999999;
            }else if(digit==10){
                inputNumberLowerLimit=1000000000;
                inputNumberUpperLimit=9999999999;
            }else if(digit==11){
                inputNumberLowerLimit=10000000000;
                inputNumberUpperLimit=99999999999;
            }else if(digit==12){
                inputNumberLowerLimit=100000000000;
                inputNumberUpperLimit=999999999999;
            }

            cout<<"----------------------------------------------------------"<<endl;
            unsigned long long int i,j,totalPrimeNumber=0,swapVariable;

            if(inputNumberLowerLimit>inputNumberUpperLimit){
                cout<<"VALUES ARE NOT ENTERED IN CORRECT ORDER."<<endl;
                cout<<"WE'RE SWAPING THE UPPER AND LOWER LIMITS."<<endl;
                swapVariable=inputNumberUpperLimit;
                inputNumberUpperLimit=inputNumberLowerLimit;
                inputNumberLowerLimit=swapVariable;
                cout<<"----------------------------------------------------------"<<endl;
            }

            if(inputNumberLowerLimit==inputNumberUpperLimit&&inputNumberLowerLimit==1){
                cout<<"As per definition Prime Number must be\nInteger and greater than 1."<<endl;
                cout<<"----------------------------------------------------------"<<endl;
                cout<<"There is no available set of prime number in given range."<<endl;
            }else{
                cout<<"Prime Numbers from "<<inputNumberLowerLimit<<" till "<<inputNumberUpperLimit<<" are as follows :"<<endl;
                if(inputNumberLowerLimit==2||inputNumberLowerLimit==1){
                    cout<<2<<endl;
                    totalPrimeNumber=1;
                }
                for (i=inputNumberLowerLimit;i<=inputNumberUpperLimit;i++){
                    for (j=2;j<i;j++){
                        if(i%j==0){ 
                            break;
                        }else if(i==j+1){
                            cout<<i<<endl;
                            totalPrimeNumber++;
                        }
                    }   
                }
                cout<<"There are total "<<totalPrimeNumber<<" Prime Numbers."<<endl;
            }
            garbageEnterKey();
        }

        void primeNumberGapIdentifier(){
            //

        }
};

class EnterMadLibWords{
    
    public:
    string madlib[21];

    void inputForMadLibWords(){
        cout<<"Name of a cute puppy : ";
        getline (cin, madlib[0]);
        cout<<"--------------------------------------------"<<endl;
        cout<<"A silly word : ";
        getline (cin, madlib[1]);
        cout<<"--------------------------------------------"<<endl;
        cout<<"An Adjective : ";
        getline (cin, madlib[2]);
        cout<<"--------------------------------------------"<<endl;
        cout<<"A plural type of Profession : ";
        getline (cin, madlib[3]);
        cout<<"--------------------------------------------"<<endl;
        cout<<"Type of 80's technology : ";
        getline (cin, madlib[4]);
        cout<<"--------------------------------------------"<<endl;
        cout<<"Something you can buy on Amazon : ";
        getline (cin, madlib[5]);
        cout<<"--------------------------------------------"<<endl;
        cout<<"What you would shout if you saw \nspider crawling on your leg : ";
        getline (cin, madlib[6]);
        cout<<"--------------------------------------------"<<endl;
        cout<<"Type of relative : ";
        getline (cin, madlib[7]);
        cout<<"--------------------------------------------"<<endl;
        cout<<"A woman name : ";
        getline (cin, madlib[8]);
        cout<<"--------------------------------------------"<<endl;
        cout<<"A number : ";
        getline (cin, madlib[9]);
        cout<<"--------------------------------------------"<<endl;
        cout<<"Plural object : ";
        getline (cin, madlib[10]);
        cout<<"--------------------------------------------"<<endl;
        cout<<"A curse word for 1st grade : ";
        getline (cin, madlib[11]);
        cout<<"--------------------------------------------"<<endl;
        cout<<"Fictional Character : ";
        getline (cin, madlib[12]);
        cout<<"--------------------------------------------"<<endl;
        cout<<"Something you find on the kitchen : ";
        getline (cin, madlib[13]);
        cout<<"--------------------------------------------"<<endl;
        cout<<"Another number : ";
        getline (cin, madlib[14]);
        cout<<"--------------------------------------------"<<endl;
        cout<<"Celebrity name : ";
        getline (cin, madlib[15]);
        cout<<"--------------------------------------------"<<endl;
        cout<<"Verb ending in -ing : ";
        getline (cin, madlib[16]);
        cout<<"--------------------------------------------"<<endl;
        cout<<"Another Adjective : ";
        getline (cin, madlib[17]);
        cout<<"--------------------------------------------"<<endl;
        cout<<"Plural Animals : ";
        getline (cin, madlib[18]);
        cout<<"--------------------------------------------"<<endl;
        cout<<"Another verb ending with -ing : ";
        getline (cin, madlib[19]);
        cout<<"--------------------------------------------"<<endl;
        cout<<"Favourite song lyrics : ";
        getline (cin, madlib[20]);
        cout<<"--------------------------------------------"<<endl;
        cout<<"Press ENTER for your Script."<<endl;
        garbageEnterKeyForMLT();
    }

    void madLibScript(){
        headerForMLT();
        cout<<"Here is your Script:"<<endl;
        cout<<"Press ENTER for Dialogues."<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKeyForMLT();
        cout<<userName1<<" : Good Evening, "<<madlib[0]<<"."<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKeyForMLT();
        cout<<userName2<<" : Special Director "<<madlib[1]<<", It's good to see you again."<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKeyForMLT();
        cout<<userName1<<" : I'm here for you next mission,\nA criminal organisation, the world most "<<madlib[2]<<" "<<madlib[4]<<endl;
        cout<<"hacked into the government's "<<madlib[4]<<","<<endl;
        cout<<"stealing their top secret information on "<<madlib[5]<<"."<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKeyForMLT();
        cout<<userName2<<" : "<<madlib[6]<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKeyForMLT();
        cout<<userName1<<" : I understand your reaction.\nThe group also kidnapped your "<<madlib[7]<<" "<<madlib[8]<<"."<<endl;
        cout<<"and is holding her for a ransom of "<<madlib[9]<<" "<<madlib[10]<<"."<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKeyForMLT();
        cout<<userName2<<" : Where the "<<madlib[11]<<" are we gonna get "<<madlib[9]<<" "<<madlib[10]<<"?"<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKeyForMLT();
        cout<<userName1<<" : I don't know, but we have to move fast."<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKeyForMLT();
        cout<<userName2<<" : I have a plan.\nI'll meet up with the group disguising as myself as "<<madlib[12]<<"."<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKeyForMLT();
        cout<<userName1<<" : So far, I'm on board."<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKeyForMLT();
        cout<<userName2<<" : If they attack, I'll fight back with "<<madlib[13]<<"."<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKeyForMLT();
        cout<<userName1<<" : Great, this disk contains sensitive information that might help."<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKeyForMLT();
        cout<<userName2<<" : What's on this disk?"<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKeyForMLT();
        cout<<userName1<<" : "<<madlib[14]<<" Photos of "<<madlib[15]<<" "<<madlib[16]<<"."<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKeyForMLT();
        cout<<userName2<<" : "<<madlib[6]<<", I've already contacted my team of highly "<<madlib[17]<<" "<<madlib[18]<<"."<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKeyForMLT();
        cout<<userName1<<" : You're the best agent we have."<<endl;
        cout<<"How do you prepare for such tense missions?"<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKeyForMLT();
        cout<<userName2<<" : By waking up every morning going up on the roof,"<<endl;
        cout<<"and "<<madlib[19]<<" and by repeating\nmy own personal mantra ";
        cout<<madlib[20]<<"."<<endl;
        cout<<"--------------------------------------------\n\n"<<endl;
        cout<<"PRESS ENTER KEY TO EXIT."<<endl;
        garbageEnterKeyForMLT();
    }
};

int main(){
    dataEntry.open("dataStore.txt",std::ios_base::app);

        auto timenow=chrono::system_clock::to_time_t(chrono::system_clock::now());
        dataEntry<<"SESSION STARED ON : "<<ctime(&timenow)<<endl;

    UNIVERSAL_FACTORISATION_ENGINE ufe;
    header();
    cout<<"Press 1 for UFE (UNIVERSAL FACTORISATION ENGINE)."<<endl;
    cout<<"Press 2 for PNG (PRIME NUMBER GENERATOR)."<<endl;
    cout<<"Press 3 for MAB LIBS THEATER."<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"Enter Here : ";
    cin>>selectOptionForPNGandUFE;

    if(selectOptionForPNGandUFE==1){
        headerForUFE();
        cout<<"Enter the Number : ";
        cin>>inputFactorisingNumber;
        dataEntry<<"NUMBER ENTERED FOR FACTORIZATION : "<<inputFactorisingNumber<<"."<<endl;
        cout<<"----------------------------------------------------------"<<endl;
        ufe.factorFormula(inputFactorisingNumber);
        garbageEnterKey();
        thankYouNote();
    }else if(selectOptionForPNGandUFE==2){
        headerForPNG();
        PNG_options();
        thankYouNote();
    }else if(selectOptionForPNGandUFE==3){
        headerForMLT();
        entryForMLT();
    }
        auto timeEND=chrono::system_clock::to_time_t(chrono::system_clock::now());
        dataEntry<<"SESSION ENDED ON : "<<ctime(&timeEND)<<endl;
        dataEntry<<"----------------------------------------------------------"<<endl;
    return 0;
}

void header(){
    system("clear");
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"PRIME NUMBER GENERATOR AND UNIVERSAL FACTORISATION ENGINE."<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"~~~~~~~~~~~~~~ World First & One Of A Kind ~~~~~~~~~~~~~~~"<<endl;
    cout<<"----------------------------------------------------------\n"<<endl;
}

void thankYouNote(){
    header();
    cout<<"          Thank You for Using Our Services."<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"           Mail us at RAJDEEP603@GMAIL.COM"<<endl;
    cout<<"         for Queries, Feedback, Suggestions."<<endl;
    cout<<"----------------------------------------------------------"<<endl;
}

void headerForUFE(){
    header();
    cout<<"      This is Universal Factorisation Engine Panel."<<endl;
    cout<<"----------------------------------------------------------\n"<<endl;
}

void headerForPNG(){
    header();
    cout<<"          This is Prime Number Generator Panel."<<endl;
    cout<<"----------------------------------------------------------\n"<<endl;
}

void headerForMLT(){
    header();
    cout<<"              WELCOME TO MAB LIBS THEATER"<<endl;
    cout<<"----------------------------------------------------------\n"<<endl;
}

unsigned int PNG_options(){
    cout<<"Press 1 for 'n' Number of Prime Number."<<endl;
    cout<<"Press 2 for All Prime Number till the End Limit."<<endl;
    cout<<"Press 3 for Specific Upper and Lower Limit."<<endl;
    cout<<"Press 4 for Specific Digit Prime Number."<<endl;
    cout<<"Press 5 for Number Gaps b/w Prime Numbers upto Given Last Limit."<<endl;
    cout<<"!!! More OPTIONS COMING SOON !!!"<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"Enter Here : ";
    cin>>selectOptionForPNG;
    PNGfunctionCall(selectOptionForPNG);
    return selectOptionForPNG;
}

char garbageEnterKey(){
    cin.ignore();
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"                 Press ENTER key To Exit."<<endl;
    garbageStringForEnterKey=fgetc(stdin);
    if(garbageStringForEnterKey==0x0A){
        return garbageStringForEnterKey;
    }else{
        return garbageStringForEnterKey;
    }
}

char garbageEnterKeyForMLT(){
    garbageStringForEnterKey=fgetc(stdin);
    if(garbageStringForEnterKey==0x0A){
        return garbageStringForEnterKey;
    }else{
        return garbageStringForEnterKey;
    }
}

void PNGfunctionCall(unsigned int PNG_options){
    PRIME_NUMBER_GENERATOR png;
    headerForPNG();
    switch (PNG_options){
    case 1:
        png.primeNumberInTotal();
        break;

    case 2:
        png.primeNumberTillLast();
        break;

    case 3:
        png.primeNumberLimited();
        break;

    case 4:
        png.specificDigitPrimeNumber();
        break;
    
    default:
    cout<<"PLEASE ENTER VALID INPUT.\nTRY AGAIN LATER."<<endl;
        break;
    }
}

bool singlePrimeNumberCheck(unsigned long long int inputSingleNumber){
    unsigned long long int i, m=0;
    int flag=0; 

    if(inputSingleNumber==1){
        return false;
    }else{
        m=inputSingleNumber/2;  
        for(i=2;i<=m;i++){  
            if(inputSingleNumber%i==0){  
            flag=1; 
            break;  
            }  
        } 

        if(flag==1){
            return false;
        }else{
            return true;
        }
    }
}

void entryKeyVerificationForMLT(){
    if(singlePrimeNumberCheck(entryKeyForMLT)&&entryKeyForMLT<=9999&&entryKeyForMLT>=1000){
        start:
        EnterMadLibWords user1;
        cin.ignore();
        cout<<"Number Verified. Press ENTER to continue."<<endl;
        garbageEnterKeyForMLT();
        headerForMLT();
        cout<<"Name of User A: ";
        getline (cin, userName1);
        cout<<"Name of User B: ";
        getline (cin, userName2);

        headerForMLT();
        user1.inputForMadLibWords();
        user1.madLibScript();
    }else{
        start2:
        start3:
        headerForMLT();
        cout<<"Please Enter Valid Input."<<endl;
        cout<<"For Hint Press 1 or Just Enter 4-Digit Prime Number."<<endl;
        cin>>entryKeyForMLT;
        if(entryKeyForMLT==1){
            PRIME_NUMBER_GENERATOR primeNumberCheckForMLT;
            primeNumberCheckForMLT.specificDigitPrimeNumber();
            goto start3;
        }else if(singlePrimeNumberCheck(entryKeyForMLT)&&entryKeyForMLT<=9999&&entryKeyForMLT>=100){
            goto start;
        }else{
            garbageEnterKeyForMLT();
            goto start2;
        }
    }
}

void entryForMLT(){
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"TO ENTER THE GAME YOU HAVE TO ENTER A 4-DIGIT PRIME NUMBER."<<endl;
    cout<<"ENTER HERE : ";
    cin>>entryKeyForMLT;
    entryKeyVerificationForMLT();
}

//largest gap and smallest gap between prim numbers upto given limit.
//prime numbers multiply to make new prime number 
//prime number theorem 
//prime-number and encryption 
//prime density 
//number in number prime density 
//variable encryption keys
//fluctuation of prime density to understand time
//irrationals are blackness
//rationals are the stars 
//continuum hypothesis
//pascals triangle uniqueness
//triangular numbers
//tetrahedral numbers
//sierpinski triangle
//combinatoric
//date-month-year than take digit total 
//1 to 9 planet namess (hindi / english)
//loshu grid
//Numerology and Prime Number
//two digits incressing first and decresing last
//three key system to send data
//diffie-hellman key exchange
//one-time pad encryption 



//arrangement of prime number gap into ascending and desending order
//prime density in given range
//cryptographic system
//threading in C++
//autobiographical number
//self-descriptive number
