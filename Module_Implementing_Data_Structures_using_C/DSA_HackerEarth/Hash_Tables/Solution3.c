/*
Problem HashTables
Little Jhools And Magical Jewels
Problem
Little Jhool is still out of his mind - exploring all his happy childhood memories. And one of his favorite memory is when he found a magical ghost, who promised to fulfill one of Little Jhool's wish.

Now, Little Jhool was a kid back then, and so he failed to understand what all could he have asked for from the ghost. So, he ends up asking him something very simple. (He had the intuition that he'd grow up to be a great Mathematician, and a Ruby programmer, alas!) He asked the ghost the power to join a set of *the letters r, u, b and y * into a real ruby. And the ghost, though surprised, granted Little Jhool his wish...

Though he regrets asking for such a lame wish now, but he can still generate a lot of real jewels when he's given a string. You just need to tell him, given a string, how many rubies can he generate from it?

Input Format:
The first line contains a number t - denoting the number of test cases.
The next line contains a string.

Output Format:
Print the maximum number of ruby(ies) he can generate from the given string.

Constraints:
1 ≤ t ≤ 100
1 ≤ Length of the string ≤ 100

Sample Input
2
rrrruubbbyy
rubrubrubrubrubrubrubrubrubrubrubrubrubrb
Sample Output
2
0
Time Limit: 2
Memory Limit: 256
*/

//Solution

#include<stdio.h>
 #include<string.h>
  int main()
  { 
	int t;
scanf("%d",&t);
while(t>0){ 
char s[100];
scanf("%s",s);
	int a[4],max=0,r=0,u=0,b=0,y=0;
for(int i=0;
s[i]!='\0';i++){ if(s[i]=='r') r++;
	else if(s[i]=='u') u++;
	else if(s[i]=='b') b++;
	else if(s[i]=='y') y++;
 }
	 a[0]=r;
	 a[1]=u;
	 a[2]=b;
	 a[3]=y;
	 max=a[0];
for(int i=1;i<4;i++)
{
	 if(max>a[i]) max=a[i];
					 }
 printf("%d\n",max);
  t--;
   }
    return 0; }