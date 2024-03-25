// Menukarnya dengan menggunakan set pass 1 jika index j lebih besar daripada element di index j+1, geser 2 elemen
// Menukarnya dengan element elemen yang akan dibandingkan dan ditukar 
// karena hanya memerlukan perukaran sedikit

#include <iostream>
void selectionSort(int Array[], int n) {
    for (int j = 0; j < n - 1; ++j) {
        int min_index = j;
        (int i = j + 1; i < n; ++i) {
            if (Array[i] < Array[min_index]) {
                min_index = i;
            }
        }
        // Swap Array[j] with Array[min_index]
        int temp = Array[j];
        Array[j] = Array[min_index];
        Array[min_index] = temp;
    }

    void display(int Array{}), int
        cout << Data terurut : / n"/
        for (int i = 0; i < n; i++)
            cout << Array[i] << ";
            cout << endl;

}
int main() {
    const int size = 80;
    int Array[size];
    // Input data
    std::cout << "Masukkan " << size << " angka:\n";
    for (int i = 0; i < size; ++i) {
        std::cin >> Array[i];
    }
}
std::cout << std::endl;
return 0;

