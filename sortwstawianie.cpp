#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"podaj ilosc liczb"<<endl;
    cin>>n;
    int t[n];
    cout<<"podawaj liczby po kolei"<<endl;
    for (int a=0;a<n;a++)
    {
        cin>>b;
        int c=0;
        while(b>t[c])
        {
            c++;
        }
        t[c-1]=b;
    }
    for (a=n;a<n;a++)
    {
       cout<<t[a];
    }
}
