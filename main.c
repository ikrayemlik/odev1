#include <stdlib.h>
#include<time.h>
  int main() {
	
int oyuncupuan;	
int ilkzar,ikincizar,toplam;
srand(time(0));	
	do {
	    ilkzar=rand()%6+1;
        ikincizar=rand()%6+1;
        toplam=ilkzar+ikincizar;
        
       if(toplam==7 || toplam==11){
	printf("oyunu kazandiniz");
}
	else if (toplam==2 || toplam==3 || toplam==12)	
        	{
        	printf("oyunu kaybettiniz");
			}
        	else{
        	toplam=oyuncupuan;
        	printf("oyuncu puani: %d\n",oyuncupuan);
			}
        while(1){

        ilkzar=rand()%6+1;
        ikincizar=rand()%6+1;
        toplam=ilkzar+ikincizar;
        
        if(toplam==oyuncupuan){
       	printf("oyunu kazandiniz");
       	break;
		}
		else if(toplam==7){
		printf("oyunu kaybettiniz");
		break;
		}
		else {
	printf("oyuna devam ediniz");
			
	}
    }
    
	}
	
		return 0;
}
