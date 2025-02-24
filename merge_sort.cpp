#include <iostream>
#include <algorithm>

void merge_sort(int *arr, int n)
{
    int *brr = new int [n];
    int src = arr;
    int dst = brr;
    int w = 1;
    int i = 0;

    while (w < n)
    {
        while (i < n)
        {
            meg
        }
    }
}

int main()
{
    int n;
    std:: cout << "Количество элементов массива : ";
    std::cin >> n;
    int *arr = new int [n];
    std:: cout << "Введите элементы массива : ";
    for (int i = 0; i < n; i++)
    {   
        std:: cin >> arr[i];
    }

    merge_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    delete[] arr;
    return 0;
}