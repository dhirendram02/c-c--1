#include <iostream>
using namespace std;


void smallest(int arr[], int arr_size)
{
	int i, first, second;

	if (arr_size < 2)
	{
		cout<<" wrong input ";
		return;
	}

	for (i = 0; i < arr_size ; i ++)
	{
		if (arr[i] < first)
		{
			second = first;
			first = arr[i];
		}
		else if (arr[i] < second && arr[i] != first)
			second = arr[i];
	}
	if (second == arr_size)
		cout << " no second smallest element\n";
	else
		cout << " smallest element is " << first <<endl << " and second "
			"smallest element is " << second << endl;
}

int main()
{
	int arr[] = {12, 13, 1, 10, 34, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	smallest(arr, n);
	return 0;
}
