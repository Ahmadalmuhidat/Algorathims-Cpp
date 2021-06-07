//#include <iostream>
//#include <vector>
//#include "SortByInsertion.h"
//#include "MergeSort.h"
//#include "SortByCount.h"
//using namespace std;
//
//void Task_1_1();
//void Task_2_1();
//void Task_3_4();
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//
//    cout << "Сортировка по методу вставок с двоичным поиском места вставки\n";
//    Task_1_1();
//
//    cout << "=============================\n";
//    cout << "Сортировка подсчетом\n";
//    Task_2_1();
//
//    cout << "=============================\n";
//    cout << "Сортировка слиянием без рекурсии\n";
//    Task_3_4();
//     
//	return 0;
//}
//
//void Task_1_1()
//{
//    int a[] = { 37, 23, 0, 17, 12, 72, 31, 46, 100, 88, 54 };
//    int n = sizeof(a) / sizeof(a[0]), i;
//
//    cout << "Before Sorting the array: \n";
//    for (i = 0; i < n; i++)
//    {
//        cout << a[i] << " ";
//    }
//    cout << "\n";
//
//    insertionSort(a, n);
//
//    cout << "Sorted array: \n";
//    for (i = 0; i < n; i++)
//    {
//        cout << a[i] << " ";
//    }
//    cout << "\n";
//}
//
//void Task_2_1()
//{
//    vector<int> arr{ 1, 4, 1, 2, 7, 5, 2 };
//    CountSort(arr);
//}
//
//void Task_3_4()
//{
//    int arr[] = { 12, 11, 13, 5, 6, 7 };
//    int arr_size = sizeof(arr) / sizeof(arr[0]); // get the array length
//    cout << "Given array is \n";
//    printArray(arr, arr_size);
//
//    MergeSort(arr, 0, arr_size - 1);
//
//    cout << "\nSorted array is \n";
//    printArray(arr, arr_size);
//}