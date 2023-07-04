/*
Working on Mini Project Simple Calculator in C programming Language .
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch;
	double a, b;
	while (1)
	{
		printf("Enter an operator (+, -, *, /), "
			"if want to exit press x: ");
		scanf(" %c", &ch);
		
		if (ch == 'x')
			exit(0);
		printf("Enter two first and second operand: ");
		scanf("%lf %lf",&a,&b);
		
		switch (ch) {
		
		case '+':
			printf("%.1lf + %.1lf = %.1lf\n",
				a, b, a + b);
			break;
			
		// For Sub
		case '-':
			printf("%.1lf - %.1lf = %.1lf\n",
				a, b, a - b);
			break;
			
		// For Mul
		case '*':
			printf("%.1lf * %.1lf = %.1lf\n",
				a, b, a * b);
			break;
			
		// For Div
		case '/':
			printf("%.1lf / %.1lf = %.1lf\n",
				a, b, a / b);
			break;
			
		default:
			printf("Error! please write a valid operator\n");
		}
	
		printf("\n");
	}
}
