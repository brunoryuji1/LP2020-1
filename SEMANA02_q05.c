#include <stdio.h>

int main(){
	
	int a, b, a1, a2, b1, b2;
	
	scanf("%i %i", &a, &b);
	
	(a1 = a - 1), (a2 = a + 1), (b1 = b - 1), (b2 = b + 1);

				if(a>b && b == a1){
					printf("%i %i %i %i", b1, a1, b2, a2);
					}else{
						if(b>a && a == b1){
							printf("%i %i %i %i", a1, b1, a2, b2);	
							}else{	
								if(b>a){
									printf("%i %i %i %i %i %i", a1, a, a2, b1, b, b2);
									}else{
										if(a>b && a > b1){
										printf("%i %i %i %i %i %i", b1, b, b2, a1, a, a2);
						
							}
						}
					}
				}
	return 0;
}