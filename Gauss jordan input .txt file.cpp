#include<conio.h>
#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    /*Instruksi untuk membuka file txt*/
	ifstream buka;
	buka.open("Gauss jordan.txt");
	float n[100];
	cout<<"Metode Eliminasi Gauss-Jordan\n";
	for (int a=0; a<110; a++){
 	buka>>n[a]; //cout<<"Nilai ke["<<a+1<<"]: "<<n[a]<<endl;
}
     /*Instruksi untuk inisialisasi jumlah baris, kolom & menyimpan data baris & kolom matrix*/
	float a[10][11],t; int i,j,k,c;
    for(i=0;i<10;i++)
    {
    for(j=0;j<110;j++)
{
	a[0][0]=n[0];a[0][1]=n[1];a[0][2]=n[2];a[0][3]=n[3];a[0][4]=n[4];a[0][5]=n[5];a[0][6]=n[6];a[0][7]=n[7];a[0][8]=n[8];a[0][9]=n[9];a[0][10]=n[10];      
	a[1][0]=n[11];a[1][1]=n[12];a[1][2]=n[13];a[1][3]=n[14];a[1][4]=n[15];a[1][5]=n[16];a[1][6]=n[17];a[1][7]=n[18];a[1][8]=n[19];a[1][9]=n[20];a[1][10]=n[21];
	a[2][0]=n[22];a[2][1]=n[23];a[2][2]=n[24];a[2][3]=n[25];a[2][4]=n[26];a[2][5]=n[27];a[2][6]=n[28];a[2][7]=n[29];a[2][8]=n[30];a[2][9]=n[31];a[2][10]=n[32];
	a[3][0]=n[33];a[3][1]=n[34];a[3][2]=n[35];a[3][3]=n[36];a[3][4]=n[37];a[3][5]=n[38];a[3][6]=n[39];a[3][7]=n[40];a[3][8]=n[41];a[3][9]=n[42];a[3][10]=n[43];
	a[4][0]=n[44];a[4][1]=n[45];a[4][2]=n[46];a[4][3]=n[47];a[4][4]=n[48];a[4][5]=n[49];a[4][6]=n[50];a[4][7]=n[51];a[4][8]=n[52];a[4][9]=n[53];a[4][10]=n[54];
	a[5][0]=n[55];a[5][1]=n[56];a[5][2]=n[57];a[5][3]=n[58];a[5][4]=n[59];a[5][5]=n[60];a[5][6]=n[61];a[5][7]=n[62];a[5][8]=n[63];a[5][9]=n[64];a[5][10]=n[65];
	a[6][0]=n[66];a[6][1]=n[67];a[6][2]=n[68];a[6][3]=n[69];a[6][4]=n[70];a[6][5]=n[71];a[6][6]=n[72];a[6][7]=n[73];a[6][8]=n[74];a[6][9]=n[75];a[6][10]=n[76];
	a[7][0]=n[77];a[7][1]=n[78];a[7][2]=n[79];a[7][3]=n[80];a[7][4]=n[81];a[7][5]=n[82];a[7][6]=n[83];a[7][7]=n[84];a[7][8]=n[85];a[7][9]=n[86];a[7][10]=n[87];
	a[8][0]=n[88];a[8][1]=n[89];a[8][2]=n[90];a[8][3]=n[91];a[8][4]=n[92];a[8][5]=n[93];a[8][6]=n[94];a[8][7]=n[95];a[8][8]=n[96];a[8][9]=n[97];a[8][10]=n[98];
	a[9][0]=n[99];a[9][1]=n[100];a[9][2]=n[101];a[9][3]=n[102];a[9][4]=n[103];a[9][5]=n[104];a[9][6]=n[105];a[9][7]=n[106];a[9][8]=n[107];a[9][9]=n[108];a[9][10]=n[109];
}
   }
     /*Instruksi untuk menampilkan urutan matrix*/
	cout<<"\nUrutan Matrix: \n";
    for(i=0;i<10;i++)
    { for(j=0;j<11;j++)
        {
			printf("%.0f ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    /*Instruksi untuk menentukan diagonal matrix */
    for(i=0;i<10;i++)
    {
        for(j=0;j<11;j++)
        {
            if(i!=j)
            {
                t=a[j][i]/a[i][i];
                for(k=0;k<11;k++)
                a[j][k]=a[j][k]-(a[i][k]*t);
            }
        }
    }
    /*Instruksi untuk menampilkan matrix gauss*/
    printf("Matrix Form: \n");
    for(i=0;i<10;i++)
    {
        for(j=0;j<11;j++)
        {
            printf("\t %.2f",a[i][j]);
            }
		    printf("\n");
    }          
    /*Instruksi untuk menampilkan solusi*/
    printf("\n\nSolusi: ");
    for(i=0;i<10;i++)
    {
        printf("%.3f ",a[i][10]/a[i][i]);
    }   
	getch();
}
