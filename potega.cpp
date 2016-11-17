#include <iostream>
#include <math.h>
#include <sstream>


using namespace std;

int main()
{
    int d;
    cin>>d;
    double a[d];
    double b[d];
    long int w;
    for (int i=0; i<d; i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
    for (int i=0; i<d; i++)
    {
        char j=0;
        stringstream ss;
        w=pow(a[i],b[i]);
        ss << w;
        string q=ss.str();
        int l=q.length();
        j=q[l-1];
        cout<<j<<endl;
    }

}
