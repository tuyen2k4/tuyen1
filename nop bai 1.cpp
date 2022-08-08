#include<stdio.h>

int main(){
	int n;
	printf("Nhap n =",n);
	scanf("%d",&n);
	int s,i;
	s = 0;
	i = 0;
	while(i<n){
		s=1+2+3+n;
		i++;
	}
	printf("tong la = %d",s);
}
