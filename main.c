#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main(void) {

    int minutes = 0, seconds = 0;

    printf("\n\n -- Enter minutes: ");

    scanf("%d", &minutes);

    printf("\n -- Enter seconds: ");

    scanf("%d", &seconds);

    minutes = abs(minutes);
    seconds = abs(seconds);

    if( (minutes > 0 && minutes < 60) || (seconds < 60 && seconds > 0) ) {
        do {
        system("cls");

         if(seconds == 0) {
                minutes--;
                seconds = 59;
            } else {
                seconds--;
            }


         if(minutes < 10) {
                printf("M: 0%d  ", minutes);
        } else {
                printf("M: %d   ", minutes);
        }

         if(seconds < 10) {
                printf("S: 0%d", seconds);
        } else {
                printf("S: %d",seconds);
        }

            Sleep(1000);


        } while(minutes != 0 || seconds != 0);

        printf("\n\n -- Timer is over -- ");
    } else {
        printf("\nMinutes can be 59 max, and seconds can be 59 max.");
    }

}
