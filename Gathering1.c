#include<stdio.h>
int fact(int a){
	
	if(a>=1){
		
		return a*fact(a-1);
		
		
	}
	else{
		
		return 1;
	}
	
	
}

main(){
	
	int n;
	int b;
	
	printf("Enter Number :");
	scanf("%d",&n);
	
	b=fact(n);
	printf("Factorial : %d",b);
	
}
