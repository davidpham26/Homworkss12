#include <stdio.h>

void inMang(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int mang[] = {10, 20, 30, 40, 50};
    inMang(mang, 5);
    return 0;
}
 
