#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{


    int n;
    char temp[30];

    printf("Enter a number which will be the max: ");
    scanf(" %d", &n);

    //Creating an array

    //int array[n];

    const char *strings[n][80];

    for(int i = 0; i<n; i++){
        scanf(" %s", strings[i]);
    }
    printf("Unsorted Array: ");
    for(int i = 0; i<n; i++){
        printf(" \n%s", strings[i]);
    }

     for(int i=0; i<n; i++){
    for(int j=0; j<n-1-i; j++){
      if(strcmp(strings[j], strings[j+1]) > 0){
        //swap array[j] and array[j+1]
        strcpy(temp, strings[j]);
        strcpy(strings[j], strings[j+1]);
        strcpy(strings[j+1], temp);
      }
    }
  }

  //display the sorted array
  printf("\n Sorted Array: ");
   for(int i=0; i<n; i++){
  printf(strings[i]);}



    }



