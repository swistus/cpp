
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
int main()
{
    fstream plik;
    plik.open("palindromy.txt",ios::in);
    int ilosc=0;
    while (plik.good())
    {
        string wyraz;
        plik>>wyraz;
        bool palindrom=true;
        for (int i=(wyraz.length()-2)/2;i>=0;i--)
        {
            if(wyraz[i]!=wyraz[wyraz.length()-i-1])
            {
                palindrom=false;
            }
        }
        if(palindrom)
        {
            ilosc++;
        }
    }
    plik.close();
    cout<<"w podanym pliku znajduje sie: "<<ilosc<<" anagramow"<<endl;
}
