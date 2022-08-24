#include <conio.h>
#include <stdio.h>


int main(){
	
    int A[100];
    int n;
    printf("Nhap vao so luong phan tu cua mang la: ");
    scanf("%d", &n);

    //nhap mang
    for(int i=0; i<n; i++)
    {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &A[i]);
    }

    //dao nguoc mang
    int B[100];
    for(int i=n-1; i>=0; i--)
    {
        for(int j=0; j < n; j++)
        {
            B[j] = A[i];
        }
    }

    //xuat mang
    for(int i=0; i<n; i++)
    {
        printf("%4d", B[i]);
    }
    printf("\n");

}
