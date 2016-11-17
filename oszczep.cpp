#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
    int n;
    cout<<"podaj liczbe wynikow"<<endl;
    cin>>n;
    int wyniki[n];
    cout<<"podaj wyniki po jednym"<<endl;
    for (int a=0;a<n;a++)
    {
        cin>>wyniki[a];
    }
    sort(wyniki,wyniki+8);
    cout<<"najlepszy wynik tego zawodnika to "<<wyniki[n-1]<<endl;
}
