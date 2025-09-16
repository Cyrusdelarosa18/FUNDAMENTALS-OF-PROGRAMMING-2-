/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ int grade;

    printf("Enter your grade: ");
    scanf("%d", &grade);
    
    switch (grade) {
        case 10:
        case 9:
             printf("you got an A\n");
             break;
        
        case 8:
              printf("you got a B\n");
              break;
        case 7:
        case 6:
              printf("you got an C\n");
              break;
             
        default: 
               printf("you failed");
               break;
              
        
        
    }
    
    
    

    return 0;
}
