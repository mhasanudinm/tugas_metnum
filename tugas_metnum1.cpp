/*
Muhamad Hasanudin Mubarok
3411141169
SCDM-B
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>


int main(){
	
	int a,b,tambah,kurang,kali,pangkat;
	float bagi,ab,bb;
	int i,temp;
	
	printf("==============================\n");
	printf("=====Tugas Metode Numerik=====\n");
	printf("==========Aritmatika==========\n");
	printf("==============================\n\n");
	printf("Masukan Nilai A : "); scanf("%d",&a);
	printf("Masukan Nilai B : "); scanf("%d",&b);
	
	
	tambah=a+b;
	kurang=a-b;
	kali=a*b;
	ab=a;
	bb=b;
	bagi=ab/bb;
	pangkat=pow(a,b);
	
	printf("\n Penjumlahan \n Hasil dari A + B = %d\n",tambah);
	printf("\n Pengurangan \n Hasil dari A - B = %d\n",kurang);
	printf("\n Perkalian \n Hasil dari A x B = %d\n",kali);
	printf("\n Pembagian \n Hasil dari A : B = %f\n",bagi);
	printf("\n Pangkat \n Hasil dari A Pangkat B = %d\n",pangkat);
	printf("\n Deret \n Hasil Deret A ke B\n");
	for (i=a;i<=b;i++){
		temp=2*pow(i,2)-4*i+1;	
		printf(" %d, ",temp);	
	
	}

	getch();
	return 0;

}
