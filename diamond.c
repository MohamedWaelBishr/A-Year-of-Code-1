#include<stdio.h>
 
int main() {
    int i, space, rows=7, star=0;
     
    /* Printing upper triangle */
    for(i = 1; i <= rows; i++) {

        for(space = 1; space <= rows-i; space++) {
           printf(" ");
        }
 
        while(star != (2*i - 1)) {
            printf("*");
            star++;;
        }
        star=0;
        /* move to next row */
        printf("\n");
    }
    
    rows--;
    
    for(i = rows;i >= 1; i--) {

        for(space = 0; space <= rows-i; space++) {
           printf(" ");
        }

        star = 0;
        
        while(star != (2*i - 1)) {
            printf("*");
            star++;
        }
        printf("\n");
    }
 
    return 0;
}
