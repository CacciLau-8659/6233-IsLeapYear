#include <stdio.h>
#include <stdlib.h> //Provides the atoi function which converts a string to an int

int main(int argc, char* argv[]){           
//argc = argument count
// argv = array of strings containing the command line arguments; argv[0] = program name, argv[1] = year
    if (argc != 2){             // Program expects a program name and a year as input so if theres more, it'll be invalid
        printf("Usage: %s <year>\n", argv[0]);
        return 1;
    }

    int year = atoi(argv[1]);       // Converts the string argument of argv[1] to a an integer and stores it in year

// Checks if year is divisible by 4 but not by 100 unless also divisible by 400
    int isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    if(isLeap){
        printf("%d was a leap year\n", year);
    } 
    else{
        printf("%d was not a leap year\n", year);
    }

    return 0;
}
