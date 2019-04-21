#include <iostream>
using namespace ::std;

double p (float angka, int pangkat)
{
    if (pangkat==0)
        return 1;
    else if (pangkat >=1)
        return angka*p (angka,pangkat-1);
    else if (pangkat<0)
        return 1 / angka*p (angka,pangkat+1);
}

main ()
{
    int a,pa;
    cout<<"Angka    :"; cin>>a;
    cout<<"Pangkat  :"; cin>>pa;
    cout<<" "; cout<<p(a,pa);
}
