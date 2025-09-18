#include <stdio.h>

int main(){

    int year;
    
    printf("Enter a year: ");
    scanf("%d", &year);

/* printf("%d", year); for my reference of printing the year of user input
year is the actual value that printf should use to replace the %d placeholder */

// Divisible by 4 but not by 100 unless also divisible by 400
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        printf("%d was a leap year", year);
    }
    else{
        printf("%d was not a leap year", year);
    }




    return 0;
}