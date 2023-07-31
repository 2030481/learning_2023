/*
Question HashTables
Problem
Little Jhool considers Jaadu to be a very close friend of his. But, he ends up having some misunderstanding with him a lot of times,
 because Jaadu's English isn't perfect, and Little Jhool sucks at the language Jaadu speaks.
  So, he's in a fix - since he knows that Jaadu has got magical powers,
   he asks him to help so as to clear all the issues they end up having with their friendship.

Now, Jaadu can only focus at one task, so to fix these language issues he comes up with a magical way out,
 but someone needs to do the rest of it; this is where Little Jhool has asked for your help.

Little Jhool says a word, and then Jaadu says another word.
 If any sub-string of the word said by Jaadu is a sub-string of the word said by Little Jhool,
  the output should be "YES", else "NO". (Without the quotes.)

Input:
First line contains number of test case T.
 Each test case contains two strings *Text ( Said by Jhool ) * and Pattern (Said by Jaadu ).Both strings contains only lowercase alphabets ['a'-'z'].

Output:
For each test case print YES if any sub-string of Pattern is sub-string of Text else print NO.

Constraints:
1<=T<=5
1<=|Text|<=100000
1<=|Pattern|<=100000

Sample Input
2
hackerearth
hacker
hackerearth
wow


Sample Output
YES
NO
Time Limit: 1
Memory Limit: 256
Source Limit:
*/

//Solution

#include<bits/stdc++.h>

using namespace std;

int main(){

ios_base :: sync_with_stdio(false);cin.tie(0);cout.tie(0);

int test; cin>>test;

while(test--){

string jadu,jhool;

cin>>jadu>>jhool;

int jd[26] ={0}, jh[26] ={0};

for(int i = 0 ; i < jadu.length(); i++)

jd[jadu[i] - 'a']++;

for(int i = 0 ; i < jhool.length(); i++)

jh[jhool[i] - 'a']++;

bool flag = false;

for(int i = 0 ; i < 26; i++)

if(jd[i] && jh[i]){

flag = true;

break;

}

if(flag)

cout<<"YES";

else

cout<<"NO";

cout<<"\n";

}

return 0;

}

 
