#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h> //Thu vien nay dung cho ham` Sleep (milisecond) de tao delay trong ham` thoatchuongtrinh

// Chuong trinh mo phong may' ban' hang` tap hoa' tu dong, Programmed by Hoang` :P

// Tao cau truc cho cac loai mat hang`
struct MatHang
{
    char ten_mon[50]; // Co the dung char *ten_mon
    float gia_tien;
    int so_luong;
};

/* Khoi tao gia tri cho cac loai do` an va` luu gia tri vao cac mang? tuong ung' co kieu struct MatHang
*Chu y 1: Day la mang? ngoai`(Cap phat bo nho' tinh~) vi` duoc khai bao ben ngoai ham`, Su dung mang ngoai (hoac con tro)
de cap nhat du lieu tien loi hon, tuy nhien phai can than de tranh thao tac loi~ gay bien doi du~ lieu
*Chu y 2: Quy uoc' phan tu thu 0: Array[0] = khong co san pham! */
MatHang bimbim[] =
    {
        {"Khong tim` thay ten san pham !", 0, 0},
        {"Banh bong lan", 20, 12},
        {"Banh phong tom", 10, 10},
        {"Banh Oshi tom", 5, 40},
        {"Banh trang' tron", 15, 20},
        {"Banh quy AFC", 20, 30},
        {"Banh KingDo", 30, 15},
        {"Banh Chocopie", 30, 20},
        {"Banh quy Oreo", 35, 30},
        {"Banh Snack bi' ngo", 7, 40}};

MatHang keo[] =
    {
        {"Khong tim` thay ten san pham !", 0, 0},
        {"Keo bac ha`", 5, 30},
        {"Keo socola", 8, 25},
        {"Keo Singum Coolair", 5, 40},
        {"Keo keo'", 4, 50},
        {"Keo Bibica", 10, 30},
        {"Keo Mentos", 15, 25},
        {"Keo B&B", 35, 30}};

MatHang traicay[] =
    {
        {"Khong tim` thay ten san pham !", 0, 0},
        {"Trai chuoi", 4, 20},
        {"Trai tao", 10, 12},
        {"Trai Sau rieng", 50, 10},
        {"Trai Quyt'", 5, 30},
        {"Trai chanh", 2, 50},
        {"Trai Du du", 10, 15},
        {"Trai Lekima", 20, 20}};

// Khoi tao gia tri cho cac loai do uong' (MatHang)
MatHang nuocngot[] =
    {
        {"Khong tim` thay ten san pham !", 0, 0},
        {"Nuoc Pepsi", 7, 20},
        {"Nuoc Coca Cola", 8, 25},
        {"Nuoc Sprite", 7, 30},
        {"Nuoc 7Up", 7, 35},
        {"Nuoc Mirinda", 8, 30},
        {"Nuoc Sting dau", 7, 50},
        {"Nuoc Sting vang`", 6, 40}};
MatHang nuocsuoi[] =
    {
        {"Khong tim` thay ten san pham !", 0, 0},
        {"Nuoc suoi Aquafina", 7, 30},
        {"Nuoc suoi Lavie", 6, 25},
        {"Nuoc suoi My Hao", 5, 50},
        {"Nuoc suoi Ve Nguon", 5, 40}};
MatHang nuoctraicay[] =
    {
        {"Khong tim` thay ten san pham !", 0, 0},
        {"Nuoc dua`", 10, 15},
        {"Nuoc cam", 6, 30},
        {"Nuoc chanh", 7, 40},
        {"Nuoc chanh muoi'", 8, 30},
        {"Nuoc dua hau'", 7, 25}};

// Khoi tao gia tri cho cac loai hang` tieu dung`
MatHang daugoi[] =
    {
        {"Khong tim` thay ten san pham !", 0, 0},
        {"Dau goi Sunsilk", 2, 50},
        {"Dau goi Clear", 3, 40},
        {"Dau goi Xmen", 4, 35},
        {"Dau goi Romano", 3, 40},
        {"Dau goi Dove", 5, 45},
        {"Dau goi Pantene", 3, 40},
        {"Dau goi Rejoice", 4, 50},
        {"Dau goi Thai Duong", 6, 45}};
MatHang nuocgiat[] =
    {
        {"Khong tim` thay ten san pham !", 0, 0},
        {"Nuoc giat Omo", 15, 25},
        {"Nuoc giat Tide", 9, 30},
        {"Nuoc giat Ariel", 14, 30}};
MatHang dauan[] =
    {
        {"Khong tim` thay ten san pham !", 0, 0},
        {"Dau an Neptune 111", 25, 20},
        {"Dau an Meizan", 20, 30},
        {"Dau an Simply", 30, 25},
        {"Dau an Olive", 40, 30},
        {"Dau an Tuong An", 20, 40},
        {"Dau an Cai Lan", 27, 35}};

// Khoi tao gia tri cho cac loai san pham tren 18 tuoi
MatHang douongcocon[] =
    {
        {"Khong tim` thay ten san pham !", 0, 0},
        {"Bia Sai Gon", 10, 20},
        {"Bia Ha Noi", 10, 25},
        {"Bia 333", 12, 30},
        {"Bia Heniken", 15, 45},
        {"Bia Su tu", 12, 30},
        {"Ruou Vodka", 500, 10},
        {"Ruou Vang do", 200, 15},
        {"Ruou Tequila", 450, 14},
        {"Ruou Sake", 150, 25}};

MatHang thuocla[] =
    {
        {"Khong tim` thay ten san pham !", 0, 0},
        {"Thuoc Hero", 20, 35},
        {"Thuoc Jet", 25, 30},
        {"Thuoc la Sai Gon", 18, 30},
        {"Thuoc la 555", 15, 50},
        {"Thuoc la Shisa", 50, 40}};
MatHang baocaosu[] =
    {
        {"Khong tim` thay ten san pham !", 0, 0},
        {"Bcs Durex", 50, 40},
        {"Bcs Ok", 30, 50},
        {"Bcs Rocket", 40, 35}};

// Bat dau tao cac Ham`(Function): Chuc nang cho chuong trinh (chia theo tung block cua comment)

// Block nay` co chuc nang hien thi Menu va lay du lieu lua chon
void NhapLuaChon(int *luachon_menu)
{
    printf("\n Moi` quy khach nhap vao lua chon tuong ung: ");
    scanf("%d", luachon_menu);
}

void MenuMatHang(MatHang a[], int sophantu) // Hien menu cac' san pham trong mat hang`
{
    printf("\nLua chon| Ten san pham \t\t  | Gia' tien`\t\t| So luong con` lai\n");
    for (int i = 1; i < sophantu; i++)
        printf("\n  [%d] \t %-25s %-5.3f vnd\t\t\t %-3d\n", i, a[i].ten_mon, (float)a[i].gia_tien, a[i].so_luong);
}

void LuaChon_SoLuongMua(int *luachon_sanpham, int *soluongmua)
{
    printf("\n Moi` quy khach nhap vao lua chon va` so luong san pham muon mua:\n");
    printf("\nLua chon: ");
    scanf("%d", luachon_sanpham);
    printf("\nSo luong muon' mua: ");
    scanf("%d", soluongmua);
}

void ThoatChuongTrinh()
{
    int thoat;
    system("cls");
    printf("\nQuy khach muon thoat chuong trinh hay muon tiep tuc mua hang ?\n\
    \n[1]: Thoat chuong trinh  \t[2] Tiep tuc mua hang\n");
    scanf("%d", &thoat);
    while (thoat != 1 && thoat != 2)
    {
        system("cls");
        printf("\nVui long` nhap lai lua chon !\n");
        ThoatChuongTrinh();
    }
    if (thoat == 1)
    {
        system("cls");
        printf("\n\t\t\t\t\t\tXin cam on quy khach !\n\n");
        Sleep(300);
        system("cls");
        printf("\n\t\t\t\t  Hen gap lai quy khach vao` lan` sau...\n\n");

        exit(0);
    }
}

// Block nay` co chuc nang xu ly du~ lieu va hien thong tin thanh toan'

/*Ham` KiemTraMuaSP co su dung con tro *soluongmua de lien ket' voi con tro *soluong mua cua ham` LuaChon_SoLuongMua
 Vi` trong ham` nay` co' goi lai ham` LuaChon_SoLuongMua ma` tham so truyen vao cho ham` LuaChon_SoLuongMua can phai la` [dia chi cua bien' soluongmua]
 chu khong phai la [dia chi cua tham so'] cua ham` KiemTraMuaSP
 Muc dich la luu gia' tri cua bien soluongmua sau khi kiem tra so luong khach muon mua co < so luong san pham */
void KiemTraMuaSP(int vitri, int *luachon_sanpham, int *soluongmua)
{
    switch (vitri)
    {
    case 1:
        while (*luachon_sanpham < 1 || *luachon_sanpham > (sizeof(bimbim) / sizeof(MatHang)) - 1) // Lua chon != voi phan tu tu` 1->n-1
        {
            system("cls");
            MenuMatHang(bimbim, sizeof(bimbim) / sizeof(MatHang));
            printf("\nKhong tim thay thong tin san pham quy khach da lua chon\n\
        \nQuy khach vui long dam bao da nhap dung' san pham can` mua!\n");
            LuaChon_SoLuongMua(luachon_sanpham, soluongmua);
            KiemTraMuaSP(vitri, luachon_sanpham, soluongmua);
        }
        while (*soluongmua > bimbim[*luachon_sanpham].so_luong)
        {
            system("cls");
            MenuMatHang(bimbim, sizeof(bimbim) / sizeof(MatHang));
            printf("\n So luong san pham khong phu` hop!\n\
            \nVui long lua chon lai va` nhap so luong phu` hop voi so luong san pham con` lai!\n");
            LuaChon_SoLuongMua(luachon_sanpham, soluongmua);
            KiemTraMuaSP(vitri, luachon_sanpham, soluongmua);
        }
        break;
    case 2:
        while (*luachon_sanpham < 1 || *luachon_sanpham > (sizeof(keo) / sizeof(MatHang)) - 1) // Lua chon != voi phan tu tu` 1->n-1
        {
            system("cls");
            MenuMatHang(keo, sizeof(keo) / sizeof(MatHang));
            printf("\nKhong tim thay thong tin san pham quy khach da lua chon\n\
        \nQuy khach vui long dam bao da nhap dung' san pham can` mua!\n");
            LuaChon_SoLuongMua(luachon_sanpham, soluongmua);
            KiemTraMuaSP(vitri, luachon_sanpham, soluongmua);
        }
        while (*soluongmua > keo[*luachon_sanpham].so_luong)
        {
            system("cls");
            MenuMatHang(keo, sizeof(keo) / sizeof(MatHang));
            printf("\n So luong san pham khong phu` hop!\n\
            \nVui long lua chon lai va` nhap so luong phu` hop voi so luong san pham con` lai!\n");
            LuaChon_SoLuongMua(luachon_sanpham, soluongmua);
            KiemTraMuaSP(vitri, luachon_sanpham, soluongmua);
        }
        break;
    case 3:
        while (*luachon_sanpham < 1 || *luachon_sanpham > (sizeof(traicay) / sizeof(MatHang)) - 1) // Lua chon != voi phan tu tu` 1->n-1
        {
            system("cls");
            MenuMatHang(traicay, sizeof(traicay) / sizeof(MatHang));
            printf("\nKhong tim thay thong tin san pham quy khach da lua chon\n\
        \nQuy khach vui long dam bao da nhap dung' san pham can` mua!\n");
            LuaChon_SoLuongMua(luachon_sanpham, soluongmua);
            KiemTraMuaSP(vitri, luachon_sanpham, soluongmua);
        }
        while (*soluongmua > traicay[*luachon_sanpham].so_luong)
        {
            system("cls");
            MenuMatHang(traicay, sizeof(traicay) / sizeof(MatHang));
            printf("\n So luong san pham khong phu` hop!\n\
            \nVui long lua chon lai va` nhap so luong phu` hop voi so luong san pham con` lai!\n");
            LuaChon_SoLuongMua(luachon_sanpham, soluongmua);
            KiemTraMuaSP(vitri, luachon_sanpham, soluongmua);
        }
        break;
    case 4:
        while (*luachon_sanpham < 1 || *luachon_sanpham > (sizeof(nuocngot) / sizeof(MatHang)) - 1) // Lua chon != voi phan tu tu` 1->n-1
        {
            system("cls");
            MenuMatHang(nuocngot, sizeof(nuocngot) / sizeof(MatHang));
            printf("\nKhong tim thay thong tin san pham quy khach da lua chon\n\
        \nQuy khach vui long dam bao da nhap dung' san pham can` mua!\n");
            LuaChon_SoLuongMua(luachon_sanpham, soluongmua);
            KiemTraMuaSP(vitri, luachon_sanpham, soluongmua);
        }
        while (*soluongmua > nuocngot[*luachon_sanpham].so_luong)
        {
            system("cls");
            MenuMatHang(nuocngot, sizeof(nuocngot) / sizeof(MatHang));
            printf("\n So luong san pham khong phu` hop!\n\
            \nVui long lua chon lai va` nhap so luong phu` hop voi so luong san pham con` lai!\n");
            LuaChon_SoLuongMua(luachon_sanpham, soluongmua);
            KiemTraMuaSP(vitri, luachon_sanpham, soluongmua);
        }
        break;
    case 5:
        while (*luachon_sanpham < 1 || *luachon_sanpham > (sizeof(nuocsuoi) / sizeof(MatHang)) - 1) // Lua chon != voi phan tu tu` 1->n-1
        {
            system("cls");
            MenuMatHang(nuocsuoi, sizeof(nuocsuoi) / sizeof(MatHang));
            printf("\nKhong tim thay thong tin san pham quy khach da lua chon\n\
        \nQuy khach vui long dam bao da nhap dung' san pham can` mua!\n");
            LuaChon_SoLuongMua(luachon_sanpham, soluongmua);
            KiemTraMuaSP(vitri, luachon_sanpham, soluongmua);
        }
        while (*soluongmua > nuocsuoi[*luachon_sanpham].so_luong)
        {
            system("cls");
            MenuMatHang(nuocsuoi, sizeof(nuocsuoi) / sizeof(MatHang));
            printf("\n So luong san pham khong phu` hop!\n\
            \nVui long lua chon lai va` nhap so luong phu` hop voi so luong san pham con` lai!\n");
            LuaChon_SoLuongMua(luachon_sanpham, soluongmua);
            KiemTraMuaSP(vitri, luachon_sanpham, soluongmua);
        }
        break;
    case 6:
        while (*luachon_sanpham < 1 || *luachon_sanpham > (sizeof(nuoctraicay) / sizeof(MatHang)) - 1) // Lua chon != voi phan tu tu` 1->n-1
        {
            system("cls");
            MenuMatHang(nuoctraicay, sizeof(nuoctraicay) / sizeof(MatHang));
            printf("\nKhong tim thay thong tin san pham quy khach da lua chon\n\
        \nQuy khach vui long dam bao da nhap dung' san pham can` mua!\n");
            LuaChon_SoLuongMua(luachon_sanpham, soluongmua);
            KiemTraMuaSP(vitri, luachon_sanpham, soluongmua);
        }
        while (*soluongmua > nuoctraicay[*luachon_sanpham].so_luong)
        {
            system("cls");
            MenuMatHang(nuoctraicay, sizeof(nuoctraicay) / sizeof(MatHang));
            printf("\n So luong san pham khong phu` hop!\n\
            \nVui long lua chon lai va` nhap so luong phu` hop voi so luong san pham con` lai!\n");
            LuaChon_SoLuongMua(luachon_sanpham, soluongmua);
            KiemTraMuaSP(vitri, luachon_sanpham, soluongmua);
        }
        break;
    case 7:
        while (*luachon_sanpham < 1 || *luachon_sanpham > (sizeof(daugoi) / sizeof(MatHang)) - 1) // Lua chon != voi phan tu tu` 1->n-1
        {
            system("cls");
            MenuMatHang(daugoi, sizeof(daugoi) / sizeof(MatHang));
            printf("\nKhong tim thay thong tin san pham quy khach da lua chon\n\
        \nQuy khach vui long dam bao da nhap dung' san pham can` mua!\n");
            LuaChon_SoLuongMua(luachon_sanpham, soluongmua);
            KiemTraMuaSP(vitri, luachon_sanpham, soluongmua);
        }
        while (*soluongmua > daugoi[*luachon_sanpham].so_luong)
        {
            system("cls");
            MenuMatHang(daugoi, sizeof(daugoi) / sizeof(MatHang));
            printf("\n So luong san pham khong phu` hop!\n\
            \nVui long lua chon lai va` nhap so luong phu` hop voi so luong san pham con` lai!\n");
            LuaChon_SoLuongMua(luachon_sanpham, soluongmua);
            KiemTraMuaSP(vitri, luachon_sanpham, soluongmua);
        }
        break;
    case 8:
        while (*luachon_sanpham < 1 || *luachon_sanpham > (sizeof(nuocgiat) / sizeof(MatHang)) - 1) // Lua chon != voi phan tu tu` 1->n-1
        {
            system("cls");
            MenuMatHang(nuocgiat, sizeof(nuocgiat) / sizeof(MatHang));
            printf("\nKhong tim thay thong tin san pham quy khach da lua chon\n\
        \nQuy khach vui long dam bao da nhap dung' san pham can` mua!\n");
            LuaChon_SoLuongMua(luachon_sanpham, soluongmua);
            KiemTraMuaSP(vitri, luachon_sanpham, soluongmua);
        }
        while (*soluongmua > nuocgiat[*luachon_sanpham].so_luong)
        {
            system("cls");
            MenuMatHang(nuocgiat, sizeof(nuocgiat) / sizeof(MatHang));
            printf("\n So luong san pham khong phu` hop!\n\
            \nVui long lua chon lai va` nhap so luong phu` hop voi so luong san pham con` lai!\n");
            LuaChon_SoLuongMua(luachon_sanpham, soluongmua);
            KiemTraMuaSP(vitri, luachon_sanpham, soluongmua);
        }
        break;
    case 9:
        while (*luachon_sanpham < 1 || *luachon_sanpham > (sizeof(dauan) / sizeof(MatHang)) - 1) // Lua chon != voi phan tu tu` 1->n-1
        {
            system("cls");
            MenuMatHang(dauan, sizeof(dauan) / sizeof(MatHang));
            printf("\nKhong tim thay thong tin san pham quy khach da lua chon\n\
        \nQuy khach vui long dam bao da nhap dung' san pham can` mua!\n");
            LuaChon_SoLuongMua(luachon_sanpham, soluongmua);
            KiemTraMuaSP(vitri, luachon_sanpham, soluongmua);
        }
        while (*soluongmua > dauan[*luachon_sanpham].so_luong)
        {
            system("cls");
            MenuMatHang(dauan, sizeof(dauan) / sizeof(MatHang));
            printf("\n So luong san pham khong phu` hop!\n\
            \nVui long lua chon lai va` nhap so luong phu` hop voi so luong san pham con` lai!\n");
            LuaChon_SoLuongMua(luachon_sanpham, soluongmua);
            KiemTraMuaSP(vitri, luachon_sanpham, soluongmua);
        }
        break;
    case 10:
        while (*luachon_sanpham < 1 || *luachon_sanpham > (sizeof(douongcocon) / sizeof(MatHang)) - 1) // Lua chon != voi phan tu tu` 1->n-1
        {
            system("cls");
            MenuMatHang(douongcocon, sizeof(douongcocon) / sizeof(MatHang));
            printf("\nKhong tim thay thong tin san pham quy khach da lua chon\n\
        \nQuy khach vui long dam bao da nhap dung' san pham can` mua!\n");
            LuaChon_SoLuongMua(luachon_sanpham, soluongmua);
            KiemTraMuaSP(vitri, luachon_sanpham, soluongmua);
        }
        while (*soluongmua > douongcocon[*luachon_sanpham].so_luong)
        {
            system("cls");
            MenuMatHang(douongcocon, sizeof(douongcocon) / sizeof(MatHang));
            printf("\n So luong san pham khong phu` hop!\n\
            \nVui long lua chon lai va` nhap so luong phu` hop voi so luong san pham con` lai!\n");
            LuaChon_SoLuongMua(luachon_sanpham, soluongmua);
            KiemTraMuaSP(vitri, luachon_sanpham, soluongmua);
        }
        break;
    case 11:
        while (*luachon_sanpham < 1 || *luachon_sanpham > (sizeof(thuocla) / sizeof(MatHang)) - 1) // Lua chon != voi phan tu tu` 1->n-1
        {
            system("cls");
            MenuMatHang(thuocla, sizeof(thuocla) / sizeof(MatHang));
            printf("\nKhong tim thay thong tin san pham quy khach da lua chon\n\
        \nQuy khach vui long dam bao da nhap dung' san pham can` mua!\n");
            LuaChon_SoLuongMua(luachon_sanpham, soluongmua);
            KiemTraMuaSP(vitri, luachon_sanpham, soluongmua);
        }
        while (*soluongmua > thuocla[*luachon_sanpham].so_luong)
        {
            system("cls");
            MenuMatHang(thuocla, sizeof(thuocla) / sizeof(MatHang));
            printf("\n So luong san pham khong phu` hop!\n\
            \nVui long lua chon lai va` nhap so luong phu` hop voi so luong san pham con` lai!\n\
            \nVui long lua chon lai va` nhap so luong phu` hop voi so luong san pham con` lai!");
            LuaChon_SoLuongMua(luachon_sanpham, soluongmua);
            KiemTraMuaSP(vitri, luachon_sanpham, soluongmua);
        }
        break;
    case 12:
        while (*luachon_sanpham < 1 || *luachon_sanpham > (sizeof(baocaosu) / sizeof(MatHang)) - 1) // Lua chon != voi phan tu tu` 1->n-1
        {
            system("cls");
            MenuMatHang(baocaosu, sizeof(baocaosu) / sizeof(MatHang));
            printf("\nKhong tim thay thong tin san pham quy khach da lua chon\n\
        \nQuy khach vui long dam bao da nhap dung' san pham can` mua!\n");
            LuaChon_SoLuongMua(luachon_sanpham, soluongmua);
            KiemTraMuaSP(vitri, luachon_sanpham, soluongmua);
        }
        while (*soluongmua > baocaosu[*luachon_sanpham].so_luong)
        {
            system("cls");
            MenuMatHang(baocaosu, sizeof(baocaosu) / sizeof(MatHang));
            printf("\n So luong san pham khong phu` hop!\n\
            \nVui long lua chon lai va` nhap so luong phu` hop voi so luong san pham con` lai!\n");
            LuaChon_SoLuongMua(luachon_sanpham, soluongmua);
            KiemTraMuaSP(vitri, luachon_sanpham, soluongmua);
        }
        break;
    }
}

float tienthanhtoan; // bien nay se su dung trong nhieu ham` va` khoi' lenh nen se~ khai bao ngoai` thay vi truyen` tham so'

void ThongTinThanhToan(int vitri, int luachon_sanpham, int soluongmua) // Kiem tra so luong san pham mua va hien thong tin thanh toan
{
    switch (vitri)
    {
    case 1:

        system("cls");
        printf("\nThong tin thanh toan':\n\
        \nTen san pham \t\t  | Gia' tien`\t\t| So luong mua\t\t| Tong so tien thanh toan\n");
        tienthanhtoan = bimbim[luachon_sanpham].gia_tien * soluongmua;
        printf("\n%-25s %-5.3f vnd\t\t\t %-3d \t\t  %-7.3f vnd\n", bimbim[luachon_sanpham].ten_mon, (float)bimbim[luachon_sanpham].gia_tien,
               soluongmua, tienthanhtoan);
        break;
    case 2:

        system("cls");
        printf("\nThong tin thanh toan':\n\
        \nTen san pham \t\t  | Gia' tien`\t\t| So luong mua\t\t| Tong so tien thanh toan\n");
        tienthanhtoan = keo[luachon_sanpham].gia_tien * soluongmua;
        printf("\n%-25s %-5.3f vnd\t\t\t %-3d \t\t  %-7.3f vnd\n", keo[luachon_sanpham].ten_mon, (float)keo[luachon_sanpham].gia_tien,
               soluongmua, tienthanhtoan);
        break;
    case 3:

        system("cls");
        printf("\nThong tin thanh toan':\n\
        \nTen san pham \t\t  | Gia' tien`\t\t| So luong mua\t\t| Tong so tien thanh toan\n");
        tienthanhtoan = traicay[luachon_sanpham].gia_tien * soluongmua;
        printf("\n%-25s %-5.3f vnd\t\t\t %-3d \t\t  %-7.3f vnd\n", traicay[luachon_sanpham].ten_mon, (float)traicay[luachon_sanpham].gia_tien,
               soluongmua, tienthanhtoan);
        break;
    case 4:

        system("cls");
        printf("\nThong tin thanh toan':\n\
        \nTen san pham \t\t  | Gia' tien`\t\t| So luong mua\t\t| Tong so tien thanh toan\n");
        tienthanhtoan = nuocngot[luachon_sanpham].gia_tien * soluongmua;
        printf("\n%-25s %-5.3f vnd\t\t\t %-3d \t\t  %-7.3f vnd\n", nuocngot[luachon_sanpham].ten_mon, (float)nuocngot[luachon_sanpham].gia_tien,
               soluongmua, tienthanhtoan);
        break;
    case 5:

        system("cls");
        printf("\nThong tin thanh toan':\n\
        \nTen san pham \t\t  | Gia' tien`\t\t| So luong mua\t\t| Tong so tien thanh toan\n");
        tienthanhtoan = nuocsuoi[luachon_sanpham].gia_tien * soluongmua;
        printf("\n%-25s %-5.3f vnd\t\t\t %-3d \t\t  %-7.3f vnd\n", nuocsuoi[luachon_sanpham].ten_mon, (float)nuocsuoi[luachon_sanpham].gia_tien,
               soluongmua, tienthanhtoan);
        break;
    case 6:

        system("cls");
        printf("\nThong tin thanh toan':\n\
        \nTen san pham \t\t  | Gia' tien`\t\t| So luong mua\t\t| Tong so tien thanh toan\n");
        tienthanhtoan = nuoctraicay[luachon_sanpham].gia_tien * soluongmua;
        printf("\n%-25s %-5.3f vnd\t\t\t %-3d \t\t  %-7.3f vnd\n", nuoctraicay[luachon_sanpham].ten_mon, (float)nuoctraicay[luachon_sanpham].gia_tien,
               soluongmua, tienthanhtoan);
        break;
    case 7:

        system("cls");
        printf("\nThong tin thanh toan':\n\
        \nTen san pham \t\t  | Gia' tien`\t\t| So luong mua\t\t| Tong so tien thanh toan\n");
        tienthanhtoan = daugoi[luachon_sanpham].gia_tien * soluongmua;
        printf("\n%-25s %-5.3f vnd\t\t\t %-3d \t\t  %-7.3f vnd\n", daugoi[luachon_sanpham].ten_mon, (float)daugoi[luachon_sanpham].gia_tien,
               soluongmua, tienthanhtoan);
        break;
    case 8:

        system("cls");
        printf("\nThong tin thanh toan':\n\
        \nTen san pham \t\t  | Gia' tien`\t\t| So luong mua\t\t| Tong so tien thanh toan\n");
        tienthanhtoan = nuocgiat[luachon_sanpham].gia_tien * soluongmua;
        printf("\n%-25s %-5.3f vnd\t\t\t %-3d \t\t  %-7.3f vnd\n", nuocgiat[luachon_sanpham].ten_mon, (float)nuocgiat[luachon_sanpham].gia_tien,
               soluongmua, tienthanhtoan);
        break;
    case 9:

        system("cls");
        printf("\nThong tin thanh toan':\n\
        \nTen san pham \t\t  | Gia' tien`\t\t| So luong mua\t\t| Tong so tien thanh toan\n");
        tienthanhtoan = dauan[luachon_sanpham].gia_tien * soluongmua;
        printf("\n%-25s %-5.3f vnd\t\t\t %-3d \t\t  %-7.3f vnd\n", dauan[luachon_sanpham].ten_mon, (float)dauan[luachon_sanpham].gia_tien,
               soluongmua, tienthanhtoan);
        break;
    case 10:

        system("cls");
        printf("\nThong tin thanh toan':\n\
        \nTen san pham \t\t  | Gia' tien`\t\t| So luong mua\t\t| Tong so tien thanh toan\n");
        tienthanhtoan = douongcocon[luachon_sanpham].gia_tien * soluongmua;
        printf("\n%-25s %-5.3f vnd\t\t\t %-3d \t\t  %-7.3f vnd\n", douongcocon[luachon_sanpham].ten_mon, (float)douongcocon[luachon_sanpham].gia_tien,
               soluongmua, tienthanhtoan);
        break;
    case 11:

        system("cls");
        printf("\nThong tin thanh toan':\n\
        \nTen san pham \t\t  | Gia' tien`\t\t| So luong mua\t\t| Tong so tien thanh toan\n");
        tienthanhtoan = thuocla[luachon_sanpham].gia_tien * soluongmua;
        printf("\n%-25s %-5.3f vnd\t\t\t %-3d \t\t  %-7.3f vnd\n", thuocla[luachon_sanpham].ten_mon, (float)thuocla[luachon_sanpham].gia_tien,
               soluongmua, tienthanhtoan);
        break;
    case 12:

        system("cls");
        printf("\nThong tin thanh toan':\n\
        \nTen san pham \t\t  | Gia' tien`\t\t| So luong mua\t\t| Tong so tien thanh toan\n");
        tienthanhtoan = baocaosu[luachon_sanpham].gia_tien * soluongmua;
        printf("\n%-25s %-5.3f vnd\t\t\t %-3d \t\t  %-7.3f vnd\n", baocaosu[luachon_sanpham].ten_mon, (float)baocaosu[luachon_sanpham].gia_tien,
               soluongmua, tienthanhtoan);
        break;
    }
}

float tiencuakhach = 0;
float tienkhachnhap;
// Ham` TienNhapVao co chuc nang thong bao cho khach chon phuong thuc thanh toan + lay du lieu so tien` nhap vao + kiem tra so' tien co hop le
/* Chu y': So tien hien thi cua san pham la x (ta hieu rang phai tu nhan them 1000)
con` so' tien khach nhap vao se co' phan` nghin` nen khi tinh' toan' thi se lay tienkhachnhap/1000 truoc de dong` bo*/

void TienNhapVao(int *phuongthuc, int vitri, int luachon_sanpham, int soluongmua)
{
    if (*phuongthuc == 1)
    {
        printf("\nQuy khach da lua chon phuong thuc thanh toan bang tien mat !\n\
        \nVui long nhap vao so' tien ( Cho tien` vao` may' ) dung' voi 1 trong cac' menh gia\n");
    tienmat:
        float tientamtinh;
        printf("\n( 10.000vnd | 20.00vnd | 50.000vnd | 100.000vnd | 200.000vnd | 500.000vnd )\n");
        scanf("%f", &tienkhachnhap);
        while (tienkhachnhap != 10000 && tienkhachnhap != 20000 && tienkhachnhap != 50000 && tienkhachnhap != 100000 && tienkhachnhap != 200000 && tienkhachnhap != 500000)
        {
            printf("\nSo tien cua quy khach co menh gia' khong phu` hop\n");
            printf("\nVui long` lua nhap lai so tien phu` hop trong cac menh gia' duoi day:\n");
            goto tienmat;
        }
        tientamtinh = tiencuakhach + (tienkhachnhap / 1000);

        while (tientamtinh < tienthanhtoan)
        {
            system("cls");
            ThongTinThanhToan(vitri, luachon_sanpham, soluongmua);
            printf("\nSo tien quy khach la`: %.3f vnd khong du de thanh toan !\n\
            \nSo tien quy khach phai thanh toan tong cong la: %.3f vnd\n",
                   tientamtinh, tienthanhtoan);
            printf("\nVui long` lua nhap lai so tien phu` hop trong cac menh gia' duoi day:\n");
            goto tienmat;
        }
        tiencuakhach = tientamtinh;
    }
    else
    {
        printf("\nQuy khach da lua chon phuong thuc thanh toan bang the Ngan hang` !\n\
    \nVui long` nhap vao so' tien` quy khach muon su dung (vd: 10 nghin dong = 10000) \n");
    thenganhang:
        float tientamtinh;
        scanf("%f", &tienkhachnhap);
        tientamtinh = tiencuakhach + (tienkhachnhap / 1000);
        while (tientamtinh < tienthanhtoan)
        {
            system("cls");
            ThongTinThanhToan(vitri, luachon_sanpham, soluongmua);
            printf("\nSo tien quy khach la`: %.3f vnd khong du de thanh toan !\n\
            \nSo tien quy khach phai thanh toan tong cong la: %.3f vnd\n",
                   tientamtinh, tienthanhtoan);
            printf("\nVui long` lua nhap lai so tien phu` hop voi so tien phai thanh toan':\n");
            goto thenganhang;
        }
        tiencuakhach = tientamtinh;
    }
}

void CapNhatSoLuongSP(int vitri, int luachon_sanpham, int soluongmua)
{
    switch (vitri)
    {
    case 1:
        bimbim[luachon_sanpham].so_luong = bimbim[luachon_sanpham].so_luong - soluongmua;
        break;
    case 2:
        keo[luachon_sanpham].so_luong = keo[luachon_sanpham].so_luong - soluongmua;
        break;
    case 3:
        traicay[luachon_sanpham].so_luong = traicay[luachon_sanpham].so_luong - soluongmua;
        break;
    case 4:
        nuocngot[luachon_sanpham].so_luong = nuocngot[luachon_sanpham].so_luong - soluongmua;
        break;
    case 5:
        nuocsuoi[luachon_sanpham].so_luong = nuocsuoi[luachon_sanpham].so_luong - soluongmua;
        break;
    case 6:
        nuoctraicay[luachon_sanpham].so_luong = nuoctraicay[luachon_sanpham].so_luong - soluongmua;
        break;
    case 7:
        daugoi[luachon_sanpham].so_luong = daugoi[luachon_sanpham].so_luong - soluongmua;
        break;
    case 8:
        nuocgiat[luachon_sanpham].so_luong = nuocgiat[luachon_sanpham].so_luong - soluongmua;
        break;
    case 9:
        dauan[luachon_sanpham].so_luong = dauan[luachon_sanpham].so_luong - soluongmua;
        break;
    case 10:
        douongcocon[luachon_sanpham].so_luong = douongcocon[luachon_sanpham].so_luong - soluongmua;
        break;
    case 11:
        thuocla[luachon_sanpham].so_luong = thuocla[luachon_sanpham].so_luong - soluongmua;
        break;
    case 12:
        baocaosu[luachon_sanpham].so_luong = baocaosu[luachon_sanpham].so_luong - soluongmua;
        break;
    }
}

/*Ham nay co tinh nang nang cao ve quan ly gio? hang` va so tien`
1: nhap them tien => tong tien = tien nhap vao + them tien
2: Bo bot' so luong san pham ( hoac goi len function gio? hang` de loai bo san pham khac)
[Dang nghien cuu]
void GioHang*/

// Block nay` cho cac' chuc' nang dac biet khac'

void DemSoLanChayCT() // Ham` dem so lan thuc thi chuong trinh (Do chu~ thucthi qua dai` nen se~ dung` chu~ chay de dat ten cho ham`)
{
    FILE *f_demsolanchay;
    int solanchay;
    f_demsolanchay = fopen("solanthucthi.txt", "a+");
    if (f_demsolanchay != NULL)
    {
        fscanf(f_demsolanchay, "%d", &solanchay);
        printf("\t\t\t\t{So lan`thuc thi chuong trinh: %d}\n", solanchay);
    }
    fclose(f_demsolanchay);
}
void GhiSoLanChayCT() // Ham` ghi so lan thuc thi chuong trinh (Do chu~ thucthi qua dai` nen se~ dung` chu~ chay de dat ten cho ham`)
{
    FILE *f_demsolanchay, *f_ghisolanchay;
    int solanchay;
    f_demsolanchay = fopen("solanthucthi.txt", "a+");
    if (f_demsolanchay != NULL)
    {
        fscanf(f_demsolanchay, "%d", &solanchay);
        solanchay++;
        f_ghisolanchay = fopen("solanthucthi.txt", "w");
        fprintf(f_ghisolanchay, "%d", solanchay);
    }
    fclose(f_ghisolanchay);
    fclose(f_demsolanchay);
}

void DemSoLanGiaoDich() // Ham` dem so lan giao dich thanh cong
{
    FILE *f_demsolangiaodich;
    int solangiaodich;
    f_demsolangiaodich = fopen("solangiaodich.txt", "a+");
    if (f_demsolangiaodich != NULL)
    {
        fscanf(f_demsolangiaodich, "%d", &solangiaodich);
        printf("\n\t\t\t\t{So lan` da~ giao dich thanh` cong: %d}\n", solangiaodich);
    }
    fclose(f_demsolangiaodich);
}
void GhiSoLanGiaoDich() // Ham` ghi so lan giao dich, khi co dong y thanh toan thi` ham` moi duoc thuc thi
{
    FILE *f_demsolangiaodich, *f_ghisolangiaodich;
    int solangiaodich;
    f_demsolangiaodich = fopen("solangiaodich.txt", "a+");
    if (f_demsolangiaodich != NULL)
    {
        fscanf(f_demsolangiaodich, "%d", &solangiaodich);
        solangiaodich++;
        f_ghisolangiaodich = fopen("solangiaodich.txt", "w");
        fprintf(f_ghisolangiaodich, "%d", solangiaodich);
    }
    fclose(f_ghisolangiaodich);
    fclose(f_demsolangiaodich);
}

// Ham` chinh'

int main()
{
    system("cls");
    int soluongmua;
    int vitri;
    int luachon_menu;    // Bien nay` dung de lua chon Menu
    int luachon_sanpham; // Bien nay` dung de lua chon mua san pham
    int sophantu;

    GhiSoLanChayCT();

    // Nhap vao lua chon cac' loai mat hang`
    printf("\n\t\t\t\tNhap vao lua chon cua Quy Khach: \n\n\
    \n[1]: Do an    [2]: Do uong    [3]: Hang` tieu dung`    [4]: San pham cho nguoi tren 18 tuoi   [5]: Thoat chuong trinh - Xem thong tin khac'\n\n");
    NhapLuaChon(&luachon_menu);

    while (luachon_menu < 1 || luachon_menu > 5)
    {
        system("cls");
        printf("\n Quy khach vui long nhap lai !\n\
            \n [1]: Do an (MatHang)   [2]: Do uong (MatHang)   [3]: Hang` tieu dung`   [4]: San pham cho nguoi tren 18 tuoi   [5]: Thoat chuong trinh\n");
        NhapLuaChon(&luachon_menu);
    }

    switch (luachon_menu) // Lua chon san pham muon' mua trong mat hang`
    {
    case 1: // Lua chon do` an (MatHang)
        system("cls");
        printf("\n Quy khach da lua chon Do an, vui long lua chon 1 trong cac loai do an duoi day:\n\
         \n\t[1]: Bimbim     [2]: Keo     [3]: Trai cay    [4]: Quay ve Menu chinh'\n");
        NhapLuaChon(&luachon_menu);
        while (luachon_menu < 1 || luachon_menu > 4)
        {
            system("cls");
            printf("\n\t Quy khach vui long nhap lai !\
            \n\t[1]: Bimbim    [2]: Keo    [3]: Trai cay    [4]: Quay ve Menu chinh'\n");
            NhapLuaChon(&luachon_menu);
        }
        switch (luachon_menu) // Lua chon cac loai Do` an tuong ung'
        {
        case 1:
            system("cls");
            printf("\n Quy khach da lua chon Bimbim (snack), vui long lua chon 1 trong cac loai bimbim duoi day:\n");
            sophantu = sizeof(bimbim) / sizeof(MatHang);
            MenuMatHang(bimbim, sophantu);
            vitri = 1;
            break;
        case 2:
            system("cls");
            printf("\n Quy khach da lua chon Keo (candy), vui long lua chon 1 trong cac loai keo duoi day:\n");
            sophantu = sizeof(keo) / sizeof(MatHang);
            MenuMatHang(keo, sophantu);
            vitri = 2;
            break;
        case 3:
            system("cls");
            printf("\n Quy khach da lua chon Trai cay (Fruit), vui long lua chon 1 trong cac loai trai cay duoi day:\n");
            sophantu = sizeof(traicay) / sizeof(MatHang);
            MenuMatHang(traicay, sophantu);
            vitri = 3;
            break;
        case 4:
            main();
            break;
        }
        break;

    case 2: // Lua chon Do uong' (MatHang)
        system("cls");
        printf("\n Quy khach da lua chon Do uong, vui long lua chon 1 trong cac loai do uong duoi day:\n\
         \n\t[1]: Nuoc ngot     [2]: Nuoc suoi     [3]: Nuoc trai cay   [4]: Quay ve Menu chinh'\n");
        NhapLuaChon(&luachon_menu);
        while (luachon_menu < 1 || luachon_menu > 4)
        {
            system("cls");
            printf("\n Quy khach vui long nhap lai !\
            \n\t[1]: Nuoc ngot    [2]: Nuoc suoi    [3]: Nuoc trai cay   [4]: Quay ve Menu chinh'\n");
            NhapLuaChon(&luachon_menu);
        }
        switch (luachon_menu) // Lua chon cac loai Do uong' tuong ung'
        {
        case 1:
            system("cls");
            printf("\n Quy khach da lua chon Nuoc Ngot, vui long lua chon 1 trong cac loai Nuoc ngot duoi day:\n");
            sophantu = sizeof(nuocngot) / sizeof(MatHang);
            MenuMatHang(nuocngot, sophantu);
            vitri = 4;
            break;
        case 2:
            system("cls");
            printf("\n Quy khach da lua chon Nuoc suoi, vui long lua chon 1 trong cac loai Nuoc suoi duoi day:\n");
            sophantu = sizeof(nuocsuoi) / sizeof(MatHang);
            MenuMatHang(nuocsuoi, sophantu);
            vitri = 5;
            break;
        case 3:
            system("cls");
            printf("\n Quy khach da lua chon Nuoc' trai' cay (Fruit), vui long lua chon 1 trong cac loai Nuoc' trai' cay duoi day:\n");
            sophantu = sizeof(nuoctraicay) / sizeof(MatHang);
            MenuMatHang(nuoctraicay, sophantu);
            vitri = 6;
            break;
        case 4:
            main();
            break;
        }
        break;
    case 3:
        system("cls");
        printf("\n Quy khach da lua chon Hang` tieu dung`, vui long lua chon tiep 1 trong cac lua chon duoi day:\n\
         \n\t[1]: Dau` goi dau`     [2]: Nuoc giat do`     [3]: Dau` an    [4]: Quay ve Menu chinh'\n");
        NhapLuaChon(&luachon_menu);
        while (luachon_menu < 1 || luachon_menu > 4)
        {
            system("cls");
            printf("\n Quy khach vui long nhap lai !\
            \n\t[1]: Dau` goi dau`    [2]: Nuoc giat do`    [3]: Dau` an    [4]: Quay ve Menu chinh'\n");
            NhapLuaChon(&luachon_menu);
        }
        switch (luachon_menu) // Lua chon cac loai hang` tieu dung` tuong ung'
        {
        case 1:
            system("cls");
            printf("\n Quy khach da lua chon Dau` goi dau`, vui long lua chon 1 trong cac loai Dau` goi dau` duoi day:\n");
            sophantu = sizeof(daugoi) / sizeof(MatHang);
            MenuMatHang(daugoi, sophantu);
            vitri = 7;
            break;
        case 2:
            system("cls");
            printf("\n Quy khach da lua chon Nuoc giat do`, vui long lua chon 1 trong cac loai Nuoc giat do` duoi day:\n");
            sophantu = sizeof(nuocgiat) / sizeof(MatHang);
            MenuMatHang(nuocgiat, sophantu);
            vitri = 8;
            break;
        case 3:
            system("cls");
            printf("\n Quy khach da lua chon Dau` an, vui long lua chon 1 trong cac loai Dau` an duoi day:\n");
            sophantu = sizeof(dauan) / sizeof(MatHang);
            MenuMatHang(dauan, sophantu);
            vitri = 9;
            break;
        case 4:
            main();
            break;
        }
        break;
    case 4:
        system("cls");
        printf("\n\tCanh bao': Quy khach da lua chon San pham cho nguoi tren 18 tuoi!\n\
        \nVui long` xac minh quy khach tren 18 tuoi va muon tiep tuc mua hang` trong danh muc nay`:\n");

        int xacnhantren18; // Bien dung cho xac nhan tren 18 tuoi

    xacminhtren18: // Nhan~ nay` de dung` goto cho viec nhap lai dung' lua chon
        printf("\n[1]: Toi tren 18 tuoi va muon tiep tuc mua hang`  \
      \t[2]: Toi duoi' 18 tuoi va khong muon tiep tuc mua hang - Toi muon mua mat hang khac\n");
        scanf("%d", &xacnhantren18);
        while (xacnhantren18 != 1 && xacnhantren18 != 2)
        {
            system("cls");
            printf("\nVui long nhap lai lua chon !\n");
            goto xacminhtren18;
        }
        if (xacnhantren18 == 2)
        {
            main();
        }
        else
        {
            system("cls");
            printf("\n Quy khach vui long lua chon tiep' 1 trong cac lua chon duoi day:\n\
             \n\t[1]: Do` uong' co' con`     [2]: Thuoc' la'     [3]: Bao cao su   [4]: Quay ve Menu chinh'\n ");
            NhapLuaChon(&luachon_menu);
            while (luachon_menu < 1 || luachon_menu > 4)
            {
                system("cls");
                printf("\n Quy khach vui long nhap lai !\
                \n\t[1]: Do` uong' co' con`    [2]: Thuoc' la'    [3]: Bao cao su   [4]: Quay ve Menu chinh'\n");
                NhapLuaChon(&luachon_menu);
            }
            switch (luachon_menu) // Lua chon cac loai hang` tuong ung'
            {
            case 1:
                system("cls");
                printf("\n Quy khach da lua chon Do` uong' co' con`, vui long lua chon 1 trong cac loai Do` uong' duoi day:\n");
                sophantu = sizeof(douongcocon) / sizeof(MatHang);
                MenuMatHang(douongcocon, sophantu);
                vitri = 10;
                break;
            case 2:
                system("cls");
                printf("\n Quy khach da lua chon Thuoc' la', vui long lua chon 1 trong cac loai Thuoc' la' duoi day:\n");
                sophantu = sizeof(thuocla) / sizeof(MatHang);
                MenuMatHang(thuocla, sophantu);
                vitri = 11;
                break;
            case 3:
                system("cls");
                printf("\n Quy khach da lua chon Bao cao su, vui long lua chon 1 trong cac loai Bao cao su duoi day:\n");
                sophantu = sizeof(baocaosu) / sizeof(MatHang);
                MenuMatHang(baocaosu, sophantu);
                vitri = 12;
                break;
            case 4:
                main();
                break;
            }
        }
        break;
    case 5:
        int luachonphu;
        do
        {
            system("cls");
            printf("\nQuy khach vui long chon 1 trong cac lua chon duoi day: \n\
            \n[1]: Thoat chuong trinh    [2]: Xem so lan` thuc thi chuong trinh va` so lan` giao dich thanh` cong   [3]: Tro ve Menu chinh'\n");
            scanf("%d", &luachonphu);
            if (luachonphu == 1)
            {
                ThoatChuongTrinh();
                main();
            }
            else if (luachonphu == 2)
            {
                DemSoLanChayCT();
                DemSoLanGiaoDich();
                getch();
                ThoatChuongTrinh();
                main();
            }
            else if (luachonphu == 3)
                main();
        } while (luachonphu != 1 && luachonphu != 2 && luachonphu != 3);
        break;
    }
    LuaChon_SoLuongMua(&luachon_sanpham, &soluongmua);
    KiemTraMuaSP(vitri, &luachon_sanpham, &soluongmua);
    ThongTinThanhToan(vitri, luachon_sanpham, soluongmua);

    int pt_thanhtoan;
    do // Lua chon phuong thuc thanh toan'
    {
        system("cls");
        ThongTinThanhToan(vitri, luachon_sanpham, soluongmua);
        printf("\nMoi quy khach lua chon phuong thuc thanh toan':\n\
       \n[1]: Tien mat    \t[2]: The Ngan hang`\n");
        scanf("%d", &pt_thanhtoan);
    } while (pt_thanhtoan != 1 && pt_thanhtoan != 2);
    TienNhapVao(&pt_thanhtoan, vitri, luachon_sanpham, soluongmua);

    int xacnhan_thanhtoan;
    do // Xac nhan thanh toan
    {
        ThongTinThanhToan(vitri, luachon_sanpham, soluongmua);
        printf("\nQuy khach vui long xac nhan thanh toan' so' tien` %.3f vnd cho san pham tren:\n\
         \n[1]: Dong` y' thanh toan'   \t[2]: Khong dong` y' thanh toan'\n",
               tienthanhtoan);
        scanf("%d", &xacnhan_thanhtoan);
        if (xacnhan_thanhtoan == 1)
        {
            int cothanhtoan;
            tiencuakhach = tiencuakhach - tienthanhtoan;
            CapNhatSoLuongSP(vitri, luachon_sanpham, soluongmua);
            GhiSoLanGiaoDich();
            do
            {
                ThongTinThanhToan(vitri, luachon_sanpham, soluongmua);
                printf("\nSo du cua quy khach la`: %-.3f vnd\n", tiencuakhach);
                printf("\nQuy khach co muon mua hang` tiep voi so du %-.3f vnd hay lay tien thoi ( In Bien Lai ) va` thoat' khoi chuong trinh` ?\n", tiencuakhach);
                printf("\n[1]: Mua hang` tiep    \t[2]: Thoat khoi chuong trinh va` in Bien lai\n");
                scanf("%d", &cothanhtoan);
                if (cothanhtoan == 1)
                    main();
                else
                    ThoatChuongTrinh();
                main();
            } while (cothanhtoan != 1 && cothanhtoan != 2);
        }
        else
        {
            int khongthanhtoan;
            do
            {
                printf("\nQuy khach muon thay doi mat hang hay thoat' khoi chuong trinh`?\n\
                \n[1]: Thay doi mat hang`  \t[2]: Thoat' khoi chuong trinh`\n");
                scanf("%d", &khongthanhtoan);
                if (khongthanhtoan == 1)
                    main();
                else
                    ThoatChuongTrinh();
                main();
            } while (khongthanhtoan != 1 && khongthanhtoan != 2);
        }

    } while (xacnhan_thanhtoan != 1 && xacnhan_thanhtoan != 2);

    getch();
    return 0;
}