#include<stdio.h>
#include<locale.h>

#define max 50

void hex(int h);
void octal(int e);
void bin(int b);

int main() {
	int d, op;
	setlocale(LC_ALL, "Portuguese");
	printf("---------------------------------\n");
	printf("|       CONVERSOR DECIMAL       |\n");
	printf("---------------------------------\n");
	printf("|   OPÇÃO:  |        TIPO:      |\n");
	printf("|     1     |  PARA HEXADECIMAL.|\n");
	printf("|     2     |  PARA OCTADECIMAL.|\n");
	printf("|     3     |  PARA BINÁRIO.    |\n");
	printf("---------------------------------\n");
	printf("Escolha uma das opções: ");
	scanf("%i", &op);
	switch(op){
		case 1:
			printf("Digite um valor inteiro e em decimal: ");
			scanf("%i", &d);
			printf("%i(dec) = ", d);
			hex(d);
			printf("(hex).");
			break;
        case 2:
            printf("Digite um valor inteiro e em decimal: ");
			scanf("%i", &d);
			printf("%i(dec) = ", d);
            octal(d);
            printf("(octal).");
			break;
		case 3:
            printf("Digite um valor inteiro e em decimal: ");
			scanf("%i", &d);
			printf("%i(dec) = ", d);
            bin(d);
            printf("(bin).");
			break;
		default:
			break;
	}
	return(0);
}

void hex(int h){
	int r = 0, mod[max];
	while(h >= 1){
		mod[r] = h % 16;
		h = h / 16;
		r++;
	}
	for(int i = (r - 1); i >= 0; i--){
		if(mod[i] == 10){
			printf("A");
		} else if(mod[i] == 11){
			printf("B");
		} else if(mod[i] == 12){
			printf("C");
		} else if(mod[i] == 13){
			printf("D");
		} else if(mod[i] == 14){
			printf("E");
		} else if(mod[i] == 15){
			printf("F");
		} else {
			printf("%i", mod[i]);
		}
	}
}

void octal(int e){
    int l = 0, mod[max];
	while(e >= 1){
		mod[l] = e % 8;
		e = e / 8;
		l++;
    	}
    for(int i = l - 1; i >= 0; i--){
       	printf("%i", mod[i]);
   }
}

void bin(int b){
   int s = 0, mod[max];
	while(b >= 1){
		mod[s] = b % 2;
		b = b / 2;
		s++;
	}
   for(int i = s - 1; i >= 0; i--){
	printf("%i", mod[i]);
   }
}