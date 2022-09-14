#include <stdio.h>
#include "matrizes.h"
int main(void) {
int i, j, linhaContigua = 0, colunaContigua = 0, linhaInicial = 0, colunaInicial = 0, linhaMaior = 0, colunaMaior = 0, colunaMaiorInicial = 0, contador = 0, areaMaior = 0;
float desmatadoJaneiro = 0, desmatadoFevereiro = 0, desmatadoMarco = 0, mediaPercentualJaneiro = 0, mediaPercentualFevereiro = 0, mediaPercentualMarco = 0, diferencaJF = 0, diferencaFM = 0, contMaiorFJ = 0, contMaiorFM = 0;
  
/* Grupo: 
Aluno 1: Ana Beatriz de Mello e Alvim Burlas de Moura
Aluno 2: Maria Carolina Marques Segmiller
*/
  
//TAREFA 1
  
  for(i=0;i<l;i++){
    for(j=0;j<c;j++){
      if (janeiro[i][j] > 50){
        desmatadoJaneiro++;
      }
      if (fevereiro[i][j] > 50){
        desmatadoFevereiro++;
      }
      if(marco[i][j] > 50){
        desmatadoMarco++;
      }
    }
  }

  for(i = 0; i < l; i++){
    for(j = 0; j < c; j++){
      if (janeiro[i][j]>fevereiro[i][j]){
        contMaiorFJ++;
      }
      else if(fevereiro[i][j]>marco[i][j]){
        contMaiorFM++;
      }
    }
  }
  
  mediaPercentualJaneiro = (desmatadoJaneiro*100)/(l*c);
  mediaPercentualFevereiro = (desmatadoFevereiro * 100) / (l * c);
  mediaPercentualMarco = (desmatadoMarco*100)/(l*c);
  



 printf("=== Quantidade de áreas desmatadas por mês: ===  \n\nJaneiro: %.2f\nFevereiro: %.2f\nMarço: %.2f\n\n\n=== Média percentual de áreas desmatadas por mês: ===\n\nJaneiro: %.2f%\nFevereiro: %.2f%\nMarço: %.2f%\n\n\n=== Quantas cédulas aumentaram sua quantidade de desmatamento em relação ao mês anterior: ===\n\n De Janeiro para Fevereiro: %.2f\nDe Fevereiro para Março: %.2f\n", desmatadoJaneiro, desmatadoFevereiro, desmatadoMarco, mediaPercentualJaneiro, mediaPercentualFevereiro, mediaPercentualMarco, contMaiorFJ, contMaiorFM);

printf("\n\n\n === Visualização gráfica do aumento de desmatamento ===\n\nCédulas que, de Janeiro para Fevereiro, aumentaram mais que 20 por cento seu nível de desmatamento.\n\n\n");

  //Tarefa 2
  for (i=0;i<24;i++){
    for(j=0; j<27; j++){
      if(fevereiro[i][j] > ((janeiro[i][j] * 20) / 100) + janeiro[i][j]){
        printf(" * ");
      }
      else{
        printf(" _ ");
      }
    }
    printf("\n");
  }
  printf("\n\n\n Cédulas que, de Fevereiro para Março, aumentaram mais que 20 por cento seu nível de desmatamento.\n\n\n");
  for (i=0;i<24;i++){
    for(j=0; j<27; j++){
      if(marco[i][j] > ((fevereiro[i][j] * 20) / 100) + fevereiro[i][j]){
        printf(" * ");
      }
      else{
        printf(" _ ");
      }
    }
    printf("\n");
  }

  //Tarefa 3
printf("\n\n\n=== A maior linha de desmatamento de cada mês: ===");

  
  for(i=0;i<l;i++){
      for(j=0;j<c;j++){
        if (janeiro[i][j] > 50){ //Define o endereço de uma linha de desmatamento
          linhaInicial = i;
          colunaInicial = j;
          colunaContigua = 0;
          for (int m = colunaInicial; m < c; m++){
            if (janeiro[i][m] > 50){
              colunaContigua++;
            }
            else{
              break;
            }   
          }
        }
        if ((colunaContigua) > (colunaMaior)){ //Ve se a linha de desmatamento é maior do que a linha de desmatamento anterior
          colunaMaior = colunaContigua + colunaInicial;
          colunaMaiorInicial = colunaInicial;
          linhaMaior = linhaInicial;
        }
      }
    }

printf("\n\n\n Janeiro: [%d][%d] até [%d][%d]\n", linhaMaior, colunaMaiorInicial, linhaMaior, colunaMaior - 1);
  
  for(i=0;i<l;i++){
    for(j=0;j<c;j++){
      if (fevereiro[i][j] > 50){ //Define o endereço de uma linha de desmatamento
        linhaInicial = i;
        colunaInicial = j;
        colunaContigua = 0;
        for (int m = colunaInicial; m < c; m++){
          if (fevereiro[i][m] > 50){
            colunaContigua++;
          }
          else{
            break;
          }   
        }
      }
      if ((colunaContigua) > (colunaMaior)){ //Ve se a linha de desmatamento é maior do que a linha de desmatamento anterior
        colunaMaior = colunaContigua + colunaInicial;
        colunaMaiorInicial = colunaInicial;
        linhaMaior = linhaInicial;
      }
    }
  }

printf("Fevereiro: [%d][%d] até [%d][%d]\n", linhaMaior, colunaMaiorInicial, linhaMaior, colunaMaior - 1);
  
  for(i=0;i<l;i++){
    for(j=0;j<c;j++){
      if (marco[i][j] > 50){ //Define o endereço de uma linha de desmatamento
        linhaInicial = i;
        colunaInicial = j;
        colunaContigua = 0;
        for (int m = colunaInicial; m < c; m++){
          if (marco[i][m] > 50){
            colunaContigua++;
          }
          else{
            break;
          }   
        }
      }
      if ((colunaContigua) > (colunaMaior)){ //Ve se a linha de desmatamento é maior do que a linha de desmatamento anterior
        colunaMaior = colunaContigua + colunaInicial;
        colunaMaiorInicial = colunaInicial;
        linhaMaior = linhaInicial;
      }
    }
  }

printf("Março: [%d][%d] até [%d][%d].\n\n\n", linhaMaior, colunaMaiorInicial, linhaMaior, colunaMaior - 1);

  //Tarefa Adicional
  int s[l][c];
  int p[l][c];
  int menor=0;
  int maior_p=0, maior_i=0, maior_j=0;
   for (i=0; i < l; i++){
    for(j=0; j < c; j++){
      if(janeiro[i][j]>50){
        s[i][j]=1;
      }
      else
        s[i][j]=0;
    }
  }
  
  for(i=0;i<l;i++){
    p[i][0]=s[i][0];
  }
  for(j=0;j<c;j++){
    p[0][j]=s[0][j];
  }
  for(i=1;i<l;i++){
    for(j=1;j<c;j++){
      if(s[i][j]==1){
        menor = p[i][j-1];
        if(menor > p[i-1][j]){
          menor = p[i-1][j];
        }else if (menor > p[i-1][j-1]){
          menor = p[i-1][j-1];
        }
        p[i][j] = menor + 1;
      }
      else
        p[i][j]=0;
    }
  }
  
  for(i=0;i<l;i++){
    for(j=0;j<c;j++){
      if(maior_p<p[i][j]){
        maior_p=p[i][j];
        maior_i=i;
        maior_j=j;
      }
    }
  }
  printf("\nA submatriz de tamanho máximo de janeiro é: %d\n", maior_p);
  printf("\nA submatriz de janeiro começa em: [%d][%d]\n", maior_i-maior_p+1,maior_j-maior_p+1);
  for(i=maior_i-maior_p+1;i<maior_i;i++){
    for(j=maior_j-maior_p+1;j<maior_j;j++){
      printf("%d ",janeiro[i][j]);
    }
    printf("\n");
  }
  for (i=0; i < l; i++){
    for(j=0; j < c; j++){
      if(fevereiro[i][j]>50){
        s[i][j]=1;
      }
      else
        s[i][j]=0;
    }
  }
  
  for(i=0;i<l;i++){
    p[i][0]=s[i][0];
  }
  for(j=0;j<c;j++){
    p[0][j]=s[0][j];
  }
  for(i=1;i<l;i++){
    for(j=1;j<c;j++){
      if(s[i][j]==1){
        menor = p[i][j-1];
        if(menor > p[i-1][j]){
          menor = p[i-1][j];
        }else if (menor > p[i-1][j-1]){
          menor = p[i-1][j-1];
        }
        p[i][j] = menor + 1;
      }
      else
        p[i][j]=0;
    }
  }
  
  for(i=0;i<l;i++){
    for(j=0;j<c;j++){
      if(maior_p<p[i][j]){
        maior_p=p[i][j];
        maior_i=i;
        maior_j=j;
      }
    }
  }
  printf("\nA submatriz de tamanho máximo de fevereiro é: %d\n", maior_p);
  printf("\nA submatriz de fevereiro começa em: [%d][%d]\n", maior_i-maior_p+1,maior_j-maior_p+1);
  for(i=maior_i-maior_p+1;i<maior_i;i++){
    for(j=maior_j-maior_p+1;j<maior_j;j++){
      printf("%d ",fevereiro[i][j]);
    }
    printf("\n");
  }
   for (i=0; i < l; i++){
    for(j=0; j < c; j++){
      if(marco[i][j]>50){
        s[i][j]=1;
      }
      else
        s[i][j]=0;
    }
  }
  
  for(i=0;i<l;i++){
    p[i][0]=s[i][0];
  }
  for(j=0;j<c;j++){
    p[0][j]=s[0][j];
  }
  for(i=1;i<l;i++){
    for(j=1;j<c;j++){
      if(s[i][j]==1){
        menor = p[i][j-1];
        if(menor > p[i-1][j]){
          menor = p[i-1][j];
        }else if (menor > p[i-1][j-1]){
          menor = p[i-1][j-1];
        }
        p[i][j] = menor + 1;
      }
      else
        p[i][j]=0;
    }
  }
  
  for(i=0;i<l;i++){
    for(j=0;j<c;j++){
      if(maior_p<p[i][j]){
        maior_p=p[i][j];
        maior_i=i;
        maior_j=j;
      }
    }
  }
  printf("\nA submatriz de tamanho máximo de março é: %d\n", maior_p);
  printf("\nA submatriz de março começa em: [%d][%d]\n\n", maior_i-maior_p+1,maior_j-maior_p+1);
  for(i=maior_i-maior_p+1;i<maior_i;i++){
    for(j=maior_j-maior_p+1;j<maior_j;j++){
      printf("%d ",marco[i][j]);
    }
    printf("\n");
  }
  return 0;
}
