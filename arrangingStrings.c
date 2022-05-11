#include <stdio.h>
#include <stdlib.h>

void main()
{


    int n;
    printf("Enter a number which will be the max: ");
    scanf(" %d", &n);

    //Creating an array

    //int array[n];

    const char *strings[n][80];

    for(int i = 0; i<=n; i++){
        scanf(" %s", strings[i]);
    }

    for(int i = 0; i<=n; i++){
        printf(" %s", strings[i]);
    }


    }



