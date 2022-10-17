#include <stdio.h>
#include <math.h>
int main(){
	int a;
	scanf("%d",&a);
	int b;
	scanf("%d",&b);
	int c;
	scanf("%d",&c);
	
	if(a==0){
		if(b==0){
			if(c==0){
				printf("pt vo so nghiem");
			}else{
				printf("pt vo nghiem");
				
			}
			}else{
				int x = -c/b;
				printf("x = %d",x);
			}
		}else{
			int d =b*b -a*a*c;
			if(d<0){
				float x =-(float)b/(2*a);
				printf("x = %d",x);
			}else{
				double x1 = (-b+sqrt(d))/(2*a);
				double x2 = (-b-sqrt(d))/(2*a);
				printf("x1=%lf \n",x1);
				printf("x2=%lf \n",x2);
			}
		}
	}

