#include <iostream>
#include <string>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <fstream>
#include <algorithm>
#include <time.h>
using namespace std;
    int zycie=11;
    string haslo;
    string hasloz=" ";
    int trud=0;
    char litery [32];
    void gra();
int main()
{
    fstream plik;
    cout<<"podaj pozim trudnoœci (1-3)"<<endl;
    cin>>trud;
    if(trud==1)
    {
        plik.open("has1.txt",ios::in);
    }
    else if(trud==2)
    {
        plik.open("has2.txt",ios::in);
    }
    else if (trud==3)
    {
        plik.open("has3.txt",ios::in);
    }

        srand(time(NULL));
    for (int i=rand()%20;i>1;i--)
    {
        string a;
        plik>>a;
    }
    plik>>haslo;
    system( "cls" );
    for (int i=0;i<haslo.length();i++)
    {
        hasloz[i]='_';
    }
    gra();
}

void gra()
{
    system( "cls" );
    switch (zycie)
	{
		case 11:
				cout << "            " << endl;
				cout << "            " << endl;
				cout << "            " << endl;
				cout << "            " << endl;
				cout << "            " << endl;
				cout << "            " << endl;
				cout << "            " << endl;
				break;
		case 10:
				cout << "            " << endl;
				cout << "            " << endl;
				cout << "            " << endl;
				cout << "            " << endl;
				cout << "            " << endl;
				cout << "            " << endl;
				cout <<"/            " << endl;
				break;
		case 9:
				cout << "            " << endl;
				cout << "            " << endl;
				cout << "            " << endl;
				cout << "            " << endl;
				cout << "            " << endl;
				cout << "            " << endl;
				cout <<"/\\          " << endl;
				break;
		case 8:
				cout << "|           " << endl;
				cout << "|           " << endl;
				cout << "|           " << endl;
				cout << "|           " << endl;
				cout << "|           " << endl;
				cout << "|           " << endl;
				cout <<"/\\          " << endl;
				break;
		case 7:
				cout << "|---------  " << endl;
				cout << "|           " << endl;
				cout << "|           " << endl;
				cout << "|           " << endl;
				cout << "|           " << endl;
				cout << "|           " << endl;
				cout <<"/\\          " << endl;
				break;
		case 6:
				cout << "|---------  " << endl;
				cout << "|        |  " << endl;
				cout << "|           " << endl;
				cout << "|           " << endl;
				cout << "|           " << endl;
				cout << "|           " << endl;
				cout <<"/\\          " << endl;
				break;
		case 5:
				cout << "|---------  " << endl;
				cout << "|        |  " << endl;
				cout << "|        O  " << endl;
				cout << "|           " << endl;
				cout << "|           " << endl;
				cout << "|           " << endl;
				cout <<"/\\          " << endl;
				break;
		case 4:
				cout << "|---------  " << endl;
				cout << "|        |  " << endl;
				cout << "|        O  " << endl;
				cout << "|        |  " << endl;
				cout << "|           " << endl;
				cout << "|           " << endl;
				cout <<"/\\          " << endl;
				break;
		case 3:
				cout << "|---------  " << endl;
				cout << "|        |  " << endl;
				cout << "|        O  " << endl;
				cout << "|        |\\" << endl;
				cout << "|           " << endl;
				cout << "|           " << endl;
				cout <<"/\\          " << endl;
				break;
		case 2:
				cout << "|---------  " << endl;
				cout << "|        |  " << endl;
				cout << "|        O  " << endl;
				cout << "|       /|\\" << endl;
				cout << "|           " << endl;
				cout << "|           " << endl;
				cout <<"/\\          " << endl;
				break;
		case 1:
			    cout << "|---------  " << endl;
				cout << "|        |  " << endl;
				cout << "|        O  " << endl;
				cout << "|       /|\\" << endl;
				cout << "|         \\" << endl;
				cout << "|           " << endl;
				cout <<"/\\          " << endl;
				break;
		case 0:
				cout << "|---------  " << endl;
				cout << "|        |  " << endl;
				cout << "|        O  " << endl;
				cout << "|       /|\\" << endl;
				cout << "|       / \\" << endl;
				cout << "|           " << endl;
				cout <<"/\\          " << endl;
				break;
	};
	if(zycie >0)
    {
        cout<<"uzyte litery: "<<litery<<endl;
        cout<<hasloz<<endl;
    }
}
