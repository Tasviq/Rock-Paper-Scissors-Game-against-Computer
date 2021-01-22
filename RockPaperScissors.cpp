/*Tasviq Hossain*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main ()
{
    char moves[] = {'r','p','s'};
    srand (time(0));

    bool done = false;

    while (!done){
    //Step 1: Get player's move
    cout <<"Enter your move ('r' for rock, 'p' for paper, 's' for scissors): ";
    char playerMove;
    cin>>playerMove;
    playerMove = tolower(playerMove);

    //Validate user's input
    //Valid move is: r,R,s,S,p,P
    while (playerMove!='r' && playerMove !='s'&& playerMove!='p')
    {
        cout<<playerMove<<" is an invalid move."<<endl;
        cout <<"Enter your move ('r' for rock, 'p' for paper, 's' for scissors): ";
        cin>>playerMove;
        playerMove = tolower(playerMove);
    }//end validation

    //Step 2: Get computer's Move

    int index = rand()%3;
    char computerMove = moves [index];

    //Step 3:Determine the result
    if(playerMove == computerMove)
    {
        cout <<"player move: "<<playerMove<<endl;
        cout <<"Computer move: "<<computerMove<<endl;
        cout<<"It's a tie"<<endl;
    }
    else if (playerMove == 'r' && computerMove=='s' || playerMove == 'p' && computerMove == 'r' || playerMove == 's' && computerMove =='p')
    {
        cout <<"player move: "<<playerMove<<endl;
        cout <<"Computer move: "<<computerMove<<endl;
        cout<<"Player Wins!!!"<<endl;
    }
    else
    {
        cout <<"player move: "<<playerMove<<endl;
        cout <<"Computer move: "<<computerMove<<endl;
        cout<<"Player Loses."<<endl;
    }
    //update the loop control variable
    char response;
    cout <<"To continue, press y (any other key to quit): ";
    cin>>response;

    if (response !='y')
    {
        done = true;
        cout<<"Thank you for playing Rock Paper Scissors!"<<endl;
    }

    }//end while
    cout<<endl; //print blank line
    return 0;
} //endmain

