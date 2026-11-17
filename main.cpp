#include <iostream>
#include "operations.h"

using namespace std;

int main() {
    int choice;
    int* dynamicArray = nullptr; // Bellek adresini tutacak pointer
    int arraySize = 0;

    do {
        cout << "\n=== SISTEM BELLEK VE ALGORITMA YONETIMI ===" << endl;
        cout << "[1] Dinamik Dizi Olustur (Memory Allocation)" << endl;
        cout << "[2] Diziyi Ters Cevir (Pointer Manipulation)" << endl;
        cout << "[3] Faktoriyel Hesapla" << endl;
        cout << "[0] Bellegi Temizle ve Cikis Yap" << endl;
        cout << "Seciminiz: ";
        cin >> choice;

        switch (choice) {
            case 1:
                // Eger onceden bellek ayrildiysa, once temizle (Memory Leak onlemi)
                if (dynamicArray != nullptr) {
                    delete[] dynamicArray;
                    cout << "[SISTEM] Eski bellek temizlendi." << endl;
                }
                
                cout << "Dizi boyutunu girin: ";
                cin >> arraySize;
                
                if (arraySize > 0) {
                    dynamicArray = new int[arraySize]; // RAM'de dinamik yer ayirma
                    cout << "[SISTEM] RAM'de " << arraySize << " elemanlik yer ayrildi." << endl;
                    
                    for (int i = 0; i < arraySize; ++i) {
                        cout << i + 1 << ". elemani girin: ";
                        cin >> dynamicArray[i];
                    }
                    displayArray(dynamicArray, arraySize);
                } else {
                    cout << "[HATA] Gecersiz boyut. Sifirdan buyuk olmali." << endl;
                }
                break;

            case 2:
                if (dynamicArray != nullptr) {
                    reverseArray(dynamicArray, arraySize);
                    cout << "[SISTEM] Dizi bellek uzerinde ters cevrildi." << endl;
                    displayArray(dynamicArray, arraySize);
                } else {
                    cout << "[HATA] Once 1. secenek ile dinamik dizi olusturmalisiniz." << endl;
                }
                break;

            case 3: {
                int n;
                cout << "Faktoriyeli hesaplanacak sayiyi girin: ";
                cin >> n;
                long long fact = calculateFactorial(n);
                if (fact != -1) {
                    cout << "[SONUC] " << n << "! = " << fact << endl;
                } else {
                    cout << "[HATA] Girdi negatif veya faktoriyel sonucu long long turune sigmiyor." << endl;
                }
                break;
            }
                
            case 0:
                // Cikis yapmadan hemen once sistemi temizle
                if (dynamicArray != nullptr) {
                    delete[] dynamicArray;
                    dynamicArray = nullptr;
                    cout << "[SISTEM] Bellek sizintisi onlendi. Kaynaklar RAM'e iade edildi." << endl;
                }
                cout << "Sistem kapaniyor..." << endl;
                break;

            default:
                cout << "[HATA] Gecersiz secim. Lutfen menudeki numaralardan birini girin." << endl;
        }
    } while (choice != 0);

    return 0;
}
