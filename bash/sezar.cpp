#include<iostream>
using namespace std;

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
	cout<<"metni gir\n";
	cin>>kelime;
	cout<<"kaydirma sayisini gir\n";
	cin>>anahtar;
	shift(kelime,anahtar);
	cout<<"sifreli: "<<kelime<<endl;
	shift(kelime,-anahtar);
	cout<<"sifresiz: "<<kelime<<endl;
}
