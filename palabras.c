#include <stdio.h>

int main(){
	int contador=0;
	char casillas[4];
	char abecedario[27];

	for(int i=0; i<26;i++){
		abecedario[i]='a'+i;
		//printf("%c",abecedario[i]);
	}

	abecedario[26]=164;
	printf("%c",abecedario[26]);

	for(int i=0; i<27;i++){
		casillas[0]=abecedario[i];

		for(int j=0;j<26;j++){
			casillas[1]=abecedario[j];
			
			for(int k=0;k<25;k++){
				casillas[2]=abecedario[k];
				
				for(int l=0;l<24;l++){
					casillas[3]=abecedario[l];
					contador = contador + 1;
					if(casillas[0] != casillas[1] && casillas[0] != casillas[2] && casillas[0] != casillas[3]
					&& casillas[1] != casillas[0] && casillas[1] != casillas[2] && casillas[1] != casillas[3]
					&& casillas[2] != casillas[0] && casillas[2] != casillas[1] && casillas[2] != casillas[3]
					&& casillas[3] != casillas[0] && casillas[3] != casillas[1] && casillas[3] != casillas[2]) {
					printf("%d %.4s\n",contador, casillas);
					}
				}
			}
		}
	}
	return 0;
}