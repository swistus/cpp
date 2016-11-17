#include <iostream>

using namespace std;

int main()
{
    int n,x,y;
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
    int szachow [n][n];
    cout<<"podaj wspolzendne figury"<<endl;
    do
    {
        cin>>x,y;
        if (x>n||y>n)
        {
            cout<<"podaj poprawne wspolzendne"<<endl;
        }
    }while(x>n||y>n);

}
