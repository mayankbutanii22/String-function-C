#include<stdio.h>
#include<string.h>
int main() 
{
   char str[100];
   int x;
   printf("Enter any string : ");
   gets(str);
   printf("Uppercase string: ");
   
   for(x=0; x<100; x++){
   	 if(str[x]>='a' && str[x]<='z'){
   	 	str[x] = str[x] -32;
		}
   }
   printf("%s",str);
}