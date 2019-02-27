#include <stdio.h>
#include <stdlib.h> //random number thing
#include <time.h> //time

int main(){
    FILE* skid;
    skid=fopen("row.txt","w"); //make new file named row.txt
    
    srand (time(NULL));
    
    for(int i=0;i<1000;i++)
    fprintf(skid, "%d\n", rand());

    int matrix[100][100];
    
    for(int i=0;i<25;i++){
        for(int j=0;j<40;j++){
            fscanf(skid,"%d",matrix[i][j]);
        }
    }

    for(int i=0;i<25;i++){
        for(int j=0;j<40;j++){
            if(matrix[i][j]==5){
            printf("5 is here at line %d", (i*j));
                }
        }
    } 
    printf("There is no 5\n");
               
    return 0;
}

