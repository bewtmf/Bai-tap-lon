#include <iostream>
#include <string>
#include <vector>
using namespace std;
void Menu(){
	vector<Person *> PE;
	while(true){
	system("cls");	
	cout <<"\n\n\t\t====== MENU ======";
	cout <<"\n1. Doi tuong la sinh vien";
	cout <<"\n2. Doi tuong la giang vien";
	cout <<"\n3. Xuat danh sach sinh vien va giang vien";
	cout <<"\n0. Ket thuc";
	cout <<"\n\n\t\t====== END ======";
	
	int luachon;
	cout <<"\nNhap lua chon: ";
	cin >> luachon;
	
	if (luachon == 0)
	{
	   break;
	} 
	else if (luachon == 1)
	{
            Person *p;
            int n;
            cout<<"Nhap so luong sinh vien: ";
            cin>>n;
            for(int i=0;i<n;i++){
                p=new Student;
                p->Nhap();
                PE.push_back(p);
                cout<<endl;
            }
	   system("pause");
	}
	else if (luachon == 2)
	{
	   {
            Person *p;
            int m;
            cout<<"Nhap so luong giang vien: ";
            cin>>m;
            for(int i=0;i<m;i++){
                p=new Teacher;
                p->Nhap();
                PE.push_back(p);
                cout<<endl;
            }
        }
    }
    else if(luachon==3){
            cout<<endl<<"******Danh sach giang vien******"<<endl;
            for(int i=0; i<PE.size();i++){
                PE.at(i)->Xuat();
                cout<<endl;
            }
        }
	    system("pause");
    }
}

