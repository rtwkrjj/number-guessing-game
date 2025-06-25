
#include <iostream>
#include<cstdlib>   // this will include rand() and srand()
#include<ctime>    // this will include time()
using namespace std ;
int main()
{
    srand(time(0));
    int number = rand() % 100 + 1 ; // this will guess only betwen 1-100
    int guess;
    int attempts = 0;
    
    cout<<"You are welcome!, Let's play guessing game : "<<endl;
    cout<<"I have guessed between 1-100 , Now your turn : "<<endl;
    
    cin>>guess; // user will guess by entering 
    attempts++; // attempts will be counted in each enter : 
   
    // we have to create loop for guessing by user, until he guesses the right number 
     while(guess!=number){
         if(guess>number)
             cout<<"It's too high ! Try again : ";
             
         else
             cout<<"It's too low!, Try Again : ";
             
         cin>>guess; // again guess if condition not fulfiled.
         attempts++;
         
     }
     
     cout<<"Hurrey...!! You have guessed the number, You won Rs.100 ."<<endl;
     cout<<"Total attempts to guess : "<<attempts<<endl;
    
    return 0;
}