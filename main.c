

   #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int sceltaUtente, sceltaComputer;

    srand(time(NULL));

    printf("\t\t\t\tWELCOME IN THE GAME: PAPER, STONE, SCISSORS!\n\n");
    while(1){
    printf("CHOICE:\n");
    printf("1. Paper\n");
    printf("2. Rock\n");
    printf("3. Scissors\n");
    printf("Scelta: ");
    scanf("%d", &sceltaUtente);

    if (sceltaUtente < 1 || sceltaUtente > 3) {
        printf("Invalid choice.\n");
        break;
    }

    sceltaComputer = rand() % 3 + 1;

    printf("Opponent chooses: ");
    switch (sceltaComputer) {
        case 1:
            printf("Paper\n");
            break;
        case 2:
            printf("Rock\n");
            break;
        case 3:
            printf("Scissors\n");
            break;
    }
    if (sceltaUtente == sceltaComputer) {
        printf("SAME SCORE! NO WINNER.\n\n\n");
    } else if ((sceltaUtente == 1 && sceltaComputer == 2) ||
               (sceltaUtente == 2 && sceltaComputer == 3) ||
               (sceltaUtente == 3 && sceltaComputer == 1)) {
        printf("YOU WIN!\n\n\n");
    } else {
        printf("GAME OVER!\n\n\n");
    }
}
  return 0;
}


