//DESCRIÇÃO

// A solução usa a biblioteca algorithm e a classe vector para manipular a matriz de números. 
// A função sort é usada para classificar a matriz em ordem crescente, de modo que os dois menores
// números ficam nas posições 0 e 1 da matriz. Em seguida, a função retorna a soma desses dois 
// números, convertidos em tipo long para evitar possíveis problemas de estouro de tamanho.

// Essa solução é simples, elegante e eficiente, pois a função sort tem complexidade de tempo O(n log n) e a 
// soma dos dois menores números tem complexidade O(1), resultando em uma complexidade total de tempo O(n log n).
// Além disso, o uso de vector em vez de uma matriz estática permite que a função seja usada em matrizes 
// de diferentes tamanhos.

#include <algorithm>
#include <vector>

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
    std::sort(numbers.begin(), numbers.end());
    
    return (long)numbers[0] + (long)numbers[1];
}