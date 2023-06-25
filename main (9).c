/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include<stdio.h> 

int main()
{       

    int day, mon, year;

    char *months[] = {
                        "January", "February", "March", "April",
                        "May", "June", "July", "August", 
                        "September", "October", "November", "December",
                      };

    printf("Enter date(DD/MM/YYY): ");
    scanf("%d/%d/%d", &day, &mon, &year);

    printf("%d", day);

    // if day is 1 21 31,suffix "st"
    if(day == 1 || day == 21 || day == 31)
    {
        printf("st ");
    }

    // if day 2  22,nd
    else if(day == 2 || day == 22)
    {
        printf("nd ");
    }

    // if  3 23, rd
    else if(day == 3 || day == 23)
    {
        printf("rd ");
    }

    // else add suffix th
    else
    {
        printf("th ");
    }    

    printf("%s %d", months[mon - 1], year);

    return 0;
}