#include <iostream>
#include<cstdlib>
#include <ctime>

using namespace std;

int main()
{   srand(time(0));    // seeds the random number generator with a time stamp so that it generates a random number every time we run the code.
    int x,y,count;
    x=1 + (rand() % 100); // this is used to generate a random number within a range
       cout << x<< endl;
      count =0;
     while(1)
     {
     cout<<" Guess a number between 1 and 100" <<endl ;
     cin >> y;

     if(y==x)
     {
         cout <<" You win "<<endl;
         break;
     }

     if(y<x)
     {
         cout << "Guess higher"<< endl;
         count ++;
     }

     if(y>x)
     {
         cout << "Guess lower"<< endl;
         count ++;
     }

     if (count ==5)
     {
         cout <<"You lose "<<endl;
         break;
     }


     }


    return 0;
}
