#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
void merhaba()
{
	printf("Ad�n�z� ve soyad�n�z� giriniz \n");
char ad[50];
gets(ad);
printf("Merhaba %s, ho�geldin bu program�n amac� \nvekt�rel hesaplar� kolayla�t�rmak ve \nfonksiyonel bir vekt�rel hesap makinesi olmakt�r.",ad);
}
int skalerc(int vekt1[3],int vekt2[3])
{
	
	    int skaler;
		int vektc[3];
		vektc[1]=vekt1[1]*vekt2[1];
		vektc[2]=vekt1[2]*vekt2[2];
		vektc[0]=vekt1[0]*vekt2[0];
	skaler= vektc[1]+vektc[2]+vektc[3];
	return skaler;

	
}


int main(int argc, char *argv[]) {
	FILE *dosya;
	char kelime[100];
	int c=0;
	dosya=fopen("indrotuction.txt","r");
	if(dosya==NULL)
	printf("bu dosya yok \n");
	else
	{
		do
		{
			c=fscanf(dosya,"%s",kelime);
			printf("%s ",kelime);
		}
		while(c!=EOF);
	}
	fclose(dosya);
int vekt1[3],vekt3[3],vekt2[3],devam=0,secim=0,vektu1[3],vektu2[3],vcarp[3],i=0,skaler[3],dongu=1,j=0;
float vboy=0,ualan=0,palan=0,vboy_kok=0;
setlocale(LC_ALL, "Turkish");
merhaba();
while(dongu==1)
{
	
	printf("  \nYeni bir hesaplama yapmak i�in 1'e bas�n�z\n");
	printf("��k�� yapmak i�in 0'a bas�n�z\n");
	scanf("%d",&devam);
	if(devam==0)
	{
		printf("��k�� yapt�n�z, te�ekk�rler.\n");
		break;
	}
	else if(devam==1)
	{
		printf("�lk vekt�r i�in X,Y,Z de�erlerini giriniz...\n");
		for(i=0;i<3;i++)
		{
		scanf("%d",&vekt1[i]);
		}
			printf("�kinci vekt�r i�in X,Y,Z de�erlerini giriniz...\n");
			for(i=0;i<3;i++)
		{
		scanf("%d",&vekt2[i]);
		}
		
printf("Vekt�rel uzakl�k i�in 1.\n");
printf("�apraz �arp�m i�in 2.\n");
printf("Skaler �arp�m i�in 3.\n");
printf("��gen ve Paralelkenar alan hesab� i�in 4'e bas�n�z.\n");
printf("Birim matris hesab� i�in 5'e bas�n�z \n");
scanf("%d",&secim);	
if(secim==1)
{
	for(i=0;i<3;i++)
	{
		vektu1[i]=vekt2[i]-vekt1[i];
	}
	printf("Vekt�rel uzakl�k =<%d,%d,%d>\n",vektu1[0],vektu1[1],vektu1[2]);
	}
	else if(secim==2)
	{
		vcarp[0]=(vekt1[1]*vekt2[2])-(vekt2[1]*vekt1[2]);
		vcarp[1]=(vekt1[0]*vekt2[2])-(vekt2[0]*vekt1[2]);
		vcarp[2]=(vekt1[0]*vekt2[1])-(vekt2[0]*vekt1[1]);
		printf("Vekt�rel �arp�m =<%d,%d,%d>\n",vcarp[0],vcarp[1],vcarp[2]);
	}
	else if(secim==3)
	{
	skalerc(vekt1,vekt2);
	
	}
	else if(secim==4)
	{
		printf("L�tfen ���nc� vekt�r�n X,Y,Z de�elerini s�ras�yla giriniz.\n");
		for(i=0;i<3;i++)
		{
			scanf("%d",&vekt3[i]);
		}
		for(i=0;i<3;i++)
		{
			vektu1[i]=(vekt2[i]-vekt1[i]);
			vektu2[i]=(vekt3[i]-vekt1[i]);
		}
	vcarp[0]=(vektu1[1]*vektu2[2])-(vektu2[1]*vektu1[2]);	
	vcarp[1]=(vektu1[0]*vektu2[2])-(vektu2[0]*vektu1[2]);
	vcarp[2]=(vektu1[0]*vektu2[1])-(vektu2[0]*vektu1[1]);
	vboy=pow(vcarp[0],2)+pow(vcarp[1],2),pow(vcarp[2],2);
	vboy_kok=sqrt(vboy);
	ualan=vboy_kok/2;
	palan=vboy_kok;	
	printf("��genin Alan� =%f\n",ualan);
	printf("Paralelkenar�n Alan� =%f\n",palan);
	}
	else if(secim==5)
	{
					int matrix[5][5];
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				if(i==j)
				{
					matrix [i][j]=1;
				}
				else
				{
					matrix [i][j]=0;
				}
			}
		}
		for(i=0;i<5;i++) {
	for(j=0;j<5;j++)
printf("%d",matrix[i][j]);
printf("\n");
	
	}

}
	else
		{	
		printf("Yanl�� de�er girdiniz tekrar deneyiniz.");
		break;
	}
	}	
	}

	return 0;
	}	
	
	
	
	
	
	
	


