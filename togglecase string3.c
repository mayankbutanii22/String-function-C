#include<stdio.h>
#include<stdio.h>
main()
{
	
   char str[100];
   int x;
   printf("Enter any string : ");
   gets(str);
   printf("Toggle case string: ");
   
   for(x=0; x<100; x++){
   	 if(str[x]>='A' && str[x]<='Z'){
   	 		str[x] = str[x] + 'a'-'A';
   	 }else if(str[x]>='a' && str[x]<='z'){
   	 	str[x] = str[x] + 'A'-'a';
   	 	}
	
   }
   printf("%s",str);
}