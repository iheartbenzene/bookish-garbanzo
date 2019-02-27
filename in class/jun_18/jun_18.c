#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void printGrade();

//Structures

typedef struct{
		char name[10];
		float* tests[3];
		float* quizz[3];
		int id[10];
} person;

int main(){
 int i=0; 
 int j=0; 
 int k=0; 
 
       
/* char nameId[10]; //Student name and ID
char testGrd[5][2];  //Student test grades
char quizGrd[5][2];			//Student quiz grades */

		person* students[100];
		for (i=0; i<10; i++){
					printf("The student's name is ");
					scanf("%s", students[i]->name);
      printf("The student's id is ");
      scanf("%d", students[i]->id);
					for (j=0; j<3; j++){
						printf("Test Grade:");
						scanf("%f", students[i]->tests[j]);
						}
					for (k=0; k<3; k++){
						printf("Quiz grade:");
						scanf("%f", students[i]->quizz[k]);
					}
				}	
    				
					
/* scanf("%s", &nameId[i]); //Enter the name as a string
scanf("%d", &testGrd[i][0]);  //Enter test grades
scanf("%d", &quizGrd[i][0]);  //Enter quiz grades */

    return 0;
}

void printGrade(){ //Apparently it doesn't like it when I try and reference everything at once for the students so here's each one individually.

    int pID=0; 
    person* students;
    
    //student 1
    float avgtesta=00000;
    double totala=00000;
    float avgquiza=00000;
    float* q= students[0].tests[0];
    float* w= students[0].tests[1];
    float* e= students[0].tests[2];
    float* r= students[0].quizz[0];
    float* t= students[0].quizz[1];
    float* y= students[0].quizz[2];
    avgtesta = (*q+*w+*e)/3;
    avgquiza = (*r+*t+*y)/3;
    totala = (((avgtesta)*(0.7))+((avgquiza)*(0.3)))/501;
    
    //student 2
    float avgtestb=00000;
    double totalb=00000;
    float avgquizb=00000;
    float* u= students[1].tests[0];
    float* i= students[1].tests[1];
    float* o= students[1].tests[2];
    float* p= students[1].quizz[0];
    float* a= students[1].quizz[1];
    float* s= students[1].quizz[2];
    avgtestb = (*u+*i+*o)/3;
    avgquizb = (*p+*a+*s)/3;
    totalb = (((avgtestb)*(0.7))+((avgquizb)*(0.3)))/501;
    
    //student 3
    float avgtestc=00000;
    double totalc=00000;
    float avgquizc=00000;
    float* d= students[2].tests[0];
    float* f= students[2].tests[1];
    float* g= students[2].tests[2];
    float* h= students[2].quizz[0];
    float* j= students[2].quizz[1];
    float* k= students[2].quizz[2];
    avgtestc = (*d+*f+*g)/3;
    avgquizc = (*h+*j+*k)/3;
    totalc = (((avgtestc)*(0.7))+((avgquizc)*(0.3)))/501;
    
    //student 4
    float avgtestd=00000;
    double totald=00000;
    float avgquizd=00000;
    float* l= students[3].tests[0];
    float* z= students[3].tests[1];
    float* x= students[3].tests[2];
    float* c= students[3].quizz[0];
    float* v= students[3].quizz[1];
    float* b= students[3].quizz[2];
    avgtestd = (*l+*z+*x)/3;
    avgquizd = (*c+*v+*b)/3;
    totald = (((avgtestd)*(0.7))+((avgquizd)*(0.3)))/501;
    
    //student 5
    float avgteste=00000;
    double totale=00000;
    float avgquize=00000;
    float* n= students[4].tests[0];
    float* m= students[4].tests[1];
    float* qq= students[4].tests[2];
    float* ww= students[4].quizz[0];
    float* ee= students[4].quizz[1];
    float* rr= students[4].quizz[2];
    avgteste = (*n+*m+*qq)/3;
    avgquize = (*ww+*ee+*rr)/3;
    totale = (((avgteste)*(0.7))+((avgquize)*(0.3)))/501;
    
    //student 6
    float avgtestf=00000;
    double totalf=00000;
    float avgquizf=00000;
    float* tt= students[5].tests[0];
    float* yy= students[5].tests[1];
    float* uu= students[5].tests[2];
    float* ii= students[5].quizz[0];
    float* oo= students[5].quizz[1];
    float* pp= students[5].quizz[2];
    avgtestf = (*tt+*yy+*uu)/3;
    avgquizf = (*ii+*oo+*pp)/3;
    totalf = (((avgtestf)*(0.7))+((avgquizf)*(0.3)))/501;
    
    //student 7
    float avgtestg=00000;
    double totalg=00000;
    float avgquizg=00000;
    float* aa= students[6].tests[0];
    float* ss= students[6].tests[1];
    float* dd= students[6].tests[2];
    float* ff= students[6].quizz[0];
    float* gg= students[6].quizz[1];
    float* hh= students[6].quizz[2];
    avgtestg = (*aa+*ss+*dd)/3;
    avgquizg = (*ff+*gg+*hh)/3;
    totalg = (((avgtestg)*(0.7))+((avgquizg)*(0.3)))/501;
    
    //student 8
    float avgtesth=00000;
    double totalh=00000;
    float avgquizh=00000;
    float* jj= students[7].tests[0];
    float* kk= students[7].tests[1];
    float* ll= students[7].tests[2];
    float* zz= students[7].quizz[0];
    float* xx= students[7].quizz[1];
    float* cc= students[7].quizz[2];
    avgtesth = (*jj+*kk+*ll)/3;
    avgquizh = (*zz+*xx+*cc)/3;
    totalh = (((avgtesth)*(0.7))+((avgquizh)*(0.3)))/501;
    
    //student 9
    float avgtesti=00000;
    double totali=00000;
    float avgquizi=00000;
    float* vv= students[8].tests[0];
    float* bb= students[8].tests[1];
    float* nn= students[8].tests[2];
    float* mm= students[8].quizz[0];
    float* qw= students[8].quizz[1];
    float* qe= students[8].quizz[2];
    avgtesti = (*vv+*bb+*nn)/3;
    avgquizi = (*mm+*qw+*qe)/3;
    totali = (((avgtesti)*(0.7))+((avgquizi)*(0.3)))/501;

   //student 10
    float avgtestj=00000;
    double totalj=00000;
    float avgquizj=00000;
    float* qr= students[9].tests[0];
    float* qt= students[9].tests[1];
    float* qy= students[9].tests[2];
    float* qu= students[9].quizz[0];
    float* qi= students[9].quizz[1];
    float* qo= students[9].quizz[2];
    avgtestj = (*qr+*qt+*qy)/3;
    avgquizj = (*qu+*qi+*qo)/3;
    totalj = (((avgtestj)*(0.7))+((avgquizj)*(0.3)))/501;
     
    printf("Enter student id");
    scanf("%d", &pID);
			if (pID==1){
			printf("Test average: %f\n Quiz average: %f\n Total grade: %f\n", avgtesta, avgquiza, totala);
			
    printGrade();    
    } else
    if (pID==2){
			printf("Test average: %f\n Quiz average: %f\n Total grade: %f\n", avgtestb, avgquizb, totalb);
			
    printGrade();    
    } else
    if (pID==3){
			printf("Test average: %f\n Quiz average: %f\n Total grade: %f\n", avgtestc, avgquizc, totalc);
			
    printGrade();    
    } else
    if (pID==4){
			printf("Test average: %f\n Quiz average: %f\n Total grade: %f\n", avgtestd, avgquizd, totald);
			
    printGrade();    
    } else
    if (pID==5){
			printf("Test average: %f\n Quiz average: %f\n Total grade: %f\n", avgteste, avgquize, totale);
			
    printGrade();    
    } else
    if (pID==6){
			printf("Test average: %f\n Quiz average: %f\n Total grade: %f\n", avgtestf, avgquizf, totalf);
			
    printGrade();    
    } else
    if (pID==7){
			printf("Test average: %f\n Quiz average: %f\n Total grade: %f\n", avgtestg, avgquizg, totalg);
			
    printGrade();    
    } else
    if (pID==8){
			printf("Test average: %f\n Quiz average: %f\n Total grade: %f\n", avgtesth, avgquizh, totalh);
			
    printGrade();    
    } else
    if (pID==9){
			printf("Test average: %f\n Quiz average: %f\n Total grade: %f\n", avgtesti, avgquizi, totali);
			
    printGrade();    
    } else
    if (pID==10){
			printf("Test average: %f\n Quiz average: %f\n Total grade: %f\n", avgtestj, avgquizj, totalj);
			
    printGrade();    
    } else{
        printf("Type exit to quit");
    }

    return;
}  
