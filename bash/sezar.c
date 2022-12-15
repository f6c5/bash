#include<stdio.h>
#include<conio.h>
void shift(char *kelime, int anahtar){
	char c=kelime[0];
	int i=0;
	while(c!=0){
		if(c>=65&&c<=90){
			kelime[i]=(kelime[i]+anahtar);
			if(kelime[i]>90)
				kelime[i]=(kelime[i]%90)+64;
			if(kelime[i]<65)
				kelime[i]=(kelime[i]%90)+90;
		}
		if(c>=97&&c<=122){
			kelime[i]=(kelime[i]+anahtar);
			if(kelime[i]>122)
				kelime[i]=(kelime[i]%122)+96;
			if(kelime[i]<97)
				kelime[i]=(kelime[i]%90)+122;
		}
		if(c==32){

		}
		i++;
		c=kelime[i];
	}
}
int main(){
	char kelime[100];
	int anahtar;
	printf("metni gir: ");
	scanf("%s",&kelime);
	printf("kaydirma degerini gir: ");
	scanf("%d",&anahtar);
	shift(kelime,anahtar);
	printf("sifreli: %s\n",kelime);
	shift(kelime,-anahtar);
	printf("sifresiz: %s\n",kelime);
	getch();
}
