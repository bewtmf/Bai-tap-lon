#include <iostream>
#include "Quanly.cpp"
#include <conio.h>
using namespace std;
void Choose()
{
	TextColor(6);
	cout << endl;
	cout << "\t\t||----------------------------------------------------------------------||" << endl;
	cout << "\t\t||		1. Them sinh vien vao danh sach         		||" << endl;
	cout << "\t\t||----------------------------------------------------------------------||" << endl;
	cout << "\t\t||		2. Them giang vien vao danh sach         		||" << endl;
	cout << "\t\t||----------------------------------------------------------------------||" << endl;
	cout << "\t\t||		3. Tim doi tuong (ID, Name)          			||" << endl;
	cout << "\t\t||----------------------------------------------------------------------||" << endl;
	cout << "\t\t||		4. Xoa doi tuong (ID)         				||" << endl;
	cout << "\t\t||----------------------------------------------------------------------||" << endl;
	cout << "\t\t||		5. Sap xep danh sach (ID, Name)        			||" << endl;
	cout << "\t\t||----------------------------------------------------------------------||" << endl;
	cout << "\t\t||		6. Xuat danh sach          				||" << endl;
	cout << "\t\t||----------------------------------------------------------------------||" << endl;
	cout << "\t\t||		7. Thoat chuong trinh         				||" << endl;
	cout << "\t\t||----------------------------------------------------------------------||" << endl;
	dfColor();
}

void Menu(char choose)
{
	printSpace(50);
	ChuongTrinh();
	TextColor(10);
	cout << endl
		 << "Nhan phim bat ky de bat dau chuong trinh.";
	getch();
	system("cls");
	dfColor();
	QLStudent sv;
	QLTeacher gv;
	do
	{
		Choose();
		cout << "\nNhap lua chon: ";
		cin >> choose;
		TextColor(10);
		cout << "Ban chon: " << choose << endl;
		dfColor();
		switch (choose)
		{
		case '1': // Them sinh vien
			system("cls");
			TextColor(3);
			cout << "---------------------------------------------THEM SINH VIEN------------------------------------------------------" << endl;
			dfColor();
			int n;
			cout << "Nhap so luong sinh vien: ";
			cin >> n;
			sv.NhapDS(n);
			TextColor(10);
			cout << "Them sinh vien vao danh sach thanh cong!" << endl;
			dfColor();
			break;
		case '2': // Them giang vien
			system("cls");
			TextColor(3);
			cout << "---------------------------------------------THEM GIANG VIEN------------------------------------------------------" << endl;
			dfColor();
			int m;
			cout << "Nhap so luong giang vien: ";
			cin >> m;
			gv.NhapDS(m);
			TextColor(10);
			cout << "Them giang vien vao danh sach thanh cong!" << endl;
			dfColor();
			break;
		case '3': // Tim doi tuong.
			system("cls");
			TextColor(3);
			cout << "---------------------------------------------TIM DOI TUONG------------------------------------------------------" << endl;
			dfColor();
			char choose3;
			do
			{
				TextColor(3);
				cout << "1. Tim kiem sinh vien theo ID." << endl;
				cout << "2. Tim kiem sinh vien theo ten." << endl;
				cout << "3. Tim kiem giang vien theo ID." << endl;
				cout << "4. Tim kiem giang vien theo ten." << endl;
				cout << "5. Quay lai bang chon." << endl;
				dfColor();
				cout << "Nhap lua chon: ";
				cin >> choose3;
				TextColor(10);
				cout << "Ban chon: " << choose3 << endl;
				dfColor();
				switch (choose3)
				{
				case '1':
					sv.FindByID();
					break;
				case '2':
					sv.FindByName();
					break;
				case '3':
					gv.FindByID();
					break;
				case '4':
					gv.FindByName();
					break;
				case '5':
					break;
				default:
					TextColor(4);
					cout << "Khong hop le!" << endl;
					dfColor();
				}
			} while (choose3 != '5');
			break;
		case '4': // Xoa - case 4;
			char choose4;
			system("cls");
			TextColor(3);
			cout << "---------------------------------------------XOA DOI TUONG------------------------------------------------------" << endl;
			dfColor();
			do
			{
				TextColor(3);
				cout << "1. Xoa sinh vien theo ID." << endl;
				cout << "2. Xoa giang vien theo ID." << endl;
				cout << "3. Quay ve bang chon." << endl;
				dfColor();
				cout << "Nhap lua chon: ";
				cin >> choose4;
				TextColor(10);
				cout << "Ban chon: " << choose4 << endl;
				dfColor();
				switch (choose4)
				{
				case '1':
					sv.DeleteByID();
					break;
				case '2':
					gv.DeleteByID();
					break;
				case '3':
					break;
				default:
					TextColor(4);
					cout << "Khong hop le!" << endl;
					dfColor();
				}
			} while (choose4 != '3');
			break;

		case '5': // Sap xep.
			char choose5;
			system("cls");
			TextColor(3);
			cout << "---------------------------------------------SAP XEP DANH SACH------------------------------------------------------" << endl;
			dfColor();
			do
			{
				TextColor(3);
				cout << "1. Sap xep sinh vien theo ID." << endl;
				cout << "2. Sap xep sinh vien theo ten (A-Z)." << endl;
				cout << "3. Sap xep giang vien theo ID." << endl;
				cout << "4. Sap xep giang vien theo ten (A-Z)." << endl;
				cout << "5. Quay lai bang chon." << endl;
				dfColor();
				cout << "Nhap lua chon: ";
				cin >> choose5;
				TextColor(10);
				cout << "Ban chon: " << choose5 << "!" << endl;
				dfColor();
				switch (choose5)
				{
				case '1':
					sv.SortByID();
					break;
				case '2':
					sv.SortByName();
					break;
				case '3':
					gv.SortByID();
					break;
				case '4':
					gv.SortByName();
					break;
				case '5':
					break;
				default:
					TextColor(4);
					cout << "Khong hop le!" << endl;
					dfColor();
				}
			} while (choose5 != '5');
			break;

		case '6': // In danh sach.
			char choose6;
			system("cls");
			TextColor(3);
			cout << "--------------------------------------------------IN DANH SACH------------------------------------------------------" << endl;
			dfColor();
			do
			{
				TextColor(3);
				cout << "1. Danh sach sinh vien." << endl;
				cout << "2. Danh sach giang vien." << endl;
				cout << "3. Danh sach cua ca hai doi tuong." << endl;
				cout << "4. Quay lai bang chon." << endl;
				dfColor();
				cout << "Nhap lua chon: ";
				cin >> choose6;
				TextColor(10);
				cout << "Ban chon " << choose6 << "!" << endl;
				dfColor();
				switch (choose6)
				{
				case '1':
					TextColor(10);
					cout << "Danh sach sinh vien:" << endl;
					dfColor();
					sv.XuatDS();
					break;
				case '2':
					TextColor(10);
					cout << "Danh sach giang vien:" << endl;
					dfColor();
					gv.XuatDS();
					break;
				case '3':
					TextColor(10);
					cout << "Danh sach sinh vien:" << endl;
					dfColor();
					sv.XuatDS();
					TextColor(10);
					cout << "Danh sach giang vien:" << endl;
					dfColor();
					gv.XuatDS();
					break;
				case '4':
					break;
				default:
					TextColor(4);
					cout << "Khong hop le!" << endl;
					dfColor();
				}
			} while (choose6 != '4');
			break;
		case '7': // Quit
			TextColor(10);
			cout << "\nCam on da su dung chuong trinh!" << endl;
			dfColor();
			cin.get();
			cin.get();
			break;
		default:
			TextColor(4);
			cout << "Khong hop le!" << endl;
			dfColor();
		}
	} while (choose != '7');
}
