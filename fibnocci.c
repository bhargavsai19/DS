#include<stdio.h>
int main(){
	int x=0,y=1,z,i,n;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		z=x+y;
		printf("%d\t",z);
		x=y;
		y=z;
	}
	return 0;
	
}
