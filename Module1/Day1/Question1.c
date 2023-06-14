/*This is Question 1
 Write a function to find biggest of 2 numbers using 
    - if else
    - ternary operator */
    
#include<stdio.h>
void main(){
	int num1,num2;
	printf("Enter the first number :- ");
	scanf("%d",&num1);
	printf("Enter the Second number :- ");
	scanf("%d",&num2);
	
	if(num1>num2){
		printf("%d is greater",num1);
	}else{
		printf("%d is greater",num2);	
	}
}