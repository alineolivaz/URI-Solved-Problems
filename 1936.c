#include<stdio.h>
#include<stdlib.h>

int calcFat(int numFat){//1

	int i,fatorial = numFat;//1
	for(i=numFat-1;i>1;i--){//0

		fatorial *= i;
	}
	return fatorial;
}


int main(){

	int numFat,auxiliar,i,result,soma=0,menQtd=0;
	scanf("%d",&numFat);//10
	auxiliar = numFat;
		
	for(i=1;soma!=auxiliar;i++){

		if(calcFat(i)>numFat){//1>10--2>10--6>10--24>10
			result = calcFat(i-1);//4-1 == 6
			soma += result;//6+0=6
			i = 1;
			numFat = numFat -result;//10-6=4
			menQtd++;
		}
	}

	printf("%d\n",menQtd);
	return 0;
}