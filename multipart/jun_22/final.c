#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
    int stillnotsurewhatthisisyet[];
         
} bridge;

int main(){
    srand(time(NULL)); 
    
    
    int deck[52];
    int temp;
    int i=0;
    int x=52;
    
    for(i=0; i<52; i++) deck[i] = i; /*shuffling the deck*/
    
    for(x=52; x>0; x--){
        int a=rand()%x;
        temp = deck[x];
        deck[x]=deck[a];
        deck[a]=temp;
    }; 
    
    int deal=rand()%13+1; //to deal a random number with at least a 1 being chosen
    
    int card = deck[deal++]; 
        
    char suits[4][9]={'clubs','diamonds','hearts','spades'};
    char faces[13][6]={'ace','2','3','4','5','6','7','8','9','jack','queen','king'};
    int suit;
    int face;
    
    suit = deck[card]%4;
    face = deck[card];
    
    printf("PLAYER 1 - PLAYER 2 - PLAYER 3 - PLAYER 4 \n");
    printf("%s of %s,  %s of %s,  %s of %s,  %s of %s", faces[face], suits[suit], faces[face], suits[suit], faces[face], suits[suit], faces[face], suits[suit]);
    
    
    //on the other hand, I also don't really know where to go from here since the above line doesn't do anything and I'm officially lost.
    
    getchar();
}
