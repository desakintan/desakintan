/* Judul		: Tugas 1						*/
/* Deskripsi	: Program mencetak nama dan NIM	*/
/* Dibuat oleh	: Desak Gede Inten Purnawati	*/
/* Tanggal		: 14 September 2021				*/

#include <stdio.h>	

int main(){	
	char nama [100];
	char NIM [20];	
 
	printf("Masukkan nama anda : "); 
	scanf("%[^\n]s", &nama); 
	printf("Masukkan NIM anda : ");
	scanf("%s[\n]", &NIM);	

	printf("Halo %s, NIM anda adalah %s", nama, NIM); 
	return 0;	
}	
