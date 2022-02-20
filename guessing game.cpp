#include<bits/stdc++.h>
//#include<stdlib.h>
using namespace std;
int main()
{
    int p=1,number,trycount,guess;
    while(p==1)
    {
    srand(time(NULL));
    number=rand()%100;
    guess=-1;
    trycount=0;
    while(guess!=number && trycount<8)

    {
        cout<<"Please enter a guess: between 1-100\n";
        cin>>guess;

        if(guess<number)
            cout<<"Too low"<<endl;

        if(guess>number)
            cout<<"Too high"<<endl;

        trycount++;
    }
    if(guess==number)
        cout<<"You guessed the number\n";
    else
        cout<<"Sorry, the number was: "<<number<<endl;

        cout<<"to Play again input 1:\nelse input 0\n";
        cin>>p;
    }
    return 0;
}
