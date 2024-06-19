#include <stdio.h>
#include <string.h>
int main()
{

	int k=0;
char name[500];
gets(name);

for(int i=0;name[i]!='\0';i++,k++){
printf("%c",name[i]);
}
printf("\nlenght of string is:%d",k);

return 0;
}