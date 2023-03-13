#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
main(){
	setlocale(LC_ALL,"Turkish");
	srand(time(NULL));
	int i,j,min,temp,a,b,c,d=0;
	int rastgele;
	printf("Kaç adet sayý istiyorusunuz??? \n ");
	scanf("%d",&a); 
	int dizi[a];
	printf("hangi deðer aralýðýnda olsun (önce büyük deðer)???  \n");
	scanf("%d %d",&b,&c);
	d=b-c+1;
	
	for(i=0;i<=a;i++)
{   tekrar:
    rastgele=c+rand()%d;
    dizi[i]=rastgele;
}
for(i=0;i<a-1;i++){
	min=i;
	for(j=i+1;j<a;j++){
		if(dizi[j]<dizi[min])
		min=j;		
	}
	temp=dizi[i];
	dizi[i]=dizi[min];
	dizi[min]=temp;
}
for(i=0;i<a;i++){
        	if(dizi[i]!=dizi[i+1]){        		
        	if (a<dizi[i])	goto tekrar;
        	printf("%d ",dizi[i]);
			}	
		}
getchar();
}



