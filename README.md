**ALGORITMOS DE ORDENAÇÃO**


Trabalho apresentado a disciplina de Algoritmos e Estrutura de Dados II da Universidade Federal de Mato Grosso.
Professor (a): Frederico Santos de Oliveira


**INTRODUÇÃO**

O projeto avaliativo dois, consiste na criação de um algoritmo que possa desfrutar da ordenação de n elementos de um vetor de oito formas diferentes, sendo cada uma delas recomendadas para certo número de inteiros dentro de um vetor. Ademais, as oito formas diferentes são: *bubblesort, insertionsort, selectionsort, shellsort, mergesort, heapsort, quicksort e countingsort.* Assim sendo, respectivamente, as três primeiras formas são indicadas para uma ordenação com baixo número de elementos devido a sua estrutura ser mais simples, entretanto, as restantes, exceto *countingsort,* são responsáveis por terem uma estrutura mais elaborada, possibilitando assim a ordenação de n elementos em quantidades maiores que em relação as três primeiras formas, destacando também, a forma *quicksort* que quando bem estruturada possui uma velocidade de processamento superior as demais. Também, o projeto conta com um algoritmo extra de ordenação, sendo justamente o *countingsort*, que foi escolhido devido a sua possibilidade de processamento extremamente rápido com uma baixa quantidade de números inteiros.

De modo geral, o algoritmo foi estruturado em oito bibliotecas, onde cada uma abriga a função referente a forma de ordenação respectiva e possui o arquivo *main* que é constituído de quatro bibliotecas, “stdio.h”, “stdlib.h”, “time.h” e “math.h”, bem como as oito bibliotecas de ordenação e outra responsável por realizar a contagem de movimentações e comparações nas formas *bubblesort, insertionsort e selectionsort*, denominada “analisedetempo.h”. Por fim, cada uma das funções e bibliotecas que formam o algoritmo completa serão descritas e explicadas ao desenvolver do projeto.

**Documentação completa com a análise disponível na pasta `/doc`**
