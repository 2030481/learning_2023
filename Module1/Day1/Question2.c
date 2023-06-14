/*This is Question 2
 Write a program to print the grade of the given student using if else if block
    - 90 to 100 -> "Grade A"
    - 75 to 89 -> "Grade B"
    - 60 to 74 -> "Grade C"
    - 50 to 59 -> "Grade D"
    - 0 to 49 -> "Grade F" */
    
#include<stdio.h>
void main(){
	int num1;
	printf("Enter Your marks :- ");
	scanf("%d",&num1);
	if(num1 >= 90){
		printf("GRADE A");
	}else if(num1 >= 75 && num1<89){
		printf("GRADE B");
	}
	else if(num1 >= 60 && num1<74){
		printf("GRADE c");
	}else if(num1 >= 50 && num1<59){
		printf("GRADE D");
	}else{
		printf("GRADE f");
	}
}