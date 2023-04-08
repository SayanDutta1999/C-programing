// "Simple betting game"
// "Jack Queen King" - computer shuffles these cards 
// player has guees the position of queen.
// if he wins, he takes 3*bet
// if he lose, he lose the bet amount.
// Player has $100 initially.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int cash = 100;
void play(int bet)
{
    // char C[3] = {'J', 'Q', 'K'}; // Stack memory
    char *C = (int *) malloc (sizeof(int));
    C[0] = 'J';
    C[1] = 'Q';
    C[2] = 'K';
    printf("Shuffling....\n");
    srand(time(NULL)); // Seeding random number generator
    int i;
    for(i = 0 ; i < 5; i++)
    {
        int x = rand() % 3;
        int y = rand() % 3;
        int temp = C[x];
        C[x] = C[y];
        C[y] = temp;  
    }
    int playersGuess;
    printf("What's the position of queen - 1, 2 or 3?\n");
    scanf("%d", &playersGuess);
    if(C[playersGuess - 1] == 'Q')
    {
        cash += 3 * bet;
        printf("You Win ! Result = [%c, %c, %c] Total Cash = %d $\n", C[0], C[1], C[2], cash);
    }
    else
    {
        cash -= bet;
        printf("You Loose ! Result = [%c, %c, %c] Total Cash = %d $\n", C[0], C[1], C[2], cash);
    }
    free(C); // To prevent Memory leaking here we use Free() function.
}
int main()
{
    int bet;
    while (cash > 0)
    {
        printf("What is your bet? $\n");
        scanf("%d", &bet);
        if(bet == 0 || bet > cash) break;
        play(bet);
    }
    
    
    return 0;
}