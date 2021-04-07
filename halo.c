/* File : halo.c */
/* Program menuliskan “Halo Dunia! ” dan “end-of-line” (ganti baris) *//*
#include<stdio.h>
int main(void)
{ 
    printf("Halo Dunia!\n ");
}

/* Mengisi variabel i yg bertype in dengan nilai 5 dan menuliskannya */
/*
#include<stdio.h>
int main()
{ /* Kamus *//*
  float f = 0.555;
  float x= 1.5E3;
/* Algoritma *//*
   printf ("Ini nilai f : %f \n", f);
   printf ("Ini nilai f : %5.2f \n", f);
   printf ("Ini nilai x : %10.2f \n", f);
return 0;
}*/
/*
#include<stdio.h>
#define FALSE 0
#define NOL 0
#define SATU 1
#define pi 3.1415
int main ()
{/* Kamus *//*
  const int maks=3;
  const float param =2.5;
  const char cc = 65 ;
  const char cA = 'A' ;
 /* Algoritma *//*
  printf ("PI  = %6.2f\n", pi);
  printf ("NOL  = %d\n", NOL);
  printf ("SATU  = %d\n", SATU);
  printf ("FALSE  = %d\n", FALSE);
  printf ("maks  = %d\n", maks);
  printf ("param  = %f\n", param);
  printf ("cc  = %c\n", cc);
  printf ("cA  = %c\n", cA);
  printf ("3\n"); /*tanpa memakai nama, tidak disarankan *//*
  return 0;
}*/
/*
#include<stdio.h>
int main ()
{/* Kamus *//*
  int TRUE=1;
  int FALSE=0;
  /* Algoritma  *//*
   printf ("Ini nilai TRUE AND TRUE  : %d \n",  TRUE && TRUE );
   printf ("Ini nilai TRUE OR FALSE  : %d \n",  TRUE || FALSE);
   printf ("Ini nilai FALSE AND TRUE  : %d \n",  FALSE && TRUE );
   printf ("Ini nilai FALSE OR FALSE  : %d \n",  FALSE || FALSE );
   printf ("Ini nilai NOT TRUE  : %d \n", !TRUE);
   printf ("Ini nilai NOT FALSE  : %d \n", !FALSE );
  return 0;
}*/
/*
#include<stdio.h>
int main ()
{/* Kamus *//*
  int uang= 6000;
  int hujan=0; /*artinya hujan bernilai FALSE */
  /* Program *//*
   printf ("uang>5000 dan tidak hujan: %d \n",  (uang>5000) && (!hujan));
 
   uang= 6000;
   hujan=1; /*artinya hujan bernilai TRUE *//*
   printf ("uang>5000 dan tidak hujan: %d \n",  (uang>5000) && (!hujan));
 
  return 0;
}*/

/* Efek dari operator ++ *//*
#include<stdio.h>
int main ()
{
/* Kamus *//*
  int i;
  /* Program *//*
  i = 3;
  printf ("Nilai i :%d %d\n", i, i++);
  i = 3;
  printf ("%d\n", ++i); /* sebelum dicetak, nilai i ditambah 1 *//*
 
  return 0;
}*/

/* contoh pemakaian IF dua kasus komplementer */
/* Membaca sebuah nilai, */
/* menuliskan 'Nilai a positif , nilai a', jika a >=0 */
/*            'Nilai a negatif , nilai a', jika a <0  */
/*
#include<stdio.h>
int main ()
{
/* Kamus *//*
  int a;
  /* Program *//*
  printf ("Contoh IF dua kasus \n");
  printf ("Ketikkan suatu nilai integer :");
  scanf ("%d", &a);
  if (a >= 0)
    {
      printf ("Nilai a positif %d \n", a);
    }
  else /* a< 0 *//*
    {
      printf ("Nilai a negatif %d \n", a);
    }
  return 0;
}*/

/* print “Saya senang” sebanyak 3 kali *//*
#include<stdio.h>
int main ()
{
/* Kamus : *//*
 int i;
 /* Algoritma *//*
 for (i=0; i<3; i++) {
     printf ("Saya senang belajar bahasa C \n");
 }
  return 0;
}*/

/* print “Saya senang” sebanyak 3 kali *//*
#include<stdio.h>
int main ()
{
/* Kamus : *//*
 int i=0;
/* Algoritma *//*
 while (i<3) { /* program diulang selama nilai i < 3 *//*
     printf ("Saya senang belajar bahasa C \n");
     i++;
 }
 return 0;
}*/

/* print “Saya senang” sebanyak 3 kali *//*
#include<stdio.h>
int main ()
{
/* Kamus : *//*
  int i=0;
 /* Algoritma *//*
 do  {
     printf ("Saya senang belajar bahasa C \n");
     i++;
 } while (i<5);
  return 0;
}*/

/* Loop terus menerus, akan sering dipakai untuk program menunggu event *//*
#include<stdio.h>
int main ()
{/* Kamus : *//*
 
/* Program *//*
  printf("Program akan looping, akhiri dengan Ctrl-c "); 
  while (1) /* atau for (;;) *//*
    {     printf ("Tunggu ^c....\n");
           /* program akan terus menerus dijalankan, sampai diinterupsi*/
           /* cara interupsi adalah dengan menekan tombol [Ctrl] dan tombol "c" bersamaan*//*
    }
  return 0;
}*/
/*
#include <stdio.h>
 
int main(void)
{
   int a = 0;
   while (a < 10) {
      printf("%d\n", a);
      if (a = 5)
         printf("a equals 5!\n");
      a++;
   }
   return 0;
}*/

/* Mendefinisikan array dan mengisi nilainya *//*
#include<stdio.h>
int main ()
{/* Kamus : */
/* Kamus *//*
  int Tab [5] = {1, 2, 3, 4, 5};/* Tab[0]=1; Tab[1]=2; . .. Tab[4]=5 *//*
  float TabX[3]= {1.5, 3.5E2, 9.99};
  char Tabchar[4]= {'1', '2', '@', 'Z'};*//*
 
  int i; /* untuk iterasi indeks tabel */
 /* menuliskan isi Tab berderet ke kanan*//*
 for (i=0; i<5; i++) {
     printf ("Tab[%d]= %d ;\n", i,  Tab[i]);
 }
 printf ("\n");
  
 /* Latihan : tuliskan nilai TabX dan TabChar *//*
  
  return 0;
}*/

/* Deskripsi : */                                             
/* Mendefinisikan array dan mengisi nilainya dari input yang dibaca *//*
#include<stdio.h>
int main ()
{
 /* Kamus *//*
  int Tab [5];
  int i; 
  /* baca isi Tab *//*
  for (i=0; i<5; i++) {
     scanf ("%d", &Tab[i]);
  }  
 
  /* menuliskan isi Tab berderet ke kanan*//*
  for (i=0; i<5; i++) {
     printf ("Tab[%d]= %d ;", i,  Tab[i]);
  }
  printf ("\n");
  
  return 0;
}*/

/* Deskripsi : */
/* Mencari nilai maksimum dari sebuah tabel yang berisi 10 nilai integer *//*
#include<stdio.h>
int main ()
{/* Kamus : *//*
  int i;
  int Tab[10]= { 1, 50 , 6 , 200, 3, 100, 30, 8, 99, 100 };
  int min, max;
  /* Algoritma *//*
 min = Tab[0];
 max = Tab[0];
  for (i=1;i< 10; i++)  {
     if (Tab[i]<min) {
        min=Tab[i];
     }
     if (Tab[i]>max){
        max=Tab[i];
     }
  } 
  printf ("Nilai Median= %d", (min+max)/2);  return 0;
}*/

/* Deskripsi : */
/* Mengurutkan elemen tabel dengan metoda makimum sort *//*
#include<stdio.h>
int main ()
{
  /* Kamus : *//*
  int i;
  int Tab[10]= { 1, 50 , 6 , 200, 3, 100, 30, 8, 99, 100 };
  int max; /* indek di mana  Tab[max] bernilai maksimum *//*
  int k, temp; /* variabel kerja */
  /* Algoritma maximum sort menurun, indeks paling kecil berisi nilai paling besar*//*
  for (i=0; i<9; i++ ){
  /* tentukan indeks max, di mana Tab[max] bernilai maksimum *//*
  /* untuk index tabel i..10 *//*
     max = i;
     for (k= i+1 ;k< 10; k++)  {
        if (Tab[k]> Tab[max]) {
           max=k;
        }
     } 
 
    /* Tukar nilai Tab[max] dengan tab[i] *//*
    temp= Tab[i];
    Tab[i]= Tab[max];
    Tab[max] = temp;
  }
  for (i=0;i<10;i++) {
     printf (" %d ; ", Tab[i]);
  }
  return 0;
}*/

/* Deskripsi : */
/* Menentukan posisi di mana elemen tabel bernilai X *//*
#include<stdio.h>

int main ()
{
  /* Kamus : *//*
  int i;
  int Tab[10]= { 1, 50 , 6 , 200, 3, 100, 30, 8, 99, 100 };
  int X; /* indek di mana Tab[max] bernilai maksimum */
 
  /* Algoritma sequential search paling sederhana */
  /* program berhenti pada indeks I di mana nilai diketemukan *//*
  scanf("%d", &X);
  i=0;
  while ( (Tab[i]!=X) && (i<9) ){
    i++;
  } /* Tab[i] == X atau i==9 *//*
  if (Tab[i]==X) {
    printf("indeks bernilai X = %d", i); 
  } else {
    printf("Nilai tidak diketemukan"); 
  } 
  return 0;
}*/

/* Fungsi yang menjumlahkan a+b *//*
#include<stdio.h>
 
int add (int a, int b) {
  /* fungsi bernama add yang menerima dua integer yaitu a dan b */
  /* dan mengirimkan hasil penjumlahan a+b *//*
  return(a+b);
}
 
int inkremen (int a) {
  /* Mengirimkan nilai a yang sudah ditambah dengan 1; perhatikan bahwa nilai a TIDAK DIUBAH*//*
  return (a+1);
}
/************************//*
int main() {
  int x=10;
  int y=25;
  /* pemakaian/pemanggulan fungsi add *//*
  printf("Hasil penjumlahan x+y = %d\n", add(x,y)); 
  printf("Hasil penjumlahan 3+2 = %d\n", add(3,2));
  
  /* pemakaian/pemanggilan fungsi inkremen *//*
  printf("nilai x   : %d\n", x);
  printf("nilai x  setelah ditambah 1 : %d\n", inkremen(x));
  printf("nilai 5  setelah ditambah 1 : %d\n", inkremen(5));
 
  return 0;
}*/

/* Pemakaian standard library untuk membangkitkan bilangan random *//*
#include<stdio.h>
#include <stdlib.h> 
/************************//*
int main() {
   const int MIN=1; 
   const int MAX=100; 
   /* Program akan membangkitkan 5 bilangan random antar MIN sampai MAX  *//* 
    for(int i = 0; i<5; i++) 
        printf(" %d ", rand()%MAX + MIN); 
  return 0;
}*/

/* Deskripsi : */
/* Membaca jari-jari, menghitung luas lingkaran */
/* latihan pemakaian konstanta */
#include<stdio.h>
int main ()
{
  /* Kamus */
  const float pi = 3.1415;
  float r;
  /* program */
 /* baca data */
  printf ("Jari-jari lingkaran =");
  scanf ("%f", &r);
 /* Hitung dan tulis hasil */
  printf ("Luas lingkaran = %f\n", pi * r * r);
  printf ("Akhir program \n");
  return 0;
}


