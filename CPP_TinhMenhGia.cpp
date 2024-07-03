// CPP_TinhMenhGia.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    // Mảng chứa các mệnh giá tiền
    int menhgia[] = { 500, 200, 100, 50, 20, 10, 5, 1 };
    int soto = 8;  // Số loại mệnh giá tiền

    int amount;
    cout << "Nhap so tien can tinh: ";
    cin >> amount;

    // Mảng để lưu số tờ từng mệnh giá
    int count[8] = { 0 };
    // Duyệt qua từng mệnh giá để tính số tờ ít nhất
    for (int i = 0; i < soto; ++i) {
        count[i] = amount / menhgia[i];
        amount = amount % menhgia[i];
    }

    // In ra số tờ mỗi loại mệnh giá và tổng số tờ nhận được
    cout << "So to moi loai menh gia:" << endl;
    int total_notes = 0;
    for (int i = 0; i < soto; ++i) {
        if (count[i] > 0) {
            cout << menhgia[i] << " VND: " << count[i] << " to" << endl;
            total_notes += count[i];
        }
    }
    cout << "Tong so to nhan duoc: " << total_notes << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
