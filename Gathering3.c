#include<stdio.h>
 

char length(char arr[]){
   
   int len = 0;
   
   while (arr[len] != '\0')
   
      len++;
   
   return (len);
}
 
main(){
	
   char arr[100];
   int len;
 
   printf("Enter String : ");
   gets(arr);
 
   len = length(arr);
 
   printf("Length of String : %d", len);

}
 
