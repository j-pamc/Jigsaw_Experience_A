
# Quick Sort

Algoritmo de ordenação muito util e utilizado, por realizar a ordenação na estrutura pré existente.

É um algoritmo de ordenação. O algoritmo escolhe um elemento pivô e reorganiza os elementos da matriz para que todos os elementos menores que o elemento pivô escolhido se movam para o lado esquerdo do pivô e todos os elementos maiores se movam para o lado direito. Finalmente, o algoritmo classifica recursivamente os subarrays à esquerda e à direita do elemento pivô.

### Funcionalidade 

#### DAC - Algoritmo Dividir e Conquistar

Trabalha com a tecnica Dividir e Conquistar (DAC), que está dividida em 3 fases:

1. Dividir: envolve dividir o problema em subproblemas menores.
2. Conquer: Resolva subproblemas chamando recursivamente até serem resolvidos.
3. Combine: Combine os subproblemas para obter a solução final de todo o problema.
   
##### Complexidade de tempo do algoritmo de divisão e conquista

    T(n) = aT(n/b) + f(n),
    
    onde,
        n = tamanho da entrada
        a = número de subproblemas na recursão
        n/b = tamanho de cada subproblema. Todos os subproblemas são assumidos como tendo o mesmo tamanho.
        f(n) = custo do trabalho realizado fora da chamada recursiva, que inclui o custo de dividir o problema e o custo de mesclar as soluções
   
##### O que não se qualifica como Dividir e Conquistar

A busca binária é um algoritmo de busca. Em cada etapa, o algoritmo compara o elemento de entrada x com o valor do elemento do meio na matriz. Se os valores corresponderem, retorne o índice do meio. Caso contrário, se x for menor que o elemento do meio, o algoritmo se repetirá para o lado esquerdo do elemento do meio, caso contrário, se repetirá para o lado direito do elemento do meio. Ao contrário da crença popular, este não é um exemplo de Dividir e Conquistar porque há apenas um subproblema em cada etapa (Dividir e conquistar requer que haja dois ou mais subproblemas) e, portanto, este é um caso de Diminuir e Conquistar.

#### Vantagens

Vantagens do Algoritmo Dividir e Conquistar:

O problema difícil pode ser resolvido facilmente.
Ele divide todo o problema em subproblemas para que possa ser resolvido paralelamente garantindo o multiprocessamento
Usa com eficiência a memória cache sem ocupar muito espaço
Reduz a complexidade de tempo do problema
Resolução de problemas difíceis: A técnica de dividir e conquistar é uma ferramenta para resolver problemas difíceis conceitualmente. por exemplo, quebra-cabeça da Torre de Hanói. Requer uma maneira de dividir o problema em subproblemas e resolvê-los como casos individuais e, em seguida, combinar os subproblemas ao problema original.
Eficiência do algoritmo: O paradigma de dividir e conquistar geralmente ajuda na descoberta de algoritmos eficientes. Foi a chave, por exemplo, para os algoritmos Quicksort e Mergesort e rápidas transformadas de Fourier. Em todos esses exemplos, as abordagens D e C levaram a uma melhoria no custo assintótico da solução. Em particular, se os casos base têm tamanho limitado constante, o trabalho de dividir o problema e combinar as soluções parciais é proporcional ao tamanho n do problema, e há um número limitado p de subproblemas de tamanho n/p em cada estágio , então o custo do algoritmo de divisão e conquista será O(n log n).
 Paralelismo: Normalmente algoritmos DAC são usados ​​em máquinas multiprocessadas com sistemas de memória compartilhada onde a comunicação de dados entre processadores não precisa ser planejada com antecedência, pois subproblemas distintos podem ser executados em diferentes processadores.
 Acesso à memória: Esses algoritmos naturalmente fazem um uso eficiente dos caches de memória. Já que os subproblemas são pequenos o suficiente para serem resolvidos em cache sem usar a memória principal que é mais lenta. Qualquer algoritmo que usa cache de forma eficiente é chamado de esquecimento de cache.
 Controle de arredondamento: Em cálculos com aritmética arredondada, por exemplo, com números de ponto flutuante, um algoritmo de divisão e conquista pode produzir resultados mais precisos do que um método iterativo superficialmente equivalente. Por exemplo, pode-se adicionar N números por um loop simples que adiciona cada dado a uma única variável ou por um algoritmo D e C que divide o conjunto de dados em duas metades, calcula recursivamente a soma de cada metade e, em seguida, adiciona o duas somas. Embora o segundo método execute o mesmo número de adições que o primeiro e pague a sobrecarga das chamadas recursivas, geralmente é mais preciso.

#### Desvantagens 

Envolve recursão que às vezes é lenta
A eficiência depende da implementação da lógica
Pode travar o sistema se a recursão for executada rigorosamente.
Overhead: O processo de dividir o problema em subproblemas e depois combinar as soluções pode exigir tempo e recursos adicionais. Essa sobrecarga pode ser significativa para problemas que já são relativamente pequenos ou que possuem uma solução simples.

Complexidade: Dividir um problema em subproblemas menores pode aumentar a complexidade da solução geral. Isso é particularmente verdadeiro quando os subproblemas são interdependentes e devem ser resolvidos em uma ordem específica.
Dificuldade de implementação: Alguns problemas são difíceis de dividir em subproblemas menores ou requerem um algoritmo complexo para fazê-lo. Nesses casos, pode ser desafiador implementar uma solução de dividir e conquistar.
Limitações de memória: Ao trabalhar com grandes conjuntos de dados, os requisitos de memória para armazenar os resultados intermediários dos subproblemas podem se tornar um fator limitante.

Soluções subótimas: Dependendo de como os subproblemas são definidos e como são combinados, uma solução de dividir e conquistar pode nem sempre produzir a solução ideal. Em alguns casos, pode ser necessário aplicar técnicas de otimização adicionais para melhorar a solução final.

Dificuldade de paralelização: Em alguns casos, dividir o problema em subproblemas e resolvê-los de forma independente pode não ser facilmente paralelizável, levando ao uso ineficiente dos recursos computacionais.

### Complexidade

O tempo gasto pelo QuickSort, em geral, pode ser escrito da seguinte forma. 

 T(n) = T(k) + T(nk-1) +  \theta                     (n)

Os primeiros dois termos são para duas chamadas recursivas, o último termo é para o processo de partição. k é o número de elementos menores que o pivô. 
O tempo gasto pelo QuickSort depende da matriz de entrada e da estratégia de partição. Seguem três casos.

Pior caso: 
O pior caso ocorre quando o processo de partição sempre escolhe o maior ou o menor elemento como pivô. Se considerarmos a estratégia de partição acima, onde o último elemento é sempre escolhido como um pivô, o pior caso ocorreria quando o array já estivesse classificado em ordem crescente ou decrescente. A seguir está a recorrência para o pior caso.  

 T(n) = T(0) + T(n-1) +  \theta                     (n) que é equivalente a T(n) = T(n-1) +  \theta                     (n)

A solução para a recorrência acima é                           (n 2 ). 

Melhor caso:
O melhor caso ocorre quando o processo de partição sempre escolhe o elemento do meio como pivô. O seguinte é a recorrência para o melhor caso. 

 T(n) = 2T(n/2) +  \theta                     (n)

A solução para a recorrência acima é                          (nLogn). Pode ser resolvido usando o caso 2 do Teorema Mestre .

Caso médio: 
Para fazer a análise do caso médio, precisamos considerar todas as permutações possíveis da matriz e calcular o tempo gasto por cada permutação, o que não parece fácil . 
Podemos ter uma ideia do caso médio considerando o caso em que a partição coloca O(n/9) elementos em um conjunto e O(9n/10) elementos em outro conjunto. Segue-se a recorrência para este caso.  

 T(n) = T(n/9) + T(9n/10) +  \theta                     (n)

A solução da recorrência acima também é O(nLogn):

Embora a complexidade de tempo de pior caso do QuickSort seja O(n 2 ), que é mais do que muitos outros algoritmos de classificação como Merge Sort e Heap Sort , o QuickSort é mais rápido na prática, porque seu loop interno pode ser implementado com eficiência na maioria das arquiteturas e na maioria dados do mundo real. O QuickSort pode ser implementado de diferentes maneiras, alterando a escolha do pivô, de modo que o pior caso raramente ocorra para um determinado tipo de dado. No entanto, a classificação por mesclagem geralmente é considerada melhor quando os dados são grandes e armazenados em armazenamento externo. 

### Estabilidade

A implementação padrão não é estável. No entanto, qualquer algoritmo de ordenação pode se tornar estável considerando índices como parâmetro de comparação.

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
