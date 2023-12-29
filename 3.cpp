//#include <iostream>
//using namespace std;
//
//int findLocalMax(const int arr[], int size) 
//{
//    int minLocalMax = arr[0]; 
//
//    for (int i = 1; i < size - 1; ++i) 
//    {
//        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) 
//        {
//
//            if (arr[i] < minLocalMax) 
//            {
//                minLocalMax = arr[i];
//            }
//        }
//    }
//
//    return minLocalMax;
//}
//
//int main() 
//{
//    setlocale(LC_CTYPE, "ukr");
//    
//    const int N = 5;
//    int arr[N] = { 2, 5, 3, 8, 6 };
//
//    int result = findLocalMax(arr, N);
//
//    if (result != -1) 
//    {
//        cout << "Мiнiмальний локальний максимум: " << result << endl;
//    }
//
//    return 0;
//}