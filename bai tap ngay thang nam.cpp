#include<iostream>

using namespace std;



int fun(int ngay, int thang) {
    switch (thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    case 2:
            return 29;
    
    default:
        cout << "So thang nhap khong hop le" << endl;
        exit(0);
    }

   
}

int main()
{
    int ngay,thang;
    do {
        cout << "Nhap ngay: ";
        cin >> ngay;
        cout << "Nhap thang: ";
        cin >> thang;
    } while (ngay < 0 ||  thang < 1 || thang >12);
    cout << "So ngay trong thang: " << fun(ngay, thang) << endl;
    switch ((ngay + thang + 5) % 7)
    {
    case 0: printf("Ngay thu HAI."); break;
    case 1: printf("Ngay thu BA.");  break;
    case 2: printf("Ngay thu TU.");   break;
    case 3: printf("Ngay thu NAM.");   break;
    case 4: printf("Ngay thu SAU.");  break;
    case 5: printf("Ngay thu BAY.");  break;
    case 6: printf("Ngay CHU NHAT.");  break;
    }
    return 0;
}
