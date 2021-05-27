#include <iostream>
#include<string.h>
#include <fstream>
#define MAX 100 ;
using namespace std ;




struct QLBV 
{
    char ten[20] ;
    int age ;
    char gt[5];
    char mt[10] ;
    char from[20];
    char to[20] ;
    int ngay , thang , nam ;
    char loaive[10] ;
    int giave;
    char toatau[1];
    int soghe;

};


void nhap(QLBV &kh) {
    cout << " Nhap ten khach hang :  ";
    fflush(stdin);
    gets(kh.ten);
    cout << " Nhap tuoi : " ;
    cin >> kh.age ;
    cin.ignore();
    cout << " NHap gioi tinh : " ;
    gets(kh.gt) ;
}


void nhapN(QLBV a[], int n ) {
    cout << " ..................................................... "<< endl ;
    for (int i = 0; i < n ; i++)
    {
        cout << " Nhap khach hang thu  " << i+1 << endl ;
        nhap(a[i]);
    }
     cout << " ..................................................... "<< endl ;
}

void xuat(QLBV &kh) {
    cout << "\n|Ho Va Ten" << "\t\t" << "|Tuoi" << "\t\t" << "|Gioi Tinh " <<"\t" <<endl ;
    cout << "|" << kh.ten << "\t\t" << "|" << kh.age << "\t\t" << "|" << kh.gt  <<"\t\t\t";
}

void xuatN(QLBV a[] , int n) {
    cout << " ......................................................." << endl ;
    for (int  i = 0; i < n ; i++)
    {
        cout << " Xuat khach hang thu " << i+1 << endl ;
        xuat(a[i]);
    }
     cout << " ..................................................... "<< endl ;
}

void nhapVT(QLBV &vt) {
    cout << " Nguoi Dat Ve : " ;
    fflush(stdin);
    gets(vt.ten);
    cout << " Ma chuyen tau :  " ;
    gets(vt.mt);
    cout << " Nhap loai ve tau : " ;
    gets(vt.loaive);
    cout << " Nhap Vao Toa Tau : " ;
    gets(vt.toatau);
    cout << " So Ghe : " ;
    cin >>vt.soghe;
    cout << " Nhap gia ve : " ;
    cin  >> vt.giave;
}

void xuatVT(QLBV  &vt ) { 
    cout << "\n|Nguoi Dat Ve " << "\t" << "|Ma chuyen tau" << "\t" << "|Loai Ve Tau " << "\t" << "|Toa Tau " << "\t" << "|So Ghe" << "\t" << "|Gia ve" <<"\t" <<endl;
    cout << "|" << vt.ten << "\t\t" << "|" << vt.mt << "\t\t" << "|" << vt.loaive << "\t\t" << "|" << vt.toatau << "\t\t" << vt.soghe << "\t\t" <<vt.giave <<"\t\t\t";
}


void nhapVTN(QLBV a[], int q ) {
    cout << " ..................................................... "<< endl ;
    for (int  i = 0; i < q; i++)
    {
        cout << " Nhap ve thu " << i+1 << endl ;
        nhapVT(a[i]);
    }
    cout << " ..................................................... "<< endl ;
}

void xuatVTN(QLBV a[], int q ) {
    cout << " ..................................................... "<< endl ;
    for (int  i = 0; i < q; i++)
    {
        cout << " Xuat ve thu  " << i+1 << endl ;
        xuatVT(a[i]);
    }
    cout << " ..................................................... "<< endl ;
}

void nhapCT(QLBV &ct) {
    cout << " Ma Tau : " ;
    fflush(stdin);
    gets(ct.mt);
    cout << " From : "  ;
    gets(ct.from ) ;
    cout << " To   : "  ;
    gets(ct.to) ;
    cout << " Ngay : "   ;
    cin  >> ct.ngay ;
    cout << " Thang : "   ;
    cin  >> ct.thang ;
    cout << " Nam : "  ;
    cin  >> ct.nam ;
    
}

void nhapCTN(QLBV a[] , int k ) {
    cout << " ..................................................... "<< endl ;
    for (int  i = 0; i < k ; i++)
    {
        cout << " Nhap vao chuyen tau " << i+1 <<endl ;
        nhapCT(a[i]);
    }
    cout << " ..................................................... "<< endl ;
}

void xuatCT(QLBV &ct) {
    cout << "\n|Ma Tau " << "\t\t" << "|Di Tu" << "\t\t" << "|Den " << "\t\t" << "|Ngay " << "\t\t" << "|Thang" << "\t\t" << "|Nam" <<"\t" <<endl;
    cout << "|" << ct.mt << "\t\t" << "|" << ct.from << "\t\t" << "|" << ct.to << "\t\t" << "|" << ct.ngay << "\t\t" << ct.thang << "\t\t" <<ct.nam <<"\t\t\t";
}

void xuatCTN(QLBV a[] , int k) {
    cout << " ..................................................... "<< endl ;
    for (int  i = 0; i < k; i++)
    {
        cout << " Xuat chuyen tau thu " << i+1 <<endl;
        xuatCT(a[i]) ;
        
    }
    cout << " ..................................................... "<< endl ;
}

void filekh (QLBV a[], int n ) {
    ofstream file1 (" khachhang.txt ") ;
    for (int i = 0; i < n ; i++)
    {
        file1<<a[i].ten<<a[i].age<<a[i].gt ;
    }
    file1.close();
}

void filect (QLBV a[], int k ) {
    ofstream file2 (" chuyentau.txt") ;
    for (int i = 0; i < k; i++)
    {
        file2<<a[i].mt<<a[i].from<<a[i].to<<a[i].ngay<<a[i].thang<<a[i].nam;
    }
    file2.close();
}

void filevt (QLBV a[], int q ) {
    ofstream file3 (" vetau.txt") ;
    for (int i = 0; i < q; i++)
    {
        file3<<a[i].ten<<a[i].mt<<a[i].loaive<<a[i].toatau<<a[i].soghe<<a[i].giave;
    }
    file3.close();
}




void menu() {
    cout << " ********************* QUAN LY BAN VE TAU HOA ****************************" <<endl;
    cout << " **************** 1 . Nhap va xuat ra  du lieu khach hang (Admin) : ******************************" <<endl;
    cout << " **************** 2.  Nhap xuat thong tin  cac chuyen tau (Admin): ******************************" <<endl;
    cout << " **************** 3 . Dat va In ra cac ve tau  : ******************************" <<endl;
}


int main() {
    int number=123456;
	int pass;
    int lc , n , k , q;
    ofstream file1 (" khachhang.txt ") ;
    ofstream file2 (" chuyentau.txt ") ;
    ofstream file3 (" vetau.txt ") ;
    QLBV a[n];
    char confirm ;
    menu();
    do{

    cout<<"\nNhap lua chon cua ban (1-3) : ";
    cin>>lc;
    
    switch(lc){
    case 1:
        cout  << " Nhap password  :" ;
        cin >> pass ;
        if (pass==number){
            cout << " Chuc mung ban da dang nhap thanh cong !!!! " << endl ;
            cout << " =====================================" <<endl;
            cout << " Nhap so hanh khach : " ;
            cin >>n ;
            cin.ignore();
            nhapN(a,n);
            fflush(stdin);
            xuatN(a,n);
            filekh(a,n);
        }else {
            cout << " Sai pass !!!  " << endl ;
            system("clear");
            main();
        }
        break;
        case 2:
            cout  << " Nhap password  :" ;
            cin >> pass ;
            if (pass==number) {
                cout << " Chuc mung ban da dang nhap thanh cong !!!! " << endl ;
                cout << " =====================================" <<endl;
                cout << " Nhap so chuyen tau : " ;
                cin >>k ; cin.ignore();
                nhapCTN(a,k);
                cin.ignore();
                filect(a,k);
                xuatCTN(a,k);
            }else{
                cout << " Sai pass " ;
                system("Clear") ;
                main();
            }
            
            break ;
                case 3:
                    cout << " Nhap so ve can dat : " ;
                    cin >> q;
                    cin.ignore();
                    nhapVTN(a,q);
                    cin.ignore();
                    filevt(a,q);
                    xuatVTN(a,q);
                    cout << " Ban Da Dat Ve Thanh Cong :" <<endl;
                    default:cout<<"Khong hop le";
    }
    cout<<"Nhan y hoac Y de tiep tuc: ";
    cin>>confirm;
    system("clear") ;
    menu();
    }while(confirm=='y'||confirm=='Y');

    return 0;
  } 