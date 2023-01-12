#include<stdio.h>

int sum(int a[100] , int n){
	
	int s=0;
	int i;
	
	for(i=1; i<n; i++){
		 
		s = s + a[1];
	
	}

		
	return s;
}

main(){
	
	
	int a[100];
    int z,i;
	
	int n;
	
	printf("Enter Number: ");
	scanf("%d",&n);//5
	
	for(i=0; i<n; i++){
		
		printf("Enter value: ");
		scanf("%d",&a[i]);
		 
	}

	   z = sum(a,n);
	   printf("%d",z);
		
	
}
