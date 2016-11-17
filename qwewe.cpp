#include <iostream>
#include <math.h>
#include <sstream>

using namespace std;

int main()
{
    int d;
    cin>>d;
    int a[d];
    int b[d];
    for (int i=0; i<d; i++)
    {
        cin>>a[i];
        cout<<" ";
        cin>>b[i];
    }
    for (int i=0; i<d; i++)
    {
        int m=a[i];
        char j=0;
        for (b[i]; b[i]>1; b[i]--)
        {
            m=m*a[i];
        }
        ostringstream ss;
        ss << m;
        string q=ss.str();
        int l=q.length();
        j=q[l-1];
        cout<<j<<endl;
    }

}
