//This a Rock Paper Scissors game
/*
  Arthur: Antoine Demount Price jr.
  Date:  4/28/2022
  gmail: pricejr7777@gmail.com
  Note: I hope you like this game
*/
#include <iostream>
#include <iomanip>
#include <ctime>
#include <unistd.h>
#define OSClear "cls"// windows DOS OS = cls // unix like OS = clear
void game(bool);
using namespace std;
void SleepFunction2()
{
for(int i = 0; i <= 1000000000;i++){}
}
void SleepFunction()//this is a sleep function
{
  for(int i = 0; i <= 10000000;i++){}

}
void gameload1(char LetterArray[],/*this the sleep function counting with the for loop*/void SleepFun(),int num)
{

           SleepFun();

           cout<<LetterArray[num];
}
void gameload2(char CharArray[],/*this the sleep function counting with the for loop*/void SleepFun(),int num)
{
    int space[]={10,35,50,65,80,95,110,135,150,175};
            for(int i =0; i <= 6;i++)
            {

             cout<<setfill(' ');
             cout<<setw(space[i]);
             cout<<endl;
             cout<<endl;
             cout<<CharArray[num];
             SleepFun();


            }
}
void load()
{
       char loadingletter [] = {'H','e','l','l','o',' ','U','s','e','r',' ','G','a','m','e',' ','i','s',' ','L','o','a','d','i','n','g'};
       char loadingChar [] = {'1','*','a','@','5','}','\'','w','s','<','?','\"','@','#','a','&','1',
                             '0','*','!','1','3','Z','D','z','P','K','W'};

       for(int c =0; c <5;c++)
       {
       cout<<"\n\n\n\n\n";
       cout<<setfill(' ');
       cout<<setw(60);

         for(int i = 0; i<=26;i++)
         {
           int holdNumber =c%2;

           if(holdNumber == 0)
           {

             gameload1(loadingletter,SleepFunction,i);
             if(i==25)
             /*
              this nested if statmant will make sure
              the the program pause at the end of the array
              so the user will see it and read it
             */
              {
                sleep(2);
                i +=1;
                continue;
              }
           }
           else if(holdNumber ==1)
            {
             if(i==5)
             /*
              this nested if statmant will make sure
              the program pause at the end of the array
              so the user will see it and read it
             */
              {
               sleep(1);
                i +=1;
                continue;
              }

              gameload2(loadingChar,SleepFunction,i);
            }
         }
         system(OSClear);
       }
}


void Menu(void Sleep1())
{

  string menu[20]={   {"|_____________________menu_______________________|"},
                      {"|                                                |"},
                      {"|  Hello this is a rock, paper,and scissors game,|"},
                      {"|  the rules are simple rock bets scissors       |"},
                      {"|  paper bets rock and, scissors bets paper.     |"},
                      {"|  Also you have three spelling mistakes to make |"},
                      {"|  after three spelling mistakes game Over.      |"},
                      {"|  It's you the Player vs the Computer or        |"},
                      {"|  Computer vs Its Self                          |"},
                      {"|________________________________________________|"}};

           for (int display = 0;display <=9;display++)
           {
             cout<<setfill(' '); //this will cover the space
             cout<<setw(85); // this will put the menu in the center of the screen
             Sleep1();// this means wait one second
             cout<<menu[display]<<endl; // this statment display mene
           }
} 

string WhoIsPlaying;
void game(bool GameSwitch,void Sleep1()){
static int count = 0;
if(count == 0)
{
  count++;
 cout<< "  \"hc stands for human vs computer and cc stands for computer vs computer \""<<endl;
 cout<<" \"If you want to play the computer please enter \"hc\" or if you want the computer to play itself enter \"cc\" ";
 cout<<endl;
 // This variable is to see Who will be playing Human vs Computer or Computer vs itself
 cin >>WhoIsPlaying;
}

  while(GameSwitch)
 {
    static int HumanPlayer1turn = 0;
    static int HumanMistake=0;
    srand(time(NULL)); // starting rand time to zero
    string HumanInput;
    int HumanPlayer1Choice;
    int ComputerPlayer1Choice=rand()%3; // Computer player 1 random genorator
    int ComputerPlayer2Choice=rand()%3; // Computer player 2 random genorator
    static int ComputerPlayer2Points;// Computer Player 1 points
    static int ComputerPlayer1Points;//computer Player 2 points
    static int HumanPlayer1Points; // Huamn Player points
    static int round =0;
    if(WhoIsPlaying == "hc")
    {
      system(OSClear);
      cout<<"                            Human Player ONE Points : |"<<HumanPlayer1Points <<"| Computer Player TWO Points : |"<<ComputerPlayer2Points<<"| Spelling Mistakes : |"<<HumanMistake<<"|"<<" Round : |"<<round<<"| \n \n";
      Sleep1();

    }
    else if(WhoIsPlaying == "cc")
    {
     system(OSClear);
      cout<<"                          Computer Player ONE Points : |"<<ComputerPlayer1Points<<" | Computer Player TWO Points : | "<< ComputerPlayer2Points <<"|"<<" Round : | "<<round<<" | \n \n";
      Sleep1();

    }
   if (WhoIsPlaying == "hc") // this only execute if its human Player  vs Computer Player
    {
      if (HumanPlayer1turn < 3) // thus code keeps you from excieding the max limit more than three mistakes
      {
       cout<<"\"Please enter a choice Rock, Paper, or Scissor \""<<endl;
       cin >>HumanInput;
      }
     else // this statement will execute, if human player one make at less three mistakes
      {
       cout<< "\"Sorry you made three spelling mistakes\""<<endl;
       cout<<"\"Game Over\"";
       sleep(5);
       GameSwitch=false; //this stops the while loop
        break; // this break out the function
      }
  }
   if ( HumanInput == "rock"|| HumanInput == "ROCK"  )// this symbol || means or
    {
      HumanPlayer1Choice = 0;
    }
   else if ( HumanInput == "paper"|| HumanInput == "PAPER")
   {
      HumanPlayer1Choice = 1;
   }
   else if( HumanInput == "scissor"|| HumanInput == "SCISSOR")
   {
      HumanPlayer1Choice = 2;
   }
   else
   {
     if (WhoIsPlaying == "hc" ) // Human is Playing the Computer
    {
     if (HumanPlayer1turn <3) //this means if your turns again this is just keeping up with your mistakes if you mistake is under three execute the if statment
       {
        cout<<"\"Spelling mistake you did not entered the right command\""<<endl;
        cout<< "\"\a you have to enter rock, paper,or scissor \""<<endl;
        sleep(5);
        system(OSClear);
        cout<<endl<<endl;
        HumanMistake++;
        game(GameSwitch,Sleep1); // this is a recursion
      }
    }
   }

  string ChoiceArray[3]={"rock","paper","scissor"};
  
    if(HumanPlayer1Choice == ComputerPlayer2Choice || ComputerPlayer1Choice == ComputerPlayer2Choice)
      {
          if (WhoIsPlaying=="hc")
            {
              cout<<"\"Its a tie\""<<endl;
              HumanPlayer1Points++;// add points
              ComputerPlayer2Points++;// add points
              cout<<"\" Human Player ONE choice was "<<ChoiceArray[HumanPlayer1Choice]<<".\""<<endl;
              cout<<"\" The Computer Player TWO  choice was "<<ChoiceArray[ComputerPlayer2Choice]<<".\""<<endl;
                sleep(5);
            }
          else if (WhoIsPlaying == "cc")
            {
              cout<<"\"Its a tie\" "<<endl;
              ComputerPlayer1Points++;// add points
              ComputerPlayer2Points++;// add piints
              cout<<"\"Computer Player ONE choice was "<<ChoiceArray[ComputerPlayer1Choice]<<".\""<<endl;
              cout<<"\"Computer Player TWO choice was "<<ChoiceArray[ComputerPlayer2Choice]<<".\""<<endl;
             sleep(7);
   }
         // sleep(8);
          system(OSClear);
          cout<<endl<<endl;
      }
   else if(HumanPlayer1Choice != ComputerPlayer2Choice || ComputerPlayer1Choice != ComputerPlayer2Choice  )
       {
            if (HumanPlayer1Choice == 0 && ComputerPlayer2Choice == 2 || ComputerPlayer1Choice == 0 && ComputerPlayer2Choice == 2)
             // player 1 enter rock and the player 2 enter scissors so player 1 wins
             {  //this symbol && means and
                if (WhoIsPlaying == "hc")
                {
                  HumanPlayer1Points++; // add point
                  cout<<"\" You the Human win this round.\""<<endl;
                  cout<<"\" Your choice was "<<ChoiceArray[HumanPlayer1Choice]<<".\""<<endl;
                  cout<<"\" The computer choice was "<< ChoiceArray[ComputerPlayer2Choice]<<".\""<<endl;
                    sleep(5);
                }
                else if(WhoIsPlaying == "cc")
                {
                   ComputerPlayer1Points++;//add point
                   cout<<"\" Player ONE wins this round.\""<<endl;
                   cout<<"\" Computer Player ONE choice was "<<ChoiceArray[ComputerPlayer1Choice]<<".\""<<endl;
                   cout<<"\" computer Player TWO choice was "<<ChoiceArray[ComputerPlayer2Choice]<<".\""<<endl;
               sleep(7);
                }
                //sleep(8);
                system(OSClear);
                cout<<endl<<endl;
             }
            else if(HumanPlayer1Choice == 1 && ComputerPlayer2Choice == 0 || ComputerPlayer1Choice == 1 && ComputerPlayer2Choice == 0)
                // if player 1 enter paper and the computer enter rock so you win
             {
                if (WhoIsPlaying  == "hc")
                {
                HumanPlayer1Points++;
                cout<<"\" You the Human win this round.\""<<endl;
                cout<<"\" Your choice was "<<ChoiceArray[HumanPlayer1Choice]<<".\""<<endl;
                cout<<"\" The computer choice was "<< ChoiceArray[ComputerPlayer2Choice]<<".\""<<endl;
                 sleep(5);
                }
                else if(WhoIsPlaying == "cc")
                {
                   ComputerPlayer1Points++;//add point
                   cout<<"\" Player ONE wins this round.\""<<endl;
                   cout<<"\" Computer Player ONE choice was "<<ChoiceArray[ComputerPlayer1Choice]<<".\""<<endl;
                   cout<<"\" computer Player TWO choice was "<<ChoiceArray[ComputerPlayer2Choice]<<".\""<<endl;
                sleep(7);
                }
               // sleep(8);
                system(OSClear);
                cout<<endl<<endl;
             }
            else if(HumanPlayer1Choice == 2 && ComputerPlayer2Choice == 1 || ComputerPlayer1Choice == 2 && ComputerPlayer2Choice ==1  )
                // if you enter scissors and the computer enter paper you win
             {
                if (WhoIsPlaying  == "hc")
                {
                HumanPlayer1Points++;
                cout<<"\" You the Human Player ONE win this round.\""<<endl;
                cout<<"\" Your choice was "<<ChoiceArray[HumanPlayer1Choice]<<".\""<<endl;
                cout<<"\" The computer choice was "<< ChoiceArray[ComputerPlayer2Choice]<<".\""<<endl;
                  sleep(5);
                }
                else if(WhoIsPlaying  == "cc")
                {
                   ComputerPlayer1Points++;//add point
                   cout<<"\"Player ONE win this round.\""<<endl<<endl;
                   cout<<"\"Computer player ONE choice was "<<ChoiceArray[ComputerPlayer1Choice]<<".\""<<endl;
                   cout<<"\"computer player TWO choice was "<<ChoiceArray[ComputerPlayer2Choice]<<".\""<<endl;
                sleep(7);
                }
                 // sleep(8);
                  system(OSClear);
                  cout<<endl<<endl;
             }
             else if(HumanPlayer1Choice == 0 && ComputerPlayer2Choice == 1 || ComputerPlayer1Choice == 0 && ComputerPlayer2Choice == 1 )
             {
               if (WhoIsPlaying  == "hc")
                {

                 ComputerPlayer2Points++;
                 cout<<"\" You lose this round.\""<<endl;
                 cout<<"\" Your choice was "<<ChoiceArray[HumanPlayer1Choice]<<".\""<<endl;
                 cout<<"\" The computer choice was "<< ChoiceArray[ComputerPlayer2Choice]<<".\""<<endl;
                   sleep(5);
                }
               else if(WhoIsPlaying  == "cc")
                {
                   ComputerPlayer2Points++;//add point  // give player 2 points
                   cout<<"\" Computer player ONE choice was "<<ChoiceArray[ComputerPlayer1Choice]<<".\""<<endl;
                   cout<<"\" Computer player TWO choice was "<<ChoiceArray[ComputerPlayer2Choice]<<".\""<<endl;
                sleep(7);
                }
                //sleep(8);
                system(OSClear);
                cout<<endl<<endl;
             }
             else if(HumanPlayer1Choice == 1 && ComputerPlayer2Choice == 2 || ComputerPlayer1Choice == 1 && ComputerPlayer2Choice == 2 )
            {
                if (WhoIsPlaying  == "hc")
                {
                  ComputerPlayer2Points++;
                  cout<<"\" You lose this round.\""<<endl;
                  cout<<"\" Your choice was "<<ChoiceArray[HumanPlayer1Choice]<<".\""<<endl;
                  cout<<"\" The computer choice was "<< ChoiceArray[ComputerPlayer2Choice]<<".\""<<endl;
                    sleep(5);
                }
                else if(WhoIsPlaying  == "cc")
                {
                   ComputerPlayer2Points++;
                   cout<<"\" Computer player ONE choice was "<<ChoiceArray[ComputerPlayer1Choice]<<endl;
                   cout<<"\" Computer player TWO choice was "<<ChoiceArray[ComputerPlayer2Choice]<<endl;
                sleep(7);
                }
               // sleep(8);
                system(OSClear);
                cout<<endl<<endl;
             }
             else if (HumanPlayer1Choice == 2 && ComputerPlayer2Choice == 0 || ComputerPlayer1Choice == 2 && ComputerPlayer2Choice == 0)
             {
               if (WhoIsPlaying  == "hc")
                {
                 ComputerPlayer2Points++;
                 cout<< " You lose this round "<<endl;
                 cout<<" Your choice was "<<ChoiceArray[HumanPlayer1Choice];
                 cout<<" The computer choice was "<< ChoiceArray[ComputerPlayer2Choice]<<endl;
                 sleep(5);
                }
             else if(WhoIsPlaying  == "cc")
                {
                  ComputerPlayer2Points++;//add point
                   cout<<"Computer Player ONE choice was "<<ChoiceArray[ComputerPlayer1Choice]<<endl;
                   cout<<"computer Player TWO choice was "<<ChoiceArray[ComputerPlayer2Choice]<<endl;
                sleep(7);
                }
               // sleep(8);
                system(OSClear);
                cout<<endl<<endl;
             }
           }


             round++;
             if (ComputerPlayer2Points >= 3 && HumanPlayer1Points < 3 || ComputerPlayer2Points >= 3 && ComputerPlayer1Points < 3)// this statment means if computer points is greater than 3 or equal to it and Player points is less than 3
            {

               system(OSClear);
               cout<<endl<<endl;
               cout<<"\" The Computer Player 2 wins \""<<endl;
               if(WhoIsPlaying == "hc")
               {
               cout<<"                          Huamn Player ONE points: |"<<HumanPlayer1Points <<"| Computer Player TWO points : |"<< ComputerPlayer2Points<<"| Spelling Mistakes: |"<<HumanMistake<<"|"<<" Round: |"<<round<<"| \n \n";
               }
                else if(WhoIsPlaying =="cc")
                {
               cout<<"                          Computer Player ONE points: |"<<ComputerPlayer1Points <<"| Computer Player TWO points : |"<< ComputerPlayer2Points<<"|"<<" Round: |"<<round<<"| \n \n";

                }
               load();
               Sleep1();
               cout<<"\n\n\n";
               cout<<setfill(' '); //this will cover the space
               cout<<setw(15);
               cout<<"\"++++++++++++++++++++++++++++++++++++++++++++++GameOver\"++++++++++++++++++++++++++++++++++++++++\""<<endl;
               sleep(5);
               GameSwitch = false;
  


            }

             else if(HumanPlayer1Points >= 3 && ComputerPlayer2Points < 3 || ComputerPlayer1Points >= 3 && ComputerPlayer2Points <3)
             {
              if(WhoIsPlaying== "hc")
                {
                 system(OSClear);
                 cout<<endl<<endl;
                 cout<< "\" You the Human player wins \" "<<endl;
                 cout<<"                      Human Player ONE Points: |"<<HumanPlayer1Points <<"| Computer Player TWO Points : |"<< ComputerPlayer2Points<<"| Spelling Mistakes: |"<<HumanMistake<<"|"<<" Round: |"<<round<<"| \n \n";
                 load();
                 Sleep1();
                 Sleep1();
                 cout<<"\n\n\n";
                 cout<<setfill(' '); //this will cover the space
                 cout<<setw(15);
                 cout<<"\"++++++++++++++++++++++++++++++++++++++++++++++GameOver\"++++++++++++++++++++++++++++++++++++++++\""<<endl;
                 sleep(10);
                 GameSwitch = false;
                 break;
                }
              else if(WhoIsPlaying=="cc")
                {
                 system(OSClear);
                 cout<<endl<<endl;
                 cout<< "\" Computer player one wins \" "<<endl;
                 cout<<"                         Computer Player ONE Points: |"<<ComputerPlayer1Points <<"| Computer Player TWO Points : |"<< ComputerPlayer2Points<<"|"<<" Round: |"<<round<<"| \n \n";
                 load();
                 Sleep1();
                 Sleep1();
                 cout<<"\n\n\n";
                 cout<<setfill(' '); //this will cover the space
                 cout<<setw(15);
                 cout<<"\"++++++++++++++++++++++++++++++++++++++++++++++GameOver\"++++++++++++++++++++++++++++++++++++++++"<<endl;

                 sleep(5);
                 GameSwitch = false;
                 break;
                 }
             }
              else if(HumanPlayer1Points >= 3 && ComputerPlayer2Points >=3 || ComputerPlayer1Points >= 3 && ComputerPlayer2Points )
              {
               if( WhoIsPlaying =="hc")
               {
                system(OSClear);
                cout<<endl<<endl;
                cout<<"\" Its a draw \""<<endl;
                cout<< " You the player and the Computer are at a draw"<<endl;
                cout<<"                            Human Player ONE Points: |"<<HumanPlayer1Points <<"| Computer Player TWO Points : |"<< ComputerPlayer2Points<<"| Spelling Mistakes: |"<<HumanMistake<<"|"<<" Round: |"<<round<<"| \n \n";
                load();
                Sleep1();
                Sleep1();
                cout<<"\n\n\n";
                cout<<setfill(' '); //this will cover the space
                cout<<setw(15);
                cout<<"\"++++++++++++++++++++++++++++++++++++++++++++++GameOver\"++++++++++++++++++++++++++++++++++++++++\""<<endl;
                sleep(5);
                GameSwitch = false;
                break;
               }
                else if(WhoIsPlaying =="cc")
                {
                system(OSClear);
                cout<<endl<<endl;
                cout<<"\" Its a draw \""<<endl;
                cout<< " You the Computer Player ONE and Computer Player TWO are at a draw"<<endl;
                cout<<"                            Human Player ONE Points: |"<<HumanPlayer1Points <<"| Computer Player TWO Points : |"<< ComputerPlayer2Points<<"|"<<" Round: |"<<round<<"| \n \n";
                load();
                Sleep1();
                Sleep1();
                cout<<"\n\n\n";
                cout<<setfill(' '); //this will cover the space
                cout<<setw(15);
                cout<<"\"++++++++++++++++++++++++++++++++++++++++++++++GameOver\"++++++++++++++++++++++++++++++++++++++++\""<<endl;
                sleep(5);
                GameSwitch = false;
                break;
                }
              }

  }
 }


int main()
{
    bool GameSwitch =true;// this code keeps the loop runing
    system(OSClear);
    load();
    Menu(SleepFunction);//this the menu
    game(GameSwitch,SleepFunction);// this is the function game
    return 0;
}
