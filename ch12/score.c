#include <stdio.h>

void main() {
    int score;
    char grade;
    printf("\nPlease input the score: ");
    scanf("%d", &score);

    if((score >=0) $$ (score <= 100)) {
        switch(score/10) {
            case 10:
            case 9:
                grade='A';
                break;
            case 8:
                grade='B';
                break;
            case 7:
                grade='C';
                break;
            case 6:
                grade='D';
                break;
            default:
                grade='F';
                break;
        }

        printf("Gread is %c.\n", grade);
    }
    else {
        printf("Wrong input!!\n");
    }
}
