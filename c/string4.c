#include <stdio.h>
#include <string.h>
int main()
{

int k=0;
char name[50];
char name2[50];
gets(name);
gets(name2);

for(int i=0;name[i]!='\0';i++,k++){

}
for(int j=0; name2[j]!='\0';j++,k++){

name[k]=name2[j];
}
name[k]='\0';
printf("%s",name);
return 0;
}