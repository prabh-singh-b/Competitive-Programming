#include <iostream>

using namespace std;

void i_sort(int a[], int n) {

    for (int i = 1; i < n; i++) {
        for (int j = i; j >= 0; j--) {
            if (a[j -1] > a[j]) {
               /* int temp = a[j - 1];
                a[j-1] = a[j];
                a[j] = temp;*/
                swap(a[j - 1], a[j]);
            }
        }

    }
}

int main() {
    int arr[10] = { 1,3,4,2,3,6,1,89,12,34 };
    i_sort(arr, 10);

    for (int x : arr) {
        cout << x << " ";
    }

}