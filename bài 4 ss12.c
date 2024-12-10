#include <stdio.h>

int timSoLonNhat(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int mang[] = {10, 20, 30, 40, 50};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);
    
    int soLonNhat = timSoLonNhat(mang, kichThuoc);
    printf("So lon nhat trong mang la: %d\n", soLonNhat);
    
    return 0;
}

