#include <iostream>

using namespace ::std;

void Merge(int *a, int LEMAH, int KUAT, int mid)
{

	int i, j, k, temp[KUAT-LEMAH+1];
	i = LEMAH;
	k = 0;
	j = mid + 1;


	while (i <= mid , j <= KUAT)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}


	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}

	while (j <= KUAT)
	{
		temp[k] = a[j];
		k++;
		j++;
	}



	for (i = LEMAH; i <= KUAT; i++)
	{
		a[i] = temp[i-LEMAH];
	}
}


void MergeSort(int *a, int LEMAH, int KUAT)
{
	int mid;
	if (LEMAH < KUAT)
	{
		mid=(LEMAH+KUAT)/2;

		MergeSort(a, LEMAH, mid);
		MergeSort(a, mid+1, KUAT);
		Merge(a, LEMAH, KUAT, mid);
	}
}

 main()
{
	int n, i;
cout << "\n                                                ";
cout << "\n   |                                           |";
cout << "\n   |              >> Ascending <<              |";
cout << "\n   |                                           |";
cout << "\n                                              \n";
	cout<<"\nMasukkan jumlah data : ";
	cin>>n;

	int f[n];
	for(i = 0; i < n; i++)
	{
		cout<<"masukkan data "<<i+1<<": ";
		cin>>f[i];
	}

	MergeSort(f, 0, n-1);

	cout<<"\nJADI   : ";
	for (i = 0; i < n; i++)
        cout<<"  "<<f[i];

	return 0;
}

