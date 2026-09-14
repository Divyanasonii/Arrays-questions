#include<stdio.h>
int main () {

    int marks[10] = {100,95,31,15,12,66,89,78,11,90};

    for(int i = 0; i<10; i++){
        if(marks[i] <35){
            printf("%d " , i);    //marks print krane hai to marks[i] and index krana h toh i
        }
    }


    return 0;
}