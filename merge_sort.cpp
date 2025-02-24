#include <iostream>
#include <algorithm>

void merge(int *src, int *dst, int left, int mid, int right)
{
    int i = left;
    int j = mid;
    int k = left;
    while (i < mid && j < right)
    {
        if (src[i] < src[j])
        {
            dst[k] = src[i];
            i += 1;
            k += 1;
        } else {
            dst[k] = src[j];
            j += 1;   
            k += 1;
        }
    }

    while (i < mid)
    {
        dst[k] = src[i];
        i += 1;
        k += 1;
    }

    while (j < right)
    {
        dst[k] = src[j];
        j += 1;
        k += 1;
    }
}

void merge_sort(int *arr, int n)
{
    int *brr = new int [n];
    int *src = arr;
    int *dst = brr;
    int w = 1;

    while (w < n)
    {
        int i = 0;
        
        while (i < n)
        {
            merge(src, dst, i , std::min(i+w, n), std::min(i + 2*w, n));
            i = i + 2*w;
        }

        w = 2*w;
        std::swap(src, dst);
    }

    if (src != arr)
    {
        std::copy(src,src + n, arr);
    }
    
    delete[] brr;
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