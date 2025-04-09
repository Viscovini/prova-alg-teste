#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void menu();
void opcao1();
void opcao2();
void opcao3();
void opcao4();
void opcao5();
void opcao6();
void opcao7();
void opcao8();
void opcao9();
void opcao10();
void opcao11();
void opcao12();
void opcao13();
void opcao14();
void opcao15();
void sair();
void limpar_tela();

//1
void digita_oi();

//2 
void imprime_texto(char *t);

//3
char *imprime_texto3(char *t);

//4

void bhaskara(int a, int b, int c);

//5

void duracao_fabrica(int s);

//6
int verifica_idade(int ano, int mes, int dias);

//7

int numero_perfeito(int a);

//8
char *nadador(int idade );
//9
char *positivo_ou_negativo(int x);
int posi_ou_nega(int x);
//10
int par_ou_impar(int x);
//11
char *conceito(float media);
//12
void ordena(int X[3]);
//13
char *triangulo(int a, int b, int c);
//14
float media(int n, int V[n]);
//15
int potencia(int x, int z);




void menu()
{
    int escolha;
    do
    {
        
        printf("\n=== MENU ===\n");
        printf("Questao 1\n");
        printf("Questao 2 \n");
        printf("Questao 3\n");
        printf("Questao 4\n");
        printf("Questao 5\n");
        printf("Questao 6\n");
        printf("Questao 7\n");
        printf("Questao 8\n");
        printf("Questao 9\n");
        printf("Questao 10\n");
        printf("Questao 11\n");
        printf("Questao 12\n");
        printf("Questao 13\n");
        printf("Questao 14\n");
        printf("Questao 15\n");
        printf("Sair (0)\n");
        printf("limpar tela 16\n ");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        switch(escolha)
        {
            case 1: opcao1(); break;
            case 2: opcao2(); break;
            case 3: opcao3(); break;
            case 4: opcao4(); break;
            case 5: opcao5(); break;
            case 6: opcao6(); break;
            case 7: opcao7(); break;
            case 8: opcao8(); break;
            case 9: opcao9(); break;
            case 10: opcao10(); break;
            case 11: opcao11(); break;
            case 12: opcao12(); break;
            case 13: opcao13(); break;
            case 14: opcao14(); break;
            case 15: opcao15(); break;
            case 0: sair(); break;
            case 16: limpar_tela(); break;
            default: printf("\n opcao invalida, tente novamente: \n ");

        }
    }while(escolha !=0);
}
int main()
{
    menu();
    return 0;
}

void opcao1()
{
    limpar_tela();
    printf("1 - Faca uma funcao que nao receba parametros e escreva na tela (print) o texto “OI” " );
    digita_oi();
}
void digita_oi()
{
    printf("\n OI");

}

void opcao2()
{
    limpar_tela();

    printf("2 - Faca uma funcao que receba um texto por parametro e escreva-o na tela(print).");
    char *t = "salve o corinthians";    
    imprime_texto(t);

    
}

void imprime_texto(char *t)
{
    printf("\n%s\n", t);
}

void opcao3()
{
    limpar_tela();
    printf("3 - Faca uma funcao que receba um texto por parametro e escreva-o na tela(print), em seguida retorne “Ok”");
    char *m = "Pois que aproveita o homem ganhar o mundo inteiro, se perder a sua alma? Ou que dará o homem em recompensa da sua alma?";
    char *g = imprime_texto3(m);
    printf("%s", g);
    
}

char *imprime_texto3(char *t)
{
    printf("\n%s\n", t);
    return "OK";

}

void opcao4()
{
    limpar_tela();
    int x, y, z;
    printf("\n 4 - Faca um procedimento que recebe por parametro os valores necessario para o calculo da formula de baskara e imprima as suas raizes, caso seja possivel calcular.\n");
    printf("informe o valor de (a), (b), (c) para calcular a formula de baskara: \n");
    scanf("%d %d %d", &x, &y, &z);
    bhaskara(x, y, z);

    
}
void bhaskara(int a, int b, int c)
{
    double delta;
    double raiz_delta, raiz1, raiz2;
    delta = ((b*b)-(4*a*c));
    printf("\n (%d^2)-4*%d*%d", b,a,c);
    printf("\ndelta = %.2f", delta);
    int div = 2*a;
    if(delta<0)
    {
        printf("invalido, delta nao pode ser negativo:");
        exit(1);

    }
    raiz_delta = sqrt(delta);
    raiz1 = (-b+raiz_delta)/div;
    raiz2 = ((-b - raiz_delta)/2*a);
    printf("\na raiz 1 eh %.2f", raiz1);
    printf("\na raiz 2 eh %.2f", raiz2);

}

void opcao5()
{
    limpar_tela();
    int segundos;
    printf("5 - Faca um procedimento que recebe por parametro o tempo de duracao de uma fabrica expressa em segundos \n e imprima esse tempo em horas, minutos e segundos.");
    printf("\n informe a duracao em segundos:\n");
    scanf("%d", &segundos);
    duracao_fabrica(segundos);

    
}
void duracao_fabrica(int s)
{
    int hora, minuto, segundo, sobra;
    hora = s/3600;
    sobra = s%3600;
    minuto = sobra/60;
    segundo = sobra %60;
    printf("a hora eh -> |%d:%d:%d|", hora, minuto, segundo);

}

void opcao6()
{
    limpar_tela();
    printf("6 - Faca uma funcao que recebe a idade de uma pessoa em anos, meses e dias e retorna essa idade expressa em dias.");
    printf("\n digite sua data de nascimento na ordem |dia|mes|ano| \n");
    int dia, mes, ano;
    scanf("%d %d %d", &dia, &mes, &ano);
    int z;
    z = verifica_idade(dia, mes, ano);
    printf("\n voce tem aproximadamente %d dias de vida:", z);

    
}
int verifica_idade(int dias, int mes, int ano)
{
    if(ano>2025 || ano <1900 )
    {
        printf("\n data invalida:");
        return 0;

    }
    if(mes > 12 || mes <=0)
    {
        printf("\n data invalida:");
        return 0;
    }
    if(dias <=0 || dias >31)
    {
        printf("\n data invalida:");
        return 0;
    }
    ano = 2025 - ano;
    int quant_dias_ano=365;
    int quant_dias_mes=31;

    dias += (quant_dias_ano*ano) + (quant_dias_mes * mes);


   

    


    return dias;
}

void opcao7()
{
    limpar_tela();
    printf("7 - Faça uma função que verifique se um valor é perfeito ou não. Um valor \n é dito perfeito quando ele é igual a soma dos seus divisores excetuando ele próprio. \n (Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores). A função deve retornar o valor inteiro 1 para verdadeiro e 0 caso contrário.");
    int x;
    printf("\n digite um numero para saber se é perfeito ou nao:");
    scanf("%d", &x);
    int z;
    z= numero_perfeito(x);
    if(z==1)
    {
        printf("eh verdadeiro %d", z);
    }
    if (z==0)
    {
        printf("eh falso %d", z);
    }
    
    
}
int numero_perfeito(int a)
{
    int soma=0;
    for(int i=1; i<a; i++)
    {
        if(a%i==0)
        {
            printf("%d + ", i);
            soma +=i;
        }

    }

    if(soma ==a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void opcao8()
{
    limpar_tela();
    int idade;
    printf("8 - Faca um procedimento que recebe a idade de um nadador por parametro \n e retorna, também por parametro, a categoria desse nadador de acordo com a tabela abaixo:");
    printf("\n+===================================================================+\n");
    printf("| %-30s | | %-30s | \n", "idade", "categoria");
    printf("+===================================================================+\n");
    printf("| %-30s | | %-30s | \n", "5 a 7 anos", "infantil A");
    printf("| %-30s | | %-30s | \n", "8 a 10 anos", "infantil B");
    printf("| %-30s | | %-30s | \n", "11 a 13 anos", "juvenil A");
    printf("| %-30s | | %-30s | \n", "14 a 17 anos", "juvenil B");
    printf("| %-30s | | %-30s | \n", "maiores de 18 anos", "Adultos");
    printf("+====================================================================+\n");


    printf("\n Digite a idade do nadador:");
    scanf("%d", &idade);
    char *c;
    c = nadador(idade);
    if(c!=NULL)
    {
        printf("a idade eh %d e a categoria eh %s", idade, c);

    }
    else
    {
        printf("idade invalida:");
    }


}
char *nadador(int idade )
{
    if(idade<5)
    {
        return NULL;
    }
    if(idade>=5 && idade <=7)
    {
        return "infantil A";
    }
    if(idade>=8 && idade<=10)
    {
        return "infantil B";
    }
    if(idade>=11 && idade <=13)
    {
        return "juvenil A";
    }
    if(idade>=14 && idade <=17)
    {
        return "juvenil B";
    }
    if(idade>=18)
    {
        return "Adultos";
    }


}

void opcao9()
{
    limpar_tela();
    int a;
    printf("9 - Faca uma funcao que recebe um valor inteiro e verifica se o valor eh positivo ou negativo. A funcao deve retornar um valor inteiro.");
    printf("\n Digite um valor para verificar se eh positivo ou negativo:");
    scanf("%d", &a);
    char *s;
    s= positivo_ou_negativo(a);
    printf("%d %s", a, s);
    int g;
    g = posi_ou_nega(a);
    printf("\no resultado inteiro da funcao eh %d", g);
    
}
int posi_ou_nega(int x)
{
    if(x<0)
    {
        return 10000;
    }
    if(x>0)
    {
        return 20000;
    }
}
char *positivo_ou_negativo(int x)
{
    if(x<0)
    {
        
        return "eh negativo";
    }
    else
    {
        return " eh positivo";
    }

}

void opcao10()
{
    int num;
    printf("10 - Faca uma funcao que recebe um valor inteiro e verifica se o valor eh par ou impar. A funcao deve retornar um valor inteiro.");
    printf("\ndigite um numero para a verificacao de par ou impar:");
    scanf("%d", &num);
    int r;
    r = par_ou_impar(num);
    if(r == 1)
    {
        printf("o numero %d eh impar", num);
    }
    else
    {
        printf("o numero %d eh par", num);
    }
    
    
}
int par_ou_impar(int x)
{
    if(x%2==0)
    {
        return 0;
    }
    if(x%2!=0)
    {
        return 1;
    }
    

}

void opcao11()
{
    printf("11 - Faca uma funcao que recebe a media final de um aluno por parametro e retorna o seu conceito, conforme a tabela abaixo:");
    printf("\n+===================================================================+\n");
    printf("| %-30s | | %-30s | \n", "nota", "conceito");
    printf("+===================================================================+\n");
    printf("| %-30s | | %-30s | \n", "0,0 a 4.9", "D");
    printf("| %-30s | | %-30s | \n", "5 a 6.9", "C");
    printf("| %-30s | | %-30s | \n", "7 a 8.9", "B");
    printf("| %-30s | | %-30s | \n", "9 a 10", "A");
    printf("+====================================================================+\n");
    float media_final;
    printf("\ndigite a media final para saber o conceito que a nota se encaixa:\n");
    scanf("%f", &media_final);
    char *c;
    c=conceito(media_final);
    printf("%s", c);


    
}
char *conceito(float media)
{
    if(media<0)
    {
        return "isso eh impossivel";
    }
    if(media>=0 && media<=4.9)
    {
        return "D";
    }
    if(media>=5 && media<=6.9)
    {
        return "C";
    }
    if(media>=7 && media<8.9)
    {
        return "B";
    }
    if(media>=9 && media<=10)
    {
        return "A";
    }
    if(media>10)
    {
        return "isso eh impossivel";
    }


}

void opcao12()
{
    printf("12 - Faca um procedimento que recebe 3 valores inteiros por parametro e imprima-os ordenados em ordem crescente.");
    int V[3];
    printf("\n escolha o valor de 3 numeros inteiros:\n");
    for(int i=0; i<3; i++)
    {
        printf("\n escreva o numero %d da sequencia:", i+1);
        scanf("%d", &V[i]);
    }
    ordena(V);
}
void ordena(int X[3])
{
    int aux=0;
    for(int i=0; i<3; i++)
    {
        for(int j=i+1; j<3; j++)
        {
            if(X[i]> X[j])
            {
                aux= X[i];
                X[i]=X[j];
                X[j]=aux;
            }
        }


    }

    for(int i=0; i<3; i++)
    {
        printf("%d ", X[i]);
    }
    printf("\n");

}

void opcao13()
{
    limpar_tela();
    int a,b,c;
    printf("13 - Escreva um procedimento que recebes 3 valores reais X, Y e Z e que verifique se esses valores podem ser os comprimentos dos lados de um triângulo e, neste caso, retornar qual o tipo de triângulo formado. Para que X, Y e Z formem um triângulo é necessário que a seguinte propriedade seja satisfeita: o comprimento de cada lado de um triângulo é menor do que a soma do comprimento dos outros dois lados. O procedimento deve identificar o tipo de triângulo formado observando as seguintes definições:");
    printf("\n escolha os valores dos lados a, b e c do triangulo respectivamente:");
    scanf("%d %d %d", &a, &b, &c);
    char *t;
    t= triangulo(a, b, c);
    printf("%s", t);


}
char *triangulo(int a, int b, int c)
{
    int bc= b-c, ac= a-c, ab= a-b;

    if ((((abs (bc) < a)  && (a<b+c) )    || ((abs (ac)  <b)  &&  (b<a+c)))      || (((abs (ab) < c)   && (c<a+b))))
       {
        if((a==b) && (b==c))
        {
            return"triangulo equilatero";
        }
        if(((a!= b) && (b!=c))&& (( a!=c)))
        {
            return"triangulo escaleno";
        }
        if (((a==b)  &&( b!=c)) && (( c!=a)) || ((a!=b) && (a==c)) && ((b!=c)))
        {
            return"triangulo isoceles";

        }
        }
     else
    {
        return"nao e triangulo";
    }
}


void opcao14()
{
    limpar_tela();
    int n;
    printf("14 - Faca uma funcao que leia um numero nao determinado de valores positivos e retorna a media aritmetica dos mesmos.");
    printf("\ndigite a quantidade de numeros que voce deseja adicionar para fazer a media: ");
    scanf("%d", &n);
    int V[n];
    for(int i =0; i<n; i++)
    {
        printf("\n digite o numero %d de %d: ", i+1, n);
        scanf("%d", &V[i]);
    }

    float mediaa =0;
    mediaa = media(n, V);
    printf("a media eh %.2f", mediaa);
}
float media(int n, int V[n])
{
    int soma=0;
    float medias;
    for(int i=0; i<n; i++)
    {
        soma += V[i];

    }
    medias =soma/n;

    return medias;

}

void opcao15()
{
    int x, z;
    printf("15 - Escreva uma funcao que recebe, por parametro, dois valores X e Z e calcula e retorna X^z . (sem utilizar funções ou operadores de potencia prontos)");
    printf("\ndigite um numero para ser a base e outro para ser o expoente: ");
    scanf("%d %d", &x, &z);
    int num;
    num = potencia(x, z);
    printf("a base eh %d, o expoente %d e o resultado eh %d", x, z, num);


}

int potencia(int x, int z)
{
    int multi=1;
    for(int i=1; i<=z; i++)
    {
        multi *= x;
        
    }
    return multi;
    


}


void sair()
{

}
void limpar_tela()
{
    #ifdef _WIN32
        system("cls");
    #else 
        system("clear");

    #endif

}
