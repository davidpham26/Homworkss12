#include <stdio.h>

int tinhGiaiThua(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * tinhGiaiThua(n - 1);
    }
}

int main() {
    int so = 5;
    int ketQua = tinhGiaiThua(so);
    
    printf("Giai thua cua %d la: %d\n", so, ketQua);
    
    return 0;
}

