//#include <iostream>
//
//using namespace std;
//
//int Max_element_array(int arr[], const int SIZE)
//{
//	int Max = arr[0];
//	for (int i = 0; i < SIZE; i++)
//	{
//		if (arr[i] <= SIZE)
//		{
//			Max = arr[i];
//		}
//	}
//
//	int result = 0;
//
//	for (int i = 1; i < SIZE; i++)
//	{
//		if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1] && arr[i] > result) {
//			// �������� ��������� ��������, ���� ������ ��������� ����������.
//			result = arr[i];
//		}
//		else if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1] && arr[i] > result) {
//			// �������� ��������� �����, ���� ������ ��������� ����������.
//			result = arr[i];
//		}
//	}
//	return result;
//}
//
//void main()
//{
//	setlocale(LC_CTYPE, "ukr");
//
//	const int N = 5;
//	int arr[N]{ 3, 4, 7, 5, 1 };
//
//	int result_Element = Max_element_array(arr, N); 
//
//	if (result_Element != 0) {
//		cout << "������������ ������� ��� ��������� ���������i�: " << result_Element << endl;
//	}
//	else {
//		cout << "� �����i ���� �������i� ��� ��������� ���������i�." << endl;
//	}
//}