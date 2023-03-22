
# Quick Sort

É um algoritmo de ordenação. O algoritmo escolhe um elemento pivô e reorganiza os elementos da matriz para que todos os elementos menores que o elemento pivô escolhido se movam para o lado esquerdo do pivô e todos os elementos maiores se movam para o lado direito. Finalmente, o algoritmo classifica recursivamente os subarrays à esquerda e à direita do elemento pivô. Ele também apresenta a vantagem da ordenaçáo local e funciona bem até mesmo em ambientes de memória virtual.

## Funcionalidade 

1. Select the Pivot Element

There are different variations of quicksort where the pivot element is selected from different positions. Here, we will be selecting the rightmost element of the array as the pivot element.

Quick Sort Steps
Select a pivot element
2. Rearrange the Array

Now the elements of the array are rearranged so that elements that are smaller than the pivot are put on the left and the elements greater than the pivot are put on the right.

Quick Sort Steps
Put all the smaller elements on the left and greater on the right of pivot element
Here's how we rearrange the array:

A pointer is fixed at the pivot element. The pivot element is compared with the elements beginning from the first index.
Quick Sort Steps
Comparison of pivot element with element beginning from the first index
If the element is greater than the pivot element, a second pointer is set for that element.
Quick Sort Steps
If the element is greater than the pivot element, a second pointer is set for that element.
Now, pivot is compared with other elements. If an element smaller than the pivot element is reached, the smaller element is swapped with the greater element found earlier.
Quick Sort Steps
Pivot is compared with other elements.
Again, the process is repeated to set the next greater element as the second pointer. And, swap it with another smaller element.

Quick Sort Steps
The process is repeated to set the next greater element as the second pointer.
The process goes on until the second last element is reached.
Quick Sort Steps
The process goes on until the second last element is reached.
Finally, the pivot element is swapped with the second pointer.
Quick Sort Steps
Finally, the pivot element is swapped with the second pointer.
3. Divide Subarrays

Pivot elements are again chosen for the left and the right sub-parts separately. And, step 2 is repeated.

Quick Sort Steps
Select pivot element of in each half and put at correct place using recursion
 

The subarrays are divided until each subarray is formed of a single element. At this point, the array is already sorted.




#### DAC - Algoritmo Dividir e Conquistar

Trabalha com a tecnica Dividir e Conquistar (DAC), que está dividida em 3 fases:

1. Dividir: envolve dividir o problema em subproblemas menores.
2. Conquer: Resolva subproblemas chamando recursivamente até serem resolvidos.
3. Combine: Combine os subproblemas para obter a solução final de todo o problema.
  

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
