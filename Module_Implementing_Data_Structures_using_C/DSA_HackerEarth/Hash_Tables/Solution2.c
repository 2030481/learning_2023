/*
Problem HashTables
BOB AND String
Problem
Bob and Khatu both love the string. Bob has a string S and Khatu has a string T. They want to make both string S and T to anagrams of each other. Khatu can apply two operations to convert string T to anagram of string S which are given below:
1.) Delete one character from the string T.
2.) Add one character from the string S.

Khatu can apply above both operation as many times he want. Find the minimum number of operations required to convert string T so that both T and S will become anagram of each other.

Input:

First line of input contains number of test cases T. Each test case contains two lines. First line contains string S and second line contains string T.

Output:

For each test case print the minimum number of operations required to convert string T to anagram of string S.

Constraints:

1 ≤ T ≤ 10
1 ≤ |S|,|T| ≤ 105

Sample Input
4
abc
cba
abd
acb
talentpad
talepdapd
code
road

Sample Output
0
2
4
4
Time Limit: 5
Memory Limit: 256

*/
//solution
#include <stdio.h>

#include <math.h>

int main(){

    int t;

    scanf("%d", &t);

    while(t--)

    {

        char s[100001],t[100001];

        scanf("%s\n%s\n",&s,&t);

 

        int fs[26]={0};

        int ft[26]={0};

 

        int i = 0;

 

        while(s[i]!='\0')

        {

            fs[s[i]-97]++;

            i++;

        }

        i = 0;

 

        while(t[i]!='\0')

        {

            ft[t[i]-97]++;

            i++;

        }

        int count=0;

 

        for(int i=0;i<26;i++)

            count+=abs(fs[i]-ft[i]);

 

        printf("%d\n",count);

 

    }

 

}