// Lucas Viscovini
#include <stdio.h>
#include <stdlib.h>

// QUESTÃO 1
void opcao1() {
    printf("\n1) O que sao os pre-definidos da linguagem de programacao C?\n");
    printf("R: Sao palavras reservadas da linguagem.\n");
    printf("Os tres tipos sao: palavras reservadas, operadores e caracteres especiais.\n");
    printf("A diferença entre os pre-definidos e os verificadores eh que os pre-definidos\n");
    printf("fazem parte da linguagem e tem funcao propria, enquanto os verificadores\n");
    printf("sao usados para validar ou comparar valores.\n");
}

// QUESTÃO 2 
void opcao2() {
    int dia, mes, ano;
    printf("\nDigite o dia do seu nascimento: ");
    scanf("%d", &dia);
    printf("Digite o mes do seu nascimento: ");
    scanf("%d", &mes);
    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &ano);

    while (dia > 31 || mes > 12 || ano > 2025 || dia < 1 || mes < 1 || ano < 1 ||
          (mes == 2 && dia > 28) || 
          ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30)) {

        printf("\nData invalida, digite tudo outra vez:\n");
        printf("Digite o dia do seu nascimento: ");
        scanf("%d", &dia);
        printf("Digite o mes do seu nascimento: ");
        scanf("%d", &mes);
        printf("Digite o ano do seu nascimento: ");
        scanf("%d", &ano);
    }

    printf("\nSua data de nascimento eh: %02d/%02d/%d\n", dia, mes, ano);
}

// QUESTÃO 3 
void opcao3() {
    int n, fatorial = 1;
    printf("\nInforme o valor de n: ");
    scanf("%d", &n);
    int clone = n;

    for (int i = n; i >= 1; i--) {
        fatorial *= i;
    }
    printf("O fatorial de %d eh %d\n", clone, fatorial);
}

// QUESTÃO 4 
void opcao4() {
    int a, b, c, d, e, aux;
    printf("\nDigite cinco valores inteiros (a, b, c, d, e):\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    
    int *v[] = {&a, &b, &c, &d, &e};
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (*v[i] > *v[j]) {
                aux = *v[i];
                *v[i] = *v[j];
                *v[j] = aux;
            }
        }
    }

    printf("\nOrdem Crescente: %d %d %d %d %d\n", a, b, c, d, e);
    printf("Ordem Decrescente: %d %d %d %d %d\n", e, d, c, b, a);
}

// QUESTÃO 5 
int ehPrimo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void opcao5() {
    int n, contador = 0, num = 3;
    printf("\nDigite quantos pares de primos gemeos voce deseja encontrar: ");
    scanf("%d", &n);

    printf("\nPrimos gemeos encontrados:\n");
    while (contador < n) {
        if (ehPrimo(num) && ehPrimo(num + 2)) {
            printf("(%d, %d)\n", num, num + 2);
            contador++;
        }
        num++;
    }
}

void opcao6() 
{
    int ano_atual=2025;
    int ano_jovem=0;
    char sexo;

    printf("\nQual o seu ano de nascimento?\n");
}

void opcao7() 
{

}

void opcao8() 
{

}

void sair() {
    printf("\nSaindo do programa...\n");
}

void menu() {
    int escolha;
    do {
        printf("\n=== MENU ===\n");
        printf("1. O que são pré-definidos da linguagem C?\n");
        printf("2. Validar data de nascimento\n");
        printf("3. Calcular fatorial\n");
        printf("4. Ordenar 5 números\n");
        printf("5. Encontrar primos gêmeos\n");
        printf("6. Alistamento Militar\n");
        printf("7. \n");
        printf("8. \n");
        printf("9. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1: opcao1(); break;
            case 2: opcao2(); break;
            case 3: opcao3(); break;
            case 4: opcao4(); break;
            case 5: opcao5(); break;
            case 6: opcao6(); break;
            case 7: opcao7(); break;
            case 8: opcao8(); break;
            case 9: sair(); break;
            default: printf("\nOpção inválida! Tente novamente.\n");
        }
    } while (escolha != 9);
}

int main() {
    menu();
    return 0;
}
