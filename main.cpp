#include <iostream>

#include <ctime>

using namespace std;

int main()
{
     srand(time(0)); // Statement used to change the  random number .
     int randomnum = rand()%100+1; // 1-100
     int guessnum=0;
     do
     {
        cout<<"Enter number to guess the generated random number:";
        cin>>guessnum;
        if(guessnum == randomnum)

            cout<<"great ! U Guess The Correct number "<<endl;
        else if (guessnum < randomnum)
            cout<<" Wrong number ! The Guess is too low"<<endl;
        else
            cout<<"Wrong number ! The Guess is too High "<<endl;

     } while (guessnum!=randomnum);

     cout << "Thanks for playing!" << endl;

    return 0;
}
