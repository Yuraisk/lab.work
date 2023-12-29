#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	const int N = 10;

	int arr[N]{2, 5, -67, 8, 9, -100, 12, 4, 70, 100,};

	int locale_Min = arr[0];

	int min_Index = 0 ;

    for (int i = 1; i < N - 1; i++)
    {
        if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
        {
            cout << "\tMinimum local array at index " << i << ": " << arr[i] << endl;

            if (arr[i] < locale_Min)
            {
                locale_Min = arr[i];
                min_Index = i;
            }
        }
    }

    if (arr[N - 1] < locale_Min)
    {
        locale_Min = arr[N - 1];
        min_Index = N - 1;
    }

	cout << "\n\tThe minimum size of this element: " << min_Index << endl;
}