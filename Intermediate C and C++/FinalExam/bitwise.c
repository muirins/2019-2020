#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char input1,input2,input3;//These will hold the inputs that the user will enter
    printf("Please enter input 1\n");
    scanf("%c",&input1);//The user will input values to be changed
    if(isalpha(input1)) //isalpha checks to ensure that the inputs are actually alphabetical characters.
    {
        if(isupper(input1))
        {
            printf("Turns into: %c\n",input1|(1<<5));//will change the uppercase character to a lowercase
        }
        if(islower(input1))
        {
            printf("Turns into: %c\n",input1&(~(1<<5)));//will change the lowercase character to an uppercase
        }
    }

    printf("Please enter input 2\n");
    scanf("%c",&input2);

    if(isalpha(input2))//changes input2 to an uppercase
    {
        printf("Turns into: %c\n",input2&(~(1<<5)));
    }

    printf("Please enter input 3\n");
    scanf("%c",&input3);

    if(isalpha(input3))//changes input3 to a lowercase
    {
        printf("Turns into: %c\n",input3|(1<<5));
    }
}