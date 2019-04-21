#include <iostream>

using namespace ::std;

main()
{
    int i,j,n;
    int data[50];
    int tmp;
cout << "\n   ---------------------------------------------";
cout << "\n   |                                           |";
cout << "\n   |              >> Descending <<             |";
cout << "\n   |                                           |";
cout << "\n   ---------------------------------------------\n";
cout << "\n   ==> Inputkan banyak data yg akan diurutkan: ";
cin >> n;
cout << "\n";

for(i=1; i<=n; i++)
{
       cout<<"\tInputkan data ke-"<<i<<" = ";
       cin>>data[i];
}

for(i=1; i<=n; i++)
{
       for(j=i; j<=n; j++)
       {
              if(data[i] < data[j])
              {
                     tmp = data[j];
                     data[j] = data[i];
                     data[i] = tmp;
              }
       }
}
cout << "\n   ---------------------------------------------\n";
cout << "   =========Hasil Pengurutan data Secara Descending======== \n";
cout << "   ---------------------------------------------\n";
cout << "\n";
for(i=1;i<=n;i++)
{
       cout<<"\tElement "<<i<<" = "<<data[i]<<endl;
}


}

