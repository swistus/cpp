#include <iostream>

using namespace std;

struct liczb
{
    int
};
struct znakel
{
    char zna;
    znakel *nastêpny;
};
struct liczba
{
    char znak;
    liczba *next;
};
void dodawanie(liczba **root);
void stos();
void licz(liczba **root);
int main()
{
    stos();
}

void stos()
{
    char a;
    while (a!=q)
    {
        cout<<"podaj liczbe lub znak q jezeli chcesz zakonczyc"<<endl;
        cin>>a;
        if (a!=q)
        {
            dodawanie(liczba **root);
        }
    }
    licz(liczba **root);
}

void dodawanie(liczba **root)
{
    liczba *nowa=new liczba
    cin>> nowa -> znak;
    nowa->next=*root;
    *root=nowa;
}

void licz(liczba **root)
{
    if (*root)
    {
        liczba *temp=*root;
        *root=(*root)->next;
        if (temp->wartosc)
        ;
        delete temp;
    }
}
