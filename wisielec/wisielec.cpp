#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <fstream>
#include <algorithm>
#include <time.h>
#include <conio.h>

using namespace std;
    int zycie=11;
    string haslo;
    string hasloz;
    int dziedzina;
    int ilosc=0;
    char litery [32];
    void gra();
    bool sprawdzanie1(char li);
    void sprawdzanie2(char li);
    void czyszczenie();
    bool bis();
int main()
{
    do
    {
        fstream plik;
        cout<<"wybierz dziedzie (1-informatyka, 2-zwierzeta, 3-rosliny, 4-zima, 5-lato, 6-inne"<<endl;
        cin>>dziedzina;
        switch (dziedzina)
        {
            case 1:
                plik.open("informatyka.txt",ios::in);
                break;
            case 2:
                plik.open("zwierzeta.txt",ios::in);
                break;
            case 3:
                plik.open("rosliny.txt",ios::in);
                break;
            case 4:
                plik.open("zima.txt",ios::in);
                break;
            case 5:
                plik.open("lato.txt",ios::in);
                break;
            case 6:
                plik.open("inne.txt",ios::in);
                break;
        }
            srand(time(NULL));
        for (int i=rand()%10;i>1;i--)
        {
            string a;
            plik>>a;
        }
        plik>>haslo;
        hasloz=haslo;
        system( "cls" );
        for (int i=0;i<haslo.length();i++)
        {
            hasloz[i]='_';
        }
        while (zycie >0&&haslo!=hasloz)
        {
            gra();
        }
            if(zycie<=0)
        {
            system( "cls" );
            cout << "|---------  " << endl;
            cout << "|        |  " << endl;
            cout << "|        O  " << endl;
            cout << "|       /|\\" << endl;
            cout << "|       / \\" << endl;
            cout << "|           " << endl;
            cout << "/\\         " << endl;
            cout<<endl<<"przegrales a haslo to: "<<haslo<<endl;
        }
        else if(haslo==hasloz)
        {
            system( "cls" );
            cout<<"gratulacje wygrales"<<endl;
        }
    }while(bis()==true);
    return 0;
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
                    cout << "/            " << endl;
                    break;
            case 9:
                    cout << "            " << endl;
                    cout << "            " << endl;
                    cout << "            " << endl;
                    cout << "            " << endl;
                    cout << "            " << endl;
                    cout << "            " << endl;
                    cout << "/\\          " << endl;
                    break;
            case 8:
                    cout << "|           " << endl;
                    cout << "|           " << endl;
                    cout << "|           " << endl;
                    cout << "|           " << endl;
                    cout << "|           " << endl;
                    cout << "|           " << endl;
                    cout << "/\\          " << endl;
                    break;
            case 7:
                    cout << "|---------  " << endl;
                    cout << "|           " << endl;
                    cout << "|           " << endl;
                    cout << "|           " << endl;
                    cout << "|           " << endl;
                    cout << "|           " << endl;
                    cout << "/\\          " << endl;
                    break;
            case 6:
                    cout << "|---------  " << endl;
                    cout << "|        |  " << endl;
                    cout << "|           " << endl;
                    cout << "|           " << endl;
                    cout << "|           " << endl;
                    cout << "|           " << endl;
                    cout << "/\\          " << endl;
                    break;
            case 5:
                    cout << "|---------  " << endl;
                    cout << "|        |  " << endl;
                    cout << "|        O  " << endl;
                    cout << "|           " << endl;
                    cout << "|           " << endl;
                    cout << "|           " << endl;
                    cout << "/\\          " << endl;
                    break;
            case 4:
                    cout << "|---------  " << endl;
                    cout << "|        |  " << endl;
                    cout << "|        O  " << endl;
                    cout << "|        |  " << endl;
                    cout << "|           " << endl;
                    cout << "|           " << endl;
                    cout << "/\\          " << endl;
                    break;
            case 3:
                    cout << "|---------  " << endl;
                    cout << "|        |  " << endl;
                    cout << "|        O  " << endl;
                    cout << "|        |\\" << endl;
                    cout << "|           " << endl;
                    cout << "|           " << endl;
                    cout << "/\\          " << endl;
                    break;
            case 2:
                    cout << "|---------  " << endl;
                    cout << "|        |  " << endl;
                    cout << "|        O  " << endl;
                    cout << "|       /|\\" << endl;
                    cout << "|           " << endl;
                    cout << "|           " << endl;
                    cout << "/\\          " << endl;
                    break;
            case 1:
                    cout << "|---------  " << endl;
                    cout << "|        |  " << endl;
                    cout << "|        O  " << endl;
                    cout << "|       /|\\" << endl;
                    cout << "|         \\" << endl;
                    cout << "|           " << endl;
                    cout << "/\\          " << endl;
                    break;
            case 0:
                    cout << "|---------  " << endl;
                    cout << "|        |  " << endl;
                    cout << "|        O  " << endl;
                    cout << "|       /|\\" << endl;
                    cout << "|       / \\" << endl;
                    cout << "|           " << endl;
                    cout << "/\\          " << endl;
                    break;
        };
        if(zycie >0&&haslo!=hasloz)
        {
            char li;
            do
            {
                cout<<hasloz<<endl<<endl;
                cout<<endl<<"uzyte litery: "<<litery<<endl<<endl;
                cout<<"podaj litere"<<endl;
                cin>>li;
            }while(sprawdzanie1 (li));
            sprawdzanie2(li);
        }
}
bool sprawdzanie1(char li)
{
    bool powtorzenie=false;
    for(int i=31;i>=0;i--)
    {
        if (li==litery[i])
        {
            powtorzenie=true;
        }
    }
    if(powtorzenie==true)
    {
        cout<<"ta litera zostala juz podana"<<endl;
        return true;
    }
    else
    {
        litery[ilosc]=li;
        ilosc++;
        return false;
    }
}
void sprawdzanie2(char li)
{
    bool spr=false;
    for(int i=haslo.length()-1;i>=0;i--)
    {
        if (li==haslo[i])
        {
            spr=true;
            hasloz[i]=li;
        }
    }
    if(spr==false)
    {
        zycie--;
    }
}
bool bis()
{
    cout<<endl<<"jezeli chcesz zagrac ponownie wcisnij T, jezeli chcesz zakonczyc gre wcisnik K";
    string b;
    while (b!="t"&&b!="k")
    {
        b=getch();
        if(b=="t")
        {
            czyszczenie();
            system( "cls" );
            return true;
        }
        else if(b=="k")
        {
            return false;
        }
    }
}
void czyszczenie()
{
    for(int i=31;i>=0;i--)
    {
        litery[i]=' ';
    }
    ilosc=0;
    zycie=11;
}
