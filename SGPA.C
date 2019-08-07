#include<stdio.h>                                                                  //Header Files
#include<conio.h>
#include<math.h>

struct student{                                                                    //Initialising the structure var
	char name[100];
	float marks[6];
	float credits[6];
}s1;


void main(){
	int i,j;                                                                   //Initialise other var
	float grade,c, sgpa, total;
	printf("Enter your name:\n");
	gets(s1.name);                                                               //Enter your name

	for(i=0; i<6; i++){
		printf("Enter marks and credits of subject %d\n", i);                //Enter YOUR marks and credits
		fflush(stdin);
		scanf("%f%f", &s1.marks[i], &s1.credits[i]);
	}

	for(j=0; j<6;j++){
		c = s1.marks[j];
		if(c>=90){
			grade = 10;
		}
		else if(c>=80){
			grade = 9;
		}
		else if(c>=70){
			grade = 8;
		}
		else if (c>=60){
			grade = 7;
		}
		else if (c>=50){
			grade = 6;
		}
		else if (c>=40){
			grade = 5;
		}
		else{
			grade = 0;
		}


		total += grade * s1.credits[j];                                        //Total cal formula



	}

	sgpa = total/20;                                                                //SGPA cal
	printf("%f", sgpa);

	getch();




}
