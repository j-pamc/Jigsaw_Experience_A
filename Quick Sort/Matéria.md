
# Quick Sort

Algoritmo de ordenação muito util e utilizado, por realizar a ordenação na estrutura pré existente.

É um algoritmo de ordenação. O algoritmo escolhe um elemento pivô e reorganiza os elementos da matriz para que todos os elementos menores que o elemento pivô escolhido se movam para o lado esquerdo do pivô e todos os elementos maiores se movam para o lado direito. Finalmente, o algoritmo classifica recursivamente os subarrays à esquerda e à direita do elemento pivô.

### Funcionalidade 

Trabalha com a tecnica Dividir e Conquistar (DAC), que está dividida em 3 fases:

1. Dividir: envolve dividir o problema em subproblemas menores.
2. Conquer: Resolva subproblemas chamando recursivamente até serem resolvidos.
3. Combine: Combine os subproblemas para obter a solução final de todo o problema.
   
#### Algoritmo Dividir e Conquistar:  

DAC(a, i, j)
{
    if(pequeno(a, i, j))
      return(Solução(a, i, j))
    outro
      mid = divide(a, i, j) // f1(n)
      b = DAC(a, i, mid) // T(n/2)
      c = DAC(a, meio+1, j) // T(n/2)
      d = combine(b, c) // f2(n)
   retorno(d)
}

#### Relação de Recorrência para o algoritmo DAC: 
Esta é uma relação de recorrência para o programa acima. 

           O(1) se n é pequeno
T(n) = f1(n) + 2T(n/2) + f2(n)
   
#### O que não se qualifica como Dividir e Conquistar

A busca binária é um algoritmo de busca. Em cada etapa, o algoritmo compara o elemento de entrada x com o valor do elemento do meio na matriz. Se os valores corresponderem, retorne o índice do meio. Caso contrário, se x for menor que o elemento do meio, o algoritmo se repetirá para o lado esquerdo do elemento do meio, caso contrário, se repetirá para o lado direito do elemento do meio. Ao contrário da crença popular, este não é um exemplo de Dividir e Conquistar porque há apenas um subproblema em cada etapa (Dividir e conquistar requer que haja dois ou mais subproblemas) e, portanto, este é um caso de Diminuir e Conquistar.

### Complexidade

### Estabilidade

### Representação gráfica

### Implementação em C

1. [# Pimeiro exemplo](1#1#%20Implementação%20em%20c)
2. [# Segundo exemplo](2#2#%20Implementação%20em%20C)
3. [# Terceiro exemplo](3#3#%20Implementação%20em%20c)

## Referencias 

1. https://www.youtube.com/watch?v=wU7Q8Z51MUI
2. https://www.geeksforgeeks.org/quick-sort/
3. https://www.geeksforgeeks.org/introduction-to-divide-and-conquer-algorithm-data-structure-and-algorithm-tutorials/
4. https://gist.github.com/marcoscastro/1dd65900cc7b188e1ab9
5. https://www.programiz.com/dsa/quick-sort
