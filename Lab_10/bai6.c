#include <stdio.h>
#include <string.h>


typedef struct{
    char MSSV[50];
    char HOTEN[1000];
    float DIEMPLLT;
    float DIEMDSTT;
    float DIEMTCTT;
    float DIEMTB;
    char XEPLOAI[10];
}SinhVien;

int main(){

    SinhVien sv[3];

    strcpy(sv[0].MSSV,"523H0164");
    strcpy(sv[0].HOTEN,"Nguyen Tran Hoang Nhan");
    sv[0].DIEMPLLT = 10;
    sv[0].DIEMDSTT = 10;
    sv[0].DIEMTCTT = 10;


    strcpy(sv[1].MSSV,"523H0177");
    strcpy(sv[1].HOTEN,"Mai Hoang Thai");
    sv[1].DIEMPLLT = 7.2;
    sv[1].DIEMDSTT = 7.3;
    sv[1].DIEMTCTT = 9.2;

    strcpy(sv[2].MSSV,"523H0128");
    strcpy(sv[2].HOTEN,"Ha Dung");
    sv[2].DIEMPLLT = 2.2;
    sv[2].DIEMDSTT = 7.3;
    sv[2].DIEMTCTT = 1.3;

    char MSSV_Can_Tim[100] = "523H0164";
    for (size_t i = 0; i < 3; i++)
    {
        if (!(strcmp(MSSV_Can_Tim,sv[i].MSSV)))
        {
            printf("\nMSSV can tim nam o vi tri thu %d trong mang",i);
            break;   
        }   
    }

    //tinh diem trung binh tich luy cho moi sinh SinhVien
    for (size_t i = 0; i < 3; i++)
    {
        sv[i].DIEMTB = (sv[i].DIEMDSTT + sv[i].DIEMPLLT + sv[i].DIEMTCTT)/3;
        printf("\nMSSV: %s, diem trung binh tich luy = %.3f",sv[i].MSSV,sv[i].DIEMTB);
    }
     
    printf("\n");
    for (size_t i = 0; i < 3; i++)
    {
        if (sv[i].DIEMTB >8)
        {
            strcpy(sv[i].XEPLOAI,"gioi");
        }
        if (sv[i].DIEMTB <= 8 && sv[i].DIEMTB >= 5)
        {
            strcpy(sv[i].XEPLOAI,"Kha");
        }
        if(sv[i].DIEMTB < 5){
            strcpy(sv[i].XEPLOAI,"tb");
        }
    }

    printf("\n");
    for (size_t i = 0; i < 3; i++)
    {
        printf("\nMSSV: %s xep loai: %s", sv[i].MSSV,sv[i].XEPLOAI);
    }
    
    float minTB = sv[0].DIEMTB;
    int minIndex = 0;
    for (size_t i = 0; i < 3; i++)
    {
        if (minTB > sv[i].DIEMTB)
        {
            minTB = sv[i].DIEMTB;
            minIndex = i;
        }
    }
    printf("\n");
    printf("\nMSSV: %s co diem trung binh thap nhat voi diem trunh binh = %.3f",sv[minIndex].MSSV,minTB);

    int count = 0;
    for (size_t i = 0; i < 3; i++)
    {
        if (sv[i].DIEMTB > 8)
        {
            count++;
        }
    }
    printf("\n");
    printf("\nCo %d sinh co hoc luc kha tro len",count);    
    return 0;
}

