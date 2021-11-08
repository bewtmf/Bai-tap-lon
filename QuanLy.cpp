#include <iostream>
#include <string>
#include "Person.cpp"
#include "Student.cpp"
#include "Teacher.cpp"
using namespace std;

// Vaccine
// class Vaccine
// {
// protected:
//     string NgaySanXuat;
//     double Soluong;

// public:
//     virtual void Nhap();
//     virtual void Xuat();
//     virtual void ChatLuongAnToan() = 0;                // Phan tram khang the cua Vaccine
//     virtual void Thoi_gian_tiem_hai_mui(int ngay) = 0; // tinh tu ngay tiem mui 1 den ngay tiem mui 2
// };
// void Vaccine::Nhap()
// {

//     fflush(stdin);
//     cout << "\nNhap ngay san xuat vaccine(dd/mm/yyyy): ";
//     getline(cin, NgaySanXuat);
//     cout << "\nNhap So luong vaccine: ";
//     cin >> Soluong;
// }
// void Vaccine::Xuat()
// {
//     cout << "\nNgay san xuat(dd/mm/yyyy): " << NgaySanXuat;
//     cout << "\nSo luong: " << Soluong << endl;
// }

// //Vaccine_Astrazeneca
// class Vaccine_Astrazeneca : public Vaccine
// {
// private:
//     string TenVaccine, NoiSanXuat;

// public:
//     void Nhap();
//     void Xuat();
//     void ChatLuongAnToan();
//     void Thoi_gian_tiem_hai_mui(int ngay);
//     void setTenVaccine(string Tenvaccin);
//     string getTenVaccine();
//     void setNoiSanXuat(string Noisanxuat);
//     string getNoiSanXuat();
// };

// void Vaccine_Astrazeneca::Nhap()
// {
//     Vaccine::Nhap();
// }

// void Vaccine_Astrazeneca::Xuat()
// {
//     cout << "\t ***XUAT THONG TIN VACCINE***" << endl;
//     cout << "Ten Vaccine: " << TenVaccine << endl;
//     cout << "Noi san xuat: " << NoiSanXuat << endl;
//     Vaccine::Xuat();
// }

// void Vaccine_Astrazeneca::setTenVaccine(string Tenvaccine)
// {
//     TenVaccine = Tenvaccine;
// }

// string Vaccine_Astrazeneca::getTenVaccine()
// {
//     return TenVaccine;
// }

// void Vaccine_Astrazeneca::setNoiSanXuat(string Noisanxuat)
// {
//     NoiSanXuat = Noisanxuat;
// }

// string Vaccine_Astrazeneca::getNoiSanXuat()
// {
//     return NoiSanXuat;
// }

// void Vaccine_Astrazeneca::ChatLuongAnToan()
// {
//     cout << "Vaccin ASTRAZENECA co hieu luc 90% !" << endl;
// }

// void Vaccine_Astrazeneca::Thoi_gian_tiem_hai_mui(int ngay)
// {
//     // Theo To chuc Y te the gioi (WHO) khuyen c�o, thoi gian 2 mui vaccine Astrazeneca tu 8 -> 12 tuan.
//     if (ngay <= 56 || ngay >= 84)
//     {
//         cout << "\nKhong nen tiem mui 2";
//     }
//     else
//     {
//         cout << "\nHay tiem mui 2";
//     }
// }

// //Vaccine_VeroCell
// class Vaccine_VeroCell : public Vaccine
// {
// private:
//     string TenVaccine, NoiSanXuat;

// public:
//     void Nhap();
//     void Xuat();
//     void ChatLuongAnToan();
//     void Thoi_gian_tiem_hai_mui(int ngay);
//     void setTenVaccine(string Tenvaccin);
//     string getTenVaccine();
//     void setNoiSanXuat(string Noisanxuat);
//     string getNoiSanXuat();
// };

// void Vaccine_VeroCell::Nhap()
// {
//     Vaccine::Nhap();
//     fflush(stdin);
//     cout << "\nNhap ten vaccine: ";
//     getline(cin, TenVaccine);
//     fflush(stdin);
//     cout << "\nNoi san xuat: ";
//     getline(cin, NoiSanXuat);
// }
// void Vaccine_VeroCell::Xuat()
// {
//     cout << "\n\t ***XUAT THONG TIN VACCINE***" << endl;
//     Vaccine::Xuat();
//     cout << "Ten Vaccine: " << TenVaccine << endl;
//     cout << "Noi san xuat: " << NoiSanXuat << endl;
// }

// void Vaccine_VeroCell::setTenVaccine(string Tenvaccine)
// {
//     TenVaccine = Tenvaccine;
// }

// string Vaccine_VeroCell::getTenVaccine()
// {
//     return TenVaccine;
// }

// void Vaccine_VeroCell::setNoiSanXuat(string Noisanxuat)
// {
//     NoiSanXuat = Noisanxuat;
// }

// string Vaccine_VeroCell::getNoiSanXuat()
// {
//     return NoiSanXuat;
// }

// void Vaccine_VeroCell::ChatLuongAnToan()
// {
//     cout << "Vaccin VEROCELL co hieu luc 79,34% !" << endl;
// }
// void Vaccine_VeroCell::Thoi_gian_tiem_hai_mui(int ngay)
// {
//     // Theo To chuc Y te the gioi (WHO) khuyen c�o, thoi gian 2 mui vaccine VeroCell n�y tu 3 -> 4 tuan.
//     if (ngay <= 21 || ngay >= 28)
//     {
//         cout << "\nKhong nen tiem mui 2";
//     }
//     else
//     {
//         cout << "\nHay tiem mui 2";
//     }
// }

int main()
{
    Student a;
    a.Nhap();
    a.Xuat();
    a.Tinhtrang();
    Teacher b;
    b.Nhap();
    b.Xuat();
    b.Tinhtrang();

    // Vaccine_Astrazeneca c;
    // cout << "\n\t Thong tin Vaccine:" << endl;
    // c.setTenVaccine("Astrazeneca");
    // cout << "\n Ten Vaccin ban se tiem la: " << c.getTenVaccine() << endl;
    // c.setNoiSanXuat("Anh");
    // cout << "\nNoi san xuat Vaccin la: " << c.getNoiSanXuat() << endl;
    // c.Nhap();
    // c.Xuat();
    // c.ChatLuongAnToan();
    // c.Thoi_gian_tiem_hai_mui(59);
}
