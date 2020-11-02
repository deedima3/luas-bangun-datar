#include <stdio.h>

void downmenu();
void pilihan(int p);
void persegi();
void segitiga();
void lingkaran();

void main()
{
  int p;
  system("cls");
  printf("===================================\n");
  printf("        PROGRAM PENGHITUNG         \n");
  printf("===================================\n");
  printf("         made by: Ryvenna          \n");
  printf(" \n");
  downmenu();
}

void pilihan(int p)
{
  if (p == 1){
    lingkaran();
  }
  else if(p == 2){
    segitiga();
  }
  else if(p == 3){
    persegi();
  }
  else if(p == 0){
    main();
  }
  else{
    printf("Maaf pilihan anda salah");
  }
}

void persegi()
{
  float p, l, luas;
  int pi;
  system("cls");
  printf("=================\n");
  printf("PENGHITUNG PERSEGI\n");
  printf("=================\n");
  printf("Masukkan panjang: ");
  scanf("%f", &p);
  printf("Masukkan lebar: ");
  scanf("%f", &l);
  luas = p * l;
  printf("Luas perseginya adalah %f \n", luas);
  printf(" \n");
  downmenu();
}

void segitiga()
{
  float a, t, luas;
  int pi;
  system("cls");
  printf("===================\n");
  printf("PENGHITUNG SEGITIGA\n");
  printf("===================\n");
  printf("Masukkan alas: ");
  scanf("%f", &a);
  printf("Masukkan tinggi: ");
  scanf("%f", &t);
  luas = (a * t)/2;
  printf("Luas segitiganya adalah %f \n", luas);
  printf(" \n");
  downmenu();
}

void lingkaran(){
  float r, phi = 3.14, luas;
  int pi;
  system("cls");
  printf("====================\n");
  printf("PENGHITUNG LINGKARAN\n");
  printf("====================\n");
  printf("Masukkan jari-jari: ");
  scanf("%f", &r);
  luas = phi*r*r;
  printf("Luas lingkarannya adalah %f \n", luas);
  printf(" \n");
  downmenu();
}

void downmenu(){
  int p;
  printf("1. Luas Lingkaran\n2. Luas Segitiga\n3. Luas Persegi\n");
  printf("Masukkan pilihan anda: ");
  scanf("%d", &p);
  pilihan(p);
}
