/******************************************************************************
 * Họ và tên: [Đặng Đình Đức]
 * MSSV:      [PS48675]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT TRONG 3 SỐ  
//  Input: Nhập từ bàn phím 3 số bất kỳ 
//  Output: Xuất ra màn hình số lớn nhất trong 3 số 
//  Hướng dẫn: Xây dựng hàm tìm giá trị lớn nhất trong 3 số. Hàm có giá trị trả về mà 
//  giá trị lớn nhất giữa 3 số 

#include <stdio.h>

// Tao ham tim gia tri lon nhat trong 3 so
int timMax(int a, int b, int c) {
    int max = a;

    if (b > max)
        max = b;
    if (c > max)
        max = c;

    return max;
}

int main() {
    int so1, so2, so3;
    int somax;

    // Nhap 3 so
    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);

    printf("Nhap so thu hai: ");
    scanf("%d", &so2);

    printf("Nhap so thu ba: ");
    scanf("%d", &so3);

    // Goi ham tim so lon nhat
    somax = timMax(so1, so2, so3);

    // Xuat ket qua
    printf("So lon nhat trong 3 so la: %d\n", somax);

    return 0;
}
