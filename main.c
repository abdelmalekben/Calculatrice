#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 main() {
 	int x,y;
 	char Char;
 	printf("1:(+)\n2:(-)\n3:(*)\n4:(/)\nEnter a choice:");
 	scanf("%c",&Char);
 	printf("enter first numbre:");
 	scanf("%d",&x);
 	printf("enter scond numbre:");
 	scanf("%d",&y);
 	if (Char=='1'||Char=='+')
 	printf("%d+%d=%d",x,y,x+y);
 	else if(Char=='2'||Char=='+')
 	printf("%d-%d=%d",x,y,x-y);
 	else if(Char=='3'||Char=='*')
 	printf("%d*%d=%d",x,y,x*y);
 	else if(Char=='4'||Char=='/')
 	printf("%d/%d=%d",x,y,x/y);
 	
 	else
 	printf("error in choice!!");
 	
 	
 	
	return 0;
}
