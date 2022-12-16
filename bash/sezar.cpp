#include <iostream>
using namespace std;

string shift(string metin, int anahtar){

	char ch;
    for (int i = 0; metin[i] != '\0'; ++i){
		
        ch = metin[i];

        if (ch >= 'a' && ch <= 'z'){
            ch = ch + anahtar;

            if (ch > 'z'){
                ch = ch - 'z' + 'a' - 1;
            }
            metin[i] = ch;
        }

        else if (ch >= 'A' && ch <= 'Z'){
			
            ch = ch + anahtar;

            if (ch > 'Z'){
                ch = ch - 'Z' + 'A' - 1;
            }
            metin[i] = ch;
        }
    }
	return metin;
}
int main(){
	
	char metin[100];
    int anahtar;
	
	cout << "Sifrelenecek Metni Girin: ";
    cin.getline(metin, 100);

	cout<<"kaydirma sayisini gir\n";
	cin>>anahtar;
	
	cout<<"sifresiz: "<<metin<<endl;
	cout<<"sifreli: "<<shift(metin,anahtar)<<endl;
}
