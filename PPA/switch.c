#include<stdio.h>

void main(){
    int std = 0;

    printf("Enter your standard\n");
    scanf("%d", &std);

    switch(std) {
        case 1:
            printf("Exam is at 8am\n");
            break;

        case 2:
            printf("Exam is at 9am\n");
            break;

        case 3:
            printf("Exam is at 10am\n");
            break;

        case 4:
            printf("Exam is at 11am\n");
            break;

        case 5:
            printf("Exam is at 12am\n");
            break;

        case 6:
            printf("Exam is at 1pm\n");
            break;
        
        default:
            printf("Invalid std\n");
            
    }

    
}
