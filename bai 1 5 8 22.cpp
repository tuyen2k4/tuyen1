#include <stdio.h>
#include <math.h>
 int main(){
	int a,b,c;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("NHap b=");
	scanf("%d",&b);
	printf("NHap c=");
	scanf("%d",&c);
	
	if(a+b>c && a+b>b && b+c>a){
		// yes
		int p = a+b+c;
		float p2 = p/2.0;//4
		float s = sqrt(p2*(p2-a)*(p2-b)*(p2-c));
		printf("Chu vi: %d",p);
		printf("Dien tich: %f",s);
		}else{
			//no
			
			
		
			printf("day khong phai do dai 3 canh tam giac");
		}
	}
