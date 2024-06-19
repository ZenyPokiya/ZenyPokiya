#include <stdio.h>
int main()
{
 char ch;
 printf("character is :");
 scanf("%c",ch);
 uppercase:(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
 lowercase:(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
 
 if ("lowercase||uppercase"){
    printf("it is a vowel");
 } else {
	 printf("it is a consonant");
 }
return 0;
}