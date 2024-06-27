#include <stdio.h>
#include <string.h>
int main()
{
int k=0;
char name[50];
char name2[50];
char name3[50];
gets(name);
gets(name2);


for(int i=0;name[i]!='\0';i++,k++){
name3[i]=name[i];
}

for(int j=0;name2[j]!='\0';j++,k++){
	
	name3[k]=name2[j];
}
	name3[k]='\0';
	printf("%s",name3);
	return 0;
}

