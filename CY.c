#include <stdio.h>

int main() {
    int grade;

    printf("Enter your grade: \n");
    scanf("%d", &grade);
    if (grade >= 75) {
    printf("You passed\n");
    }else if (grade >= 0 && grade <= 74){   
        printf("You failed\n");
    } else {
         printf("invalid\n");
    }    
        
        
       
 
     
    return 0;
}