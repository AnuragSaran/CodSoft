#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class Number_Guessing
{
    private:
        int randomNumber;
        int guess;
        int attempts;
    public:
        number_Guessing()
        {
            srand(time(0));
            randomNumber=rand()%100+1;
            guess=0;
            attempts=0;
        }
        void start_Game()
        {


         cout <<"||Welcome To The Game||\n";
         cout<<"I have selected a number between 1 to 100\n";
         cout<< "can you try to guess the number|n";
        while (true)
        {
            cout<< "enter the number :";
            cin>> guess;
            attempts++;
        if(guess> randomNumber)
        {
            cout<<"too high \n";

        }
        else if(guess<randomNumber)
        {
            cout<<"too low \n";
        }
        else
            {
               cout<<" you guess the correct number ,congratulation!!!!"<<randomNumber<<"\n";
               cout<<"you guess it in "<< attempts<<"attempts\n";
            }
        break;
        }
        }
        void reset_Game()
        {
            randomNumber=rand()%100+1;
            attempts=0;
            guess=0;
            cout<<"game has been reset. a new number has been selected. you can play again \n";
        }
};
int main ()
{
  Number_Guessing game ;
  game.start_Game();
  char play_Again;
  cin>> play_Again;
  if (play_Again == 'y' || play_Again == 'Y')
    {
        game.reset_Game();
        game.start_Game();
    }
    else
    {
        cout << "Thank you for playing!\n";
    }

    return 0;
}
