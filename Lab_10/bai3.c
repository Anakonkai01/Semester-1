#include <stdio.h>
#include <stdbool.h>

bool checkinput(int ngay,int thang,int nam){
    if(ngay <=0 || ngay >= 31 || thang <= 0 || thang >= 12 || nam <= 0) return false;
    bool check = true;
    bool checkNamNhuan = false;
    if (nam%4 == 0&& nam % 100 != 0 || nam%400 == 0)
    {
        checkNamNhuan = true;
    }
    if ((thang  == 2 && checkNamNhuan == true))
    {
        if(ngay > 29)
        check == false;   
    }
    if(thang == 2 && checkNamNhuan == false ){
        if (ngay >28)
        {
            check = false; 
        }
        
    }


    
    if((thang <= 7 && thang != 2 && thang%2 == 1)){
        if (ngay >31)
        {
            check = false;
        }
        
    }

    if((thang <= 7 && thang != 2 && thang%2 == 0)){
        if(ngay >30){
            check = false;
        }
    }

    if((thang >= 8 && thang%2 == 0)){
        if(ngay >31){
            check = false;
        }
    }
    if((thang >= 8 && thang%2 == 1)){
        if(ngay >30){
            check = false;
        }
    }

    
    return check;
}

int main(){
    int ngay;
    int thang;
    int nam;

    printf("Nhap Ngay sinh: ");
    scanf("%d",&ngay);
    printf("\nNhap Thang sinh: ");
    scanf("%d",&thang);
    printf("\nNhap Nam Sinh: ");
    scanf("%d",&nam);

    
    checkinput(ngay,thang,nam)?printf("thong tin ban vua nhap la hop le"):printf("thong tin ko hop le");    


    return 0;
}