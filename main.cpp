#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
   
   const int ROCK = 0;
   const int PAPER = 1;
   const int SCISSORS = 2;

// Declaring variables
   int seed;
   string name1;
   string name2;
   int numRounds;
   int player1;
   int player2;
   int name1Count = 0;
   int name2Count = 0;
   
//Getting input
   cin >> seed;
   srand(seed);
   
   cin >> name1;
   cin >> name2;   
   cin >> numRounds;
   
//What if numRounds is < 1?
   while ( numRounds < 1) {
      cout << "Rounds must be > 0" << endl;
      
      cin >> numRounds;
   }
   
   cout << name1 << " vs "<< name2 << " for "<< numRounds << " rounds"<< endl;

   for ( int i =0; i < numRounds; ++i) {
// Generating random values for player 1 and player 2

      do {
         player1 = rand() % 3;
         player2 = rand() % 3;
         
         if ( player1 == player2) {
            cout << "Tie" <<endl;
         }
         
      }while( player1 == player2);
      
      if (player1 == 0 && player2 == 1){
         cout << name2 << " wins with paper" << endl;
         name2Count++;
      }
      else if (player1 == 0 && player2 == 2) {
         cout << name1 <<" wins with rock"<< endl;
         name1Count++;
      }
      else if (player1 == 1 && player2 == 0) {
         cout << name1 << " wins with paper" << endl;
         name1Count++;
      }
      else if(player1 == 1 && player2 == 2) {
         cout << name2 << " wins with scissors" << endl;
         name2Count++;
      }
      else if(player1 == 2 && player2 == 1) {
         cout << name1 << " wins with scissors" << endl;
         name1Count++;
      }
      else if(player1 == 2 && player2 == 0) {
         cout << name2 << " wins with rock" << endl;
         name2Count++;
      }
   }
   
   cout << name1 << " wins " << name1Count << " and "<< name2 << " wins " << name2Count << endl;
   

   return 0;

}

