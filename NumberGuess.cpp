#include<bits/stdc++.h>
#include<random>
using namespace std;
int main(){

    cout<<"\t\t    WELCOME TO THE NUMBER GUESSING GAME"<<endl;
    cout<<"\t\t--> You Need to Guess a Number Between 1 and 10"<<endl;
    
    random_device rd;
    uniform_int_distribution<int> dist(1,10);
    int randomnum = dist(rd);

    int guessnum=0,count=0;

    while(guessnum!=randomnum){
        cout<<"Enter a number"<<endl;
        cin>>guessnum;
        count++;

        if(guessnum==randomnum){
            cout<<"Congrats! You Successfully guessed the number in "<<count<<" attempts"<<endl;
            break;
        }
        else if(guessnum>randomnum){
            cout<<"Your Guessed Number is Higher than Original Number"<<endl;
        }
        else{
            cout<<"Your Guessed Number is Lower than Original Number"<<endl;
        }
    }
}