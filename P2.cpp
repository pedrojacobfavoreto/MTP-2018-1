//Pedro Jacob Favoreto
//11721EAU003

#include<stdio.h>
#include<string.h>

int main()
{
	char bits[256];
	int inteiro=0, nb, escolha, x=0,num=0;
	printf("1-Binario para Decimal\n 2-Binario para Hexadecimal\n 3-Hexadecimal para Decimal\n 4-Hexadecimal para Binario\n 5-Decimal para Binario\n 6-Decimal para Hexadecimal\n 7-Octal para Decimal\n 8-Decimal para Octal ":);
	scanf("%d", &escolha);
	
	switch (escolha){
		case 1:
			printf("Digite um numero binario:\n");
			scanf("%s", &bits);
			num=0;
			for(x=0,bits[x]!= '\0';x++){
				if(bits[x]== '1')
				num = (num*2)+1;
				if(bits[x] == '0')
				num = (num*2);
			}
			printf("%s em decimal eh: %d\n", bits,num);
			break;
		case 2:
		    printf("Digite um numero binario: \n");
		    scanf("%s", &bits);
		    num=0;
		    for(x=0;bits[x]!= '\0';x++){
			    if(bits[x] == '1')
			    num = (num*2)+1;
			    if(bits[x]== '0')
			    num = (num*2);
		    }
		printf("%s em hexadecimal eh: %x\n", bits,num);
		    break;
		case 3:
		    printf("Digite um numero hexadecimal: \n");
		    scanf("%x", &inteiro);
		    printf("%x em binario eh:", inteiro,inteiro);
		    break;
		case 4:
		    printf("Digite um numero hexadecimal: \n");
		    scanf("%x", &inteiro);
		    printf("%x em binario eh:", inteiro);
		    for(nb=0;inteiro>= (1<<nb); nb++);
		    for(x=nb-1; x>=0;X--){
		    	if(inteiro%2==0){
		    		bits[x] = 0;
				}else{
					bits[x] = 1;
				}inteiro = inteiro/2;
			}
			for(x=0;x<=nb-1;x++){
				printf("%d", bits[x]);
			}
			break;
		case 5:
			printf("Digite um numero: \n");
			scanf("%d", &inteiro);
			printf("%d em binario eh: ", inteiro);
			for(nb = 0;inteiro >= (1<<nb); nb++);
			for(x=nb-1;x>=0;x--){
				if(inteiro%2==0){
					bits[x] = 0;
				}else{
					bits[x] = 1;
				}inteiro = inteiro/2;
			}
		    for(x=0;x<=nb-1;x++){
		    	printf("%d", bits[x]);
			}
			break;
		case 6:
			printf("Digite um numero: \n");
			scanf("%d", %inteiro);
			printf("%d em hexadecimal eh: %x\n", inteiro,inteiro);
			break;
		case 7:
			printf("Digite um numero: \n");
			scanf("%o", &inteiro);
			printf("%o em decimal eh: %d\n", inteiro,inteiro);
			break;
		case 8:
			printf("Digite um numero: \n");
			scanf("%d", &inteiro);
			printf("%d em octal eh: %o\n", inteiro,inteiro);
			break;
	}  
}
