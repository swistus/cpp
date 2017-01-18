#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
int main()
{
    fstream plik;
    plik.open("anagram.txt",ios::in);
    int ilosc=0;
    while(!plik.eof())
    {
        string wyraz[5];
        int il [5];
        for(int i=0;i<5;i++)
        {
            plik>>wyraz[i];
            string pom=wyraz[i];
            il[i]=0;
            for(int a=pom.length();a>0;a--)
            {
                il[i]+=int(pom[a]);
            }
        }
        for (int i=0;i<4;i++)
        {
            for (int a=i+1;a<5;a++)
            {
                if(il[i]==il[a]&&wyraz[i].length()==wyraz[a].length())
                {
                    string pom=wyraz[a];
                    string pomm=wyraz[i];
                    int tab[pom.length()],ta[pom.length()];
                    for(int b=pom.length()-1;b>=0;b--)
                    {
                        tab[b]=int(pom[b]);
                        ta[b]=int(pomm[b]);
                    }
                    sort (tab,tab+pom.length());
                    sort (ta,ta+pom.length());
                    bool anagram=true;
                    for(int q=pom.length()-1;q>=0;q--)
                    {
                        if(tab[q]!=ta[q])
                        {
                            anagram=false;
                        }
                    }
                    if(anagram)
                    {
                        ilosc++;
                    }
                }
            }
        }
    }
    plik.close();
    cout<<"w podanym pliku znajduje sie: "<<ilosc<<" anagramow"<<endl;
}
