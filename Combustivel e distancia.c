#include <stdio.h>

//Escrever um algoritmo para determinar o consumo médio de um automóvel sendo fornecida 
//a distância total percorrida pelo automóvel e o total de combustível gasto. 

int main() {
  float distancia,volume,consumo;

  printf("Distancia percorrida eh de (km): \n");
  scanf("%f", &distancia);

  printf("Volume gasto de combustivel (l): \n");
  scanf("%f", &volume);

  consumo = distancia/volume;
  
  printf("Seu consumo medio eh de: \n");
  printf("%.3f km/l\n", consumo);
}
