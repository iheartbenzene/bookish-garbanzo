#include <stdio.h>

int main(){

				FILE* spin;
				int nums[100];
    	int num;

				spin=fopen("numbers.dat", "r");

				if(spin == NULL){
    				printf("no file found");   
					return 101;
       } 

    int i=0;    
    while((fscanf(spin, "%d", &num))==1){
        printf("%d", num);
        nums[i]=num;
        i++;
    }
    for(int j=0; j<=i; j++)
    printf("%d", nums[j]);
    //page 425
    return 0;
}
