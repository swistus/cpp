#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"podaj liczbe wyrazow ciagu"<<endl;
    cin>>n;
    float ciag[n];
    cout<<"podaj wyrazy ciagu po jednym"<<endl;
    for(int a=0;a<n;a++)
    {
        cin>>ciag[a];
    }
    float naj=ciag[0];
    for (int a=1;a<n;a++)
    {
        for (int b=0;b<n;b++)
        {
            float suma=0;
            for (int c=1;c<=a;c++)
            {
                suma+=ciag[c+b];
            }
            if (suma>naj)
            {
                naj=suma;
            }
        }
    }
    cout<<"najwieksza suma tego ciagu to "<<naj<<endl;
}


