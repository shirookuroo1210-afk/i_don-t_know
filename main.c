#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    printf("Welcome to the game!\n");
    srand(time(0));
    int random_number = rand() % 100 + 1;
    printf("The random number is: %d\n", random_number);
    return 0;
}
//code written by lyvo <3
