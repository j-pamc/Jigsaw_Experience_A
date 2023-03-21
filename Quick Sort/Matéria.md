
# Quick Sort

É um algoritmo de ordenação. O algoritmo escolhe um elemento pivô e reorganiza os elementos da matriz para que todos os elementos menores que o elemento pivô escolhido se movam para o lado esquerdo do pivô e todos os elementos maiores se movam para o lado direito. Finalmente, o algoritmo classifica recursivamente os subarrays à esquerda e à direita do elemento pivô. Ele também apresenta a vantagem da ordenaçáo local e funciona bem até mesmo em ambientes de memória virtual.

## Funcionalidade 


#### DAC - Algoritmo Dividir e Conquistar

Trabalha com a tecnica Dividir e Conquistar (DAC), que está dividida em 3 fases:

1. Dividir: envolve dividir o problema em subproblemas menores.
2. Conquer: Resolva subproblemas chamando recursivamente até serem resolvidos.
3. Combine: Combine os subproblemas para obter a solução final de todo o problema.
   
##### Complexidade de tempo do algoritmo de divisão e conquista

    T(n) = aT(n/b) + f(n),
    
        n = tamanho da entrada
        a = número de subproblemas na recursão
        n/b = tamanho de cada subproblema. Todos os subproblemas são assumidos como tendo o mesmo tamanho.
        f(n) = custo do trabalho realizado fora da chamada recursiva, que inclui o custo de dividir o problema e o custo de mesclar as soluções

#### Vantagens

Vantagens do Algoritmo Dividir e Conquistar:

1. O problema difícil pode ser resolvido facilmente.
2. Ele divide todo o problema em subproblemas para que possa ser resolvido paralelamente garantindo o multiprocessamento
3. Usa com eficiência a memória cache sem ocupar muito espaço, esquecimento de cache.
4. Reduz a complexidade de tempo do problema
5. Eficiência do algoritmo: O paradigma de dividir e conquistar geralmente ajuda na descoberta de algoritmos eficientes.
6. Paralelismo: Normalmente algoritmos DAC são usados ​​em máquinas multiprocessadas com sistemas de memória compartilhada onde a comunicação de dados entre processadores não precisa ser planejada com antecedência, pois subproblemas distintos podem ser executados em diferentes processadores.
7. Controle de arredondamento: Em cálculos com aritmética arredondada, por exemplo, com números de ponto flutuante, um algoritmo de divisão e conquista pode produzir resultados mais precisos do que um método iterativo superficialmente equivalente. Por exemplo, pode-se adicionar N números por um loop simples que adiciona cada dado a uma única variável ou por um algoritmo D e C que divide o conjunto de dados em duas metades, calcula recursivamente a soma de cada metade e, em seguida, adiciona o duas somas. Embora o segundo método execute o mesmo número de adições que o primeiro e pague a sobrecarga das chamadas recursivas, geralmente é mais preciso.

#### Desvantagens 

1. Envolve recursão que às vezes é lenta e pode travar o sistema se for executada rigorosamente.
2. A eficiência depende da implementação da lógica
3. Overhead: O processo de dividir o problema em subproblemas e depois combinar as soluções pode exigir tempo e recursos adicionais. Essa sobrecarga pode ser significativa para problemas que já são relativamente pequenos ou que possuem uma solução simples.
4. Complexidade: Dividir um problema em subproblemas menores pode aumentar a complexidade da solução geral. Isso é particularmente verdadeiro quando os subproblemas são interdependentes e devem ser resolvidos em uma ordem específica.
5. Dificuldade de implementação: Alguns problemas são difíceis de dividir em subproblemas menores ou requerem um algoritmo complexo para fazê-lo.
6. Limitações de memória: Ao trabalhar com grandes conjuntos de dados, os requisitos de memória para armazenar os resultados intermediários dos subproblemas podem se tornar um fator limitante.
7. Dificuldade de paralelização: Em alguns casos, dividir o problema em subproblemas e resolvê-los de forma independente pode não ser facilmente paralelizável, levando ao uso ineficiente dos recursos computacionais.

## Complexidade


O tempo gasto pelo QuickSort, em geral, pode ser escrito da seguinte maneira. 

 T(n) = T(k) + T(nk-1) + (theta)(n)

Os primeiros dois termos são para duas chamadas recursivas, o último termo é para o processo de partição. k é o número de elementos menores que o pivô.


- Pior caso 
    O comportamento do pior caso para o quicksort ocorre quando a rotina de particionamento produz um subproblema com n - 1 elementos e um com O elementos, ou seja, quando o processo de partição sempre escolhe o maior ou o menor elemento como pivô. Se considerarmos a estratégia de partição acima, onde o último elemento é sempre escolhido como um pivô, o pior caso ocorreria quando o array já estivesse classificado em ordem crescente ou decrescente. A seguir está a recorrência para o pior caso.  

    T(n) = T(n-1) + T(0) + (theta)(n)
    Solução (theta)(n^2)

- Melhor caso:
    Na divisão mais uniforme possível, o processo de partição produz dois subproblemas, cada um de tamanho não maior que n/2, pois um tem tamanho n/2 e o outro tem tamanho (2/1) - 1. Ou melhor, quando o processo de partição sempre escolhe o elemento do meio como pivô. O seguinte é a recorrência para o melhor caso. 

    T(n) = 2T(n/2) + (theta)(n)
    Solução (theta)(nLogn)


- Caso médio: 
    Para fazer a análise do caso médio, precisamos considerar todas as permutações possíveis da matriz e calcular o tempo gasto por cada permutação. Por exemplo, suponha que o algoritmo de particionamento sempre produza uma divisão proporcional de 9 para, obtemos a recorrência:

    T(n) = T(n/10) + T(9n/10) + (theta)(n)
    Solução (theta)(nLogn)

## Estabilidade

A implementação padrão não é estável. No entanto, qualquer algoritmo de ordenação pode se tornar estável considerando índices como parâmetro de comparação.

## Representação gráfica

## Implementação em C

1. [# Pimeiro exemplo](1#1#%20Implementação%20em%20c)
2. [# Segundo exemplo](2#2#%20Implementação%20em%20C)
3. [# Terceiro exemplo](3#3#%20Implementação%20em%20c)

## Referencias 

1. https://www.youtube.com/watch?v=wU7Q8Z51MUI
2. https://www.geeksforgeeks.org/quick-sort/
3. https://www.geeksforgeeks.org/introduction-to-divide-and-conquer-algorithm-data-structure-and-algorithm-tutorials/
4. https://gist.github.com/marcoscastro/1dd65900cc7b188e1ab9
5. https://www.programiz.com/dsa/quick-sort
