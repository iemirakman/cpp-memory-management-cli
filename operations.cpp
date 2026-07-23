#include "operations.h"
#include <iostream>

using namespace std;

// Faktöriyel hesaplama (Iteratif yöntem bellek dostudur)
long long calculateFactorial(int n) {
    if (n < 0) return -1; 
    if (n == 0 || n == 1) return 1;
    
    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Pointer kullanarak diziyi bellek üzerinde ters çevirme
void reverseArray(int* arr, int size) {
    if (arr == nullptr || size <= 1) return;
    
    int start = 0;
    int end = size - 1;
    
    while (start < end) {
        // Swap islemi
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
}

// Diziyi ekrana formatlı yazdırma
void displayArray(const int* arr, int size) {
    if (arr == nullptr || size <= 0) {
        cout << "[HATA] Dizi bos veya gecersiz." << endl;
        return;
    }
    cout << "[ ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}