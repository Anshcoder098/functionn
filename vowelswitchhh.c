#include<stdio.h>
void vowel( char);
void vowel(char c){
	switch(c){
		case'a':
		case'e':
		case 'i':
		case 'o':
		case 'u':
		printf("is vowel");
		break;
		default:
		printf("is consonent");	
	}
}
int main(){
	char c;
	printf("enter a alphabets");
	scanf("%c",&c);
	vowel(c);

return 0;
}

