#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int lokmaSayisi(int un,int seker, int tuz, int su,int yag)
{
	int enK=2000,gecici=0,sayacFonksiyon;
	int malzemeler[5];
	malzemeler[0]=un;
	malzemeler[1]=seker;
	malzemeler[2]=tuz;
	malzemeler[3]=su;
	malzemeler[4]=yag;
	
	int gerekenler[5];
	gerekenler[0]=200;
	gerekenler[1]=150;
	gerekenler[2]=300;
	gerekenler[3]=10;
	gerekenler[4]=50;

	for(sayacFonksiyon=0;sayacFonksiyon<5;sayacFonksiyon++)
	{
	      gecici=malzemeler[sayacFonksiyon]/gerekenler[sayacFonksiyon];
	      
	      if(gecici<=enK)
	      {
		   enK=gecici;
		   printf("%d\n",enK);
		  }
	}
	
    return enK;	
}


int adet(int a)
{
	//kullanýcýya verilecek olan lokma sayýsýný bulur.
	a=a*a;
	a=a/6;
	return (a);
}

void mesajYaz()
{
	printf("Afiyet Olsun");
}

int main(int argc, char *argv[]) {
	
int unMiktari,sekerMiktari,suMiktari,tuzMiktari,yagMiktari;
int lokmaMiktari,yas,i=0,z,y;
int hizmetAdedi[100];
char personelIsim[10];
printf("Lutfen personel ismini giriniz\n");
gets(personelIsim);



printf("Lutfen elinizdeki un miktarini giriniz\n");
scanf("%d",&unMiktari);
printf("Lutfen elinizdeki seker miktarini giriniz\n");
scanf("%d",&sekerMiktari);
printf("Lutfen elinizdeki su miktarini giriniz\n");
scanf("%d",&suMiktari);
printf("Lutfen elinizdeki tuz miktarini giriniz\n");
scanf("%d",&tuzMiktari);
printf("Lutfen elinizdeki yag miktarini giriniz\n");
scanf("%d",&yagMiktari);

lokmaMiktari=lokmaSayisi(unMiktari,sekerMiktari,tuzMiktari,suMiktari,yagMiktari);
lokmaMiktari*=100;
printf("%d",lokmaMiktari);

while(lokmaMiktari>5)
{
	
	printf("Lutfen Yasinizi Giriniz");
	scanf("%d",&yas);
	
	z=adet(yas);
	hizmetAdedi[i]=z;
	lokmaMiktari-=z;
	
	i++;
	mesajYaz();
}
y=i;
i=0;	
while(y>0)	
{
	printf("%d \n",hizmetAdedi[i]);
	i++;
	y--;
}
const char * veri="Lokma dagitimi basariyla tamamlandi.";	
FILE * dosya;
int kaydedilen=0;
dosya=fopen("lokma.txt","w");
if(dosya==NULL){
		printf("Dosya oluþturulamadý. Hata: %s",stderr);
		return 0;
	}
		
	return 0;
}
