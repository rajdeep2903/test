#include<iostream>
#include<cstring>
#include<string>
#include<stdio.h>

using namespace std;
//global variables
string userName1,userName2;

//global functions
void welcomeToMadLib();
char garbageEnterKey();

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
    }

    void madLibScript(){
        welcomeToMadLib();
        cout<<"Here is your Script:"<<endl;
        cout<<"Press ENTER for Next Dialogue."<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKey();
        cout<<userName1<<" : Good Evening, "<<madlib[0]<<"."<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKey();
        cout<<userName2<<" : Special Director "<<madlib[1]<<", It's good to see you again."<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKey();
        cout<<userName1<<" : I'm here for you next mission,\nA criminal organisation, the world most "<<madlib[2]<<" "<<madlib[4]<<endl;
        cout<<"hacked into the government's "<<madlib[4]<<","<<endl;
        cout<<"stealing their top secret information on "<<madlib[5]<<"."<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKey();
        cout<<userName2<<" : "<<madlib[6]<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKey();
        cout<<userName1<<" : I understand your reaction.\nThe group also kidnapped your "<<madlib[7]<<" "<<madlib[8]<<"."<<endl;
        cout<<"and is holding her for a ransom of "<<madlib[9]<<" "<<madlib[10]<<"."<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKey();
        cout<<userName2<<" : Where the "<<madlib[11]<<" are we gonna get "<<madlib[9]<<" "<<madlib[10]<<"?"<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKey();
        cout<<userName1<<" : I don't know, but we have to move fast."<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKey();
        cout<<userName2<<" : I have a plan.\nI'll meet up with the group disguising as myself as "<<madlib[12]<<"."<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKey();
        cout<<userName1<<" : So far, I'm on board."<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKey();
        cout<<userName2<<" : If they attack, I'll fight back with "<<madlib[13]<<"."<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKey();
        cout<<userName1<<" : Great, this disk contains sensitive information that might help."<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKey();
        cout<<userName2<<" : What's on this disk?"<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKey();
        cout<<userName1<<" : "<<madlib[14]<<" Photos of "<<madlib[15]<<" "<<madlib[16]<<"."<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKey();
        cout<<userName2<<" : "<<madlib[6]<<", I've already contacted my team of highly "<<madlib[17]<<" "<<madlib[18]<<"."<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKey();
        cout<<userName1<<" : You're the best agent we have."<<endl;
        cout<<"How do you prepare for such tense missions?"<<endl;
        cout<<"--------------------------------------------"<<endl;
        garbageEnterKey();
        cout<<userName2<<" : By waking up every morning going up on the roof,"<<endl;
        cout<<"and "<<madlib[19]<<" and by repeating\nmy own personal mantra ";
        cout<<madlib[20]<<"."<<endl;
        cout<<"--------------------------------------------\n\n"<<endl;
        cout<<"PRESS ENTER KEY TO EXIT."<<endl;
        garbageEnterKey();
        
    }
};

int main(){
    EnterMadLibWords user1;
    welcomeToMadLib();
    cout<<"Name of User A: ";
    getline (cin, userName1);
    cout<<"--------------------------------------------"<<endl;
    cout<<"Name of User B: ";
    getline (cin, userName2);

    welcomeToMadLib();
    user1.inputForMadLibWords();
    user1.madLibScript();
    return 0;
}

void welcomeToMadLib(){
    system("clear");
    cout<<"--------------------------------------------"<<endl;
    cout<<"~~~~~~~~ Welcome To Mad Lib Theater ~~~~~~~~"<<endl;
    cout<<"--------------------------------------------"<<endl;
}

char garbageEnterKey(){
    char garbageStringForEnterKey;
    garbageStringForEnterKey=fgetc(stdin);
    if(garbageStringForEnterKey==0x0A){
        return garbageStringForEnterKey;
    }else{
        return garbageStringForEnterKey;
    }
}

//getline (cin, userName);