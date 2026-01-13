#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i,j,n,adimsayisi,a;

    printf("n i giriniz");
    scanf("%d",&n);

    int matris[99][99];
    int row=n/2;
    int col=n/2;
    a=1;
    adimsayisi=1;

    matris[row][col]=a++;

    for(i=0;i<(n*n);i++){

        for(j=0;j<adimsayisi && a<=n*n;j++){
            row++;
            matris[row][col]=a++;
        }
        for(j=0;j<adimsayisi && a<=n*n;j++){
            col--;
            matris[row][col]=a++;
        }

        adimsayisi++;

        for(j=0;j<adimsayisi && a<=n*n;j++){
            row--;
            matris[row][col]=a++;
        }

        for(j=0;j<adimsayisi && a<=n*n;j++){
            col++;
            matris[row][col]=a++;
        }
        adimsayisi++;



    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%3d",matris[i][j]);
        }
        printf("\n");
    }
}
