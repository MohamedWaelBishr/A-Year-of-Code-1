#include <stdio.h>
#include <string.h>

int main() {

    char temp[20];
    char s[20] = "aaabaa";
    int i, j;
    for (i=0; s[i]!= '\0'; i++)
    {
        if (s[i] == 'b')
        {
            strcpy(temp,s[i+1]); //copy rest of the string in this case 'aa'
            for (j=0; j<5; j++)
            {
                s[i+j] = 'c';
            }
            s[i+j] = '\0';   // here we get s = "aaaccccc"
            strcat(s,temp); // concat rest of the string (temp = "aa") after job is done. 
                           //  to this point s becomes s = "aaacccccaa"
        }
    }
    printf("%s\n", s); //s = "aaacccccaa". 
}
