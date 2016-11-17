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
    cout<<"podaj wspolzendna x figury"<<endl;
    do
    {
        cin>>x;
        if (x>n)
        {
            cout<<"podaj poprawna wspolzendna x"<<endl;
        }
    }while(x>n);
        cout<<"podaj wspolzendna y figury"<<endl;
    do
    {
        cin>>y;
        if (y>n)
        {
            cout<<"podaj poprawna wspolzendna y"<<endl;
        }
    }while(y>n);
}
