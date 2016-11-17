#include <iostream>

using namespace std;

int polozenie(int n, string nazwa);
int pola(int x,int y,int n);
int wymiar();

int main()
{
    int n,x,y;
    n=wymiar();
    int szachow [n][n];
    x=polozenie(n,"x");
    y=polozenie(n,"y");
    cout<<"ten hetman atakuje"<<pola(x,y,n)<<"pol"<<endl;
}


int pola(int x,int y,int n)
{

}
int polozenie(int n, string nazwa)
{
        int a;
        cout<<"podaj wspolzendna "<<nazwa<<" figury"<<endl;
        do
    {
        cin>>a;
        if (a>n)
        {
            cout<<"podaj poprawna wspolzendna "<<nazwa<<endl;
        }
    }while(a>n);
    return a;
}
int wymiar()
{
    int n;
        do
    {
        cout<<"padaj wymiar szachownicy"<<endl;
        cin>>n;
        if (n>50)
        {
            cout<<"za duza szachownica"<<endl<<"podj inny rozmiar"<<endl;
            return 0;
        }
    }while(n>50);
    return n;
}
