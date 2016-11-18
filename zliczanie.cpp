#include <iostream>

using namespace std;

int main()
{
    int n,l;
    cout<<"podaj zakres liczb"<<endl;
    cin>>n;
    cout<<"podaj iloœæ liczb"<<endl;
    cin>>l;
    int t[n+1];
    cout<<"podawaj liczby po kolei"<<endl;
    for (int a=n+1;a>=0;a--)
    {
        t[a]=0;
    }
    for(int a=0;a<l;a++)
    {
        int b;
        cin>>b;
        t[b]++;
    }
    for(int a=0;a<=n;a++)
    {
    for (int b=t[a];b>0;b--)
        {
            cout<<a;
        }
    }
}
