
#include<stdio.h>
void alpha();

void alpha(ch)
{
	if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o' || ch=='u')
	{
	
	printf("is vowel");}
	else{
	
	printf("is consonent");
}
}
int main(){
	char ch;
	printf("enter a alphabets");
	scanf("%c",&ch);
	alpha(ch);

return 0;
}
