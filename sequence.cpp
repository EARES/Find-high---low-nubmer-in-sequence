#include<stdio.h>
float enbuyuk(float a[4]){
      float max=a[0];
      int i;
    for (i=0; i<4; i++) {
        if(max<a[i]){
        max=a[i];
        }
        }
     return max;  
}   
float ortalama(float b[4]){
      float sayac=0;
      float toplam =0;
      int i;
      for (i=0; i<4; i++){
      toplam=toplam+b[i];
      sayac++;
}
      return toplam/sayac;
      }
      int main(){
    float min,sayac=0,toplam=0, buyuk,ort;
    int i;
    float dizi[4];
    for (i=0; i<4; i++){
    printf("dizinin %d. elemaný: \n",i);
    scanf("%f",&dizi[i]);
}
   buyuk=enbuyuk(dizi);
   printf("en büyük = %f",buyuk);
   ort=ortalama(dizi);
   printf("en büyük = %f",ort);
    getchar();
    getchar ();
}

 


