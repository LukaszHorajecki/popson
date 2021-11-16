#include <iostream>
#include <fstream>
#include <string>
using namespace std;
    int a;
    int b;
    int x;
    int licz;
int main() {
	fstream plik;
	string pasek;
    plik.open("trojki_liczb.txt", ios::in);
	if(plik.good() == true)
	{
	while(!plik.eof())
		{
				plik >> a >>b >> x;
				y=a*x+b;
				cout <<"\ta"<<a<<"\t b <<b<<"\t x"<<x<<"\tWartosc funkcji y=ax+b to:\t"<<y<<endl;
					getline(plik, pasek);
					licz++;
				}
		}
					plik.close();
	
	plik.open("wartosci_funkcji.txt"), ios::out;
	plik << "WF y= a*x+b = "<<y<<endl;
	
	











































