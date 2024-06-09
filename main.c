#include <stdio.h>

void Cekbiayaparkir(int BiayaParkir,int uang, int diskon,int Jam_Masuk, int Jam_Keluar, int Total_jam) {
     int Totalbiaya, kembalian;


    Totalbiaya = BiayaParkir-diskon;
    kembalian = uang-Totalbiaya;
    printf("\n================================================\n");
    printf("\n      PARKIR KENDARAAN RODA DUA DAN EMPAT           \n");
    printf("\n        MALL GRAND INDONESIA JAKARTA            \n");
    printf("\n         jl M.H Thamrin No 1,Menteng            \n");
    printf("\n                                                  ");
    printf("\n       Jam Masuk           = jam %d",Jam_Masuk);
    printf("\n       Jam Keluar          = jam %d",Jam_Keluar);
    printf("\n       Lama Parkir         = %d jam",Total_jam);
    printf("\n       Biaya Parkir        = Rp %d",BiayaParkir);
    printf("\n       Potongan Diskon     = Rp%d",diskon);
    printf("\n       Total Biaya Parkir  = Rp%d",Totalbiaya);
    printf("\n       Total Uang          = Rp%d",uang);
    printf("\n       Kembalian           = Rp%d",kembalian);
    printf("\n                                                   ");
    printf("\n             TERIMAKASIH  ");
    printf("\n=================================================\n");
}

int jumlahuang(int BiayaParkir, float diskon){
    return (BiayaParkir-diskon);
}

int Totaljam(int Jam_masuk,int Jam_keluar){
    if(Jam_masuk>Jam_keluar){
    return((24-Jam_masuk)+Jam_keluar);
    }
    else if(Jam_masuk<Jam_keluar){
    return(Jam_keluar-Jam_masuk);
    }
}
int main(){
    int Jam_Masuk, Jam_Keluar, Lama_Parkir, kendaraan, nama_kendaraan, Total_jam, pembayaran,
    BiayaParkir, diskon, uang;
    char ulang;


    printf("\n                                                               \n");
    printf("Program Menghitung Biaya Parkir");
    printf("   \n==========================================================\n");
    printf("\n   (1) biaya parkir Motor Reguler adalah Rp.5000/jam     ");
    printf("\n   (2) biaya parkir Mobil Reguler adalah Rp.10000/jam     ");
    printf("\n    #  biaya parkir Motor menambah 3000/jam diatas 12 jam");
    printf("\n    #  biaya parkir Mobil menambah 6000/jam diatas 12 jam");
    printf("   \n\n==========================================================\n");
    printf("\n                                                               \n");

    do{
        printf("Pilih Kendaraan yang dipakai: ");
        scanf("%d",&kendaraan);

    if(kendaraan == 1 || kendaraan == 2){
      printf("Jam Masuk Kendaraan: ");
      scanf("%d",&Jam_Masuk);
      if(Jam_Masuk<=24){
      printf("Jam Keluar Kendaraan: ");
      scanf("%d",&Jam_Keluar);

      system("cls");

      if(Jam_Keluar<=24){
      printf("\n__________________________________________________________________\n");
      printf("                                                                     \n");
      printf("\n                              ===================================");
      printf("\n                              |   NO  |       METODE     | Dsc  |");
      printf("\n                              |=================================|");
      printf("\n                              |   1   |       TUNAI      |  -   |");
      printf("\n                              |   2   |       GOPAY      |  5%%  |");
      printf("\n                              ===================================");
      printf("\n                                                                    \n");
      printf("Silahkan pilih pembayaran yang ingin dipakai: ");
      scanf("%d",&pembayaran);

      Total_jam = Totaljam(Jam_Masuk,Jam_Keluar);

      if(pembayaran == 1 || pembayaran == 2){


        switch(pembayaran){

        case 1:
            printf("Silahkan Masukkan Jumlah Uang: Rp ");
            scanf("%d",&uang);

            if(kendaraan==1){
                if(Total_jam > 12){
                    BiayaParkir = ((Total_jam - 12)*6000)+60000;
                    diskon = BiayaParkir*(0);
                    Cekbiayaparkir(BiayaParkir, uang, diskon, Jam_Masuk, Jam_Keluar, Total_jam);
                }

            else if(Total_jam >= 2 && Total_jam <= 12){
                BiayaParkir = Total_jam*5000;
                diskon = BiayaParkir*(0);
                Cekbiayaparkir(BiayaParkir, uang, diskon, Jam_Masuk, Jam_Keluar, Total_jam);
            }

            else if (Total_jam == 1 || Total_jam == 0){
                BiayaParkir = 5000;
                diskon = BiayaParkir*(0);
                Cekbiayaparkir(BiayaParkir, uang, diskon, Jam_Masuk, Jam_Keluar, Total_jam);
           }
            }
            if(kendaraan==2){
                if(Total_jam > 12){
                    BiayaParkir = ((Total_jam - 12)*12000)+120000;
                    diskon = BiayaParkir*(0);
                    Cekbiayaparkir(BiayaParkir, uang, diskon, Jam_Masuk, Jam_Keluar, Total_jam);
                }

                else if(Total_jam >= 2 && Total_jam <= 12){
                    BiayaParkir = Total_jam*10000;
                    diskon = BiayaParkir*(0);
                    Cekbiayaparkir(BiayaParkir, uang, diskon, Jam_Masuk, Jam_Keluar, Total_jam);
                }

                else if(Total_jam == 1 || Total_jam == 0){
                    BiayaParkir = 10000;
                    diskon = BiayaParkir*(0);
                    Cekbiayaparkir(BiayaParkir, uang, diskon, Jam_Masuk, Jam_Keluar, Total_jam);
                }
            }
        break;

        case 2:
            if(kendaraan==1){
                if(Total_jam > 12){
                    BiayaParkir = ((Total_jam - 12)*6000)+60000;
                    diskon = BiayaParkir*(0.05);
                    uang = jumlahuang(BiayaParkir, diskon);
                    Cekbiayaparkir(BiayaParkir, uang, diskon, Jam_Masuk, Jam_Keluar, Total_jam);
                }

                else if(Total_jam >= 2 && Total_jam <= 12){
                    BiayaParkir = Total_jam*5000;
                    diskon = BiayaParkir*(0.05);
                    uang = jumlahuang(BiayaParkir, diskon);
                    Cekbiayaparkir(BiayaParkir, uang, diskon, Jam_Masuk, Jam_Keluar, Total_jam);
                }

                else if(Total_jam == 1 || Total_jam == 0){
                    BiayaParkir = 5000;
                    diskon = BiayaParkir*(0.05);
                    uang = jumlahuang(BiayaParkir, diskon);
                    Cekbiayaparkir(BiayaParkir, uang, diskon, Jam_Masuk, Jam_Keluar, Total_jam);
                }
            }
            if(kendaraan==2){
                if(Total_jam > 12){
                    BiayaParkir = ((Total_jam - 12)*12000)+120000;
                    diskon = BiayaParkir*(0.05);
                    uang = jumlahuang(BiayaParkir, diskon);
                    Cekbiayaparkir(BiayaParkir, uang, diskon, Jam_Masuk, Jam_Keluar, Total_jam);
                }

                else if(Total_jam >= 2 && Total_jam <= 12){
                    BiayaParkir = Total_jam*10000;
                    diskon = BiayaParkir*(0.05);
                    uang = jumlahuang(BiayaParkir, diskon);
                    Cekbiayaparkir(BiayaParkir, uang, diskon, Jam_Masuk, Jam_Keluar, Total_jam);
                }

                else if(Total_jam == 1 || Total_jam == 0){
                    BiayaParkir = 10000;
                    diskon = BiayaParkir*(0.05);
                    uang = jumlahuang(BiayaParkir, diskon);
                    Cekbiayaparkir(BiayaParkir, uang, diskon, Jam_Masuk, Jam_Keluar, Total_jam);
                }
            }
            break;
        default:
            printf("Maaf Input Anda Salah");
        }
      }
      else{
        printf("Maaf Input Anda salah");
      }
      }
      else{
          printf("Maaf input Anda Salah");
      }
     }
     else{
         printf("Maaf input Anda salah");
     }

    }

    else{
        printf("Maaf input Anda salah");
    }
     printf("\nApakah Anda ingin mengulang?");
        printf("\nJawab Y/N: ");
        scanf("%s",&ulang);

    }
    while(ulang=='Y');


    printf("\nTerima kasih sudah menggunakan program parkir ini");

    return 0;
}
