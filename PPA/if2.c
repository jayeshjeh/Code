#include<stdio.h>

int main() {

    auto int std = 0;

    printf("Enter std: \n");
    scanf("%d", &std);

    if(std == 1){
        printf("Your exam is at 8am\n");
    }
    else if(std == 2){
        printf("Your exam is at 9am\n");
    }
    else if(std == 3){
        printf("Your exam is at 10am\n");
    }
    else if(std == 4){
        printf("Your exam is at 11am\n");
    }
    else if(std == 5){
        printf("Your exam is at 12am\n");
    }
    else {
        printf("Invalid Standard\n");
    }

    return 0;

}
