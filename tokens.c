
#include <stdio.h>

void vowelCounters() {

    printf("Enter your String : ");
    scanf("%s", & input);
    printf("\n\nYour String : %s", input);

    for (i = 0; i <= 20; i++) {

        if (input[i] == 'a' || input[i] == 'e' || input[i] == 'o' || input[i] == 'i' || input[i] == 'u') repetition++;

    }

    printf("\nVowels Number : %d\n\n", repetition);

}

void wordsCounter() {

    printf("Enter your String : ");
    scanf("%s", & input);
    printf("\n\nYour String : %s", input);

    for (i = 0; i <= 100; i++) {

        if (input[i] == ' ') repetition++;

    }

    printf("\nWords Number : %d\n\n", repetition);

}

void characterCounter() {

    printf("Enter your String : ");
    scanf("%s", & input);
    printf("\n\nYour String : %s", input);

    for (i = 0; input[i] != '\0'; i++) {

        repetition = i;

    }

    printf("\nCharacters Number : %d\n\n", repetition);

}

void tokenCounter() {

    printf("Enter your String : ");
    scanf("%s", & input);

    printf("\n\nYour String : %s", & input);

    printf("\nEnter your token : ");
    scanf("%s", & token);

    for (i = 0; input[i] != '\0'; i++) {

        if (input[i] == token) repetition++;

    }

    printf("\nCharacters Number : %d\n\n", repetition);

}

int main(int argc, char * * argv) {

    char input[100], token;
    int userChoice, repetition, i;

    while (1) {

        printf("Token Counter App\n\n1-Vowels    2-Words\n");
        printf("3-Characters    4-Certain character");
        printf("\n\nchoose  : ");

        scanf("%d", & userChoice);

        //Program logic here 
        switch (userChoice) {

        case 1:

            vowelCounters();
            break;

        case 2:

            wordsCounter();
            break;

        case 3:

            characterCounter();
            break;

        case 4:

            tokenCounter();
            break;

        default:

            printf("WRONG INPUT..!");
            break;

        }
    }
    return 0;
}
