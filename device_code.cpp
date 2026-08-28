#include <iostream>
using namespace std;

int main() {
    int code;
    cout << "Enter code: ";
    cin >> code;

    // استخراج الأرقام من الكود المكون من 3 أرقام
    int device = code / 100;
    int connection = (code / 10) % 10;
    int sub = code % 10;

    // 1. تحديد نوع الجهاز
    cout << "الجهاز: ";
    if (device == 1) {
        cout << "موبايل" << endl;
    } 
    else if (device == 2) {
        cout << "كمبيوتر" << endl;
    } 
    else {
        cout << "Error" << endl;
    }

    // 2. تحديد نوع الاتصال
    cout << "الاتصال: ";
    if (connection == 1) {
        cout << "WiFi" << endl;
    } 
    else if (connection == 2) {
        cout << "Data" << endl;
    } 
    else {
        cout << "Error" << endl;
    }

    // 3. تحديد حالة الاشتراك
    cout << "الاشتراك: ";
    if (sub == 0) {
        cout << "غير مشترك" << endl;
    } 
    else if (sub == 1) {
        cout << "مشترك" << endl;
    } 
    else {
        cout << "Error" << endl;
    }

    return 0;
}