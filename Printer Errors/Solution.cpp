//SOLUÇÃO

//A solução usa um loop for para percorrer a string passada como parâmetro. 

// Para cada caractere na string, verifica-se se ele é uma letra entre 'a' e 'm'. 
// Se não for, incrementa-se a variável "errors". 

// No final do loop, a função retorna uma string representando a taxa de erro da impressora, 
// que é a quantidade de erros encontrados dividida pelo comprimento total da string de entrada. 

// Para formatar a string de retorno, são usadas as funções to_string e a concatenação de strings.

#include <iostream>
#include <string>

class Printer
{
public:
    static std::string printerError(const std::string &s)
    {
        int errors = 0;
        int total = s.length();

        for (char c : s)
        {
            if (c < 'a' || c > 'm')
            {
                errors++;
            }
        }

        return std::to_string(errors) + "/" + std::to_string(total);
    }
};

int main()
{
    std::string s = "aaaxbbbbyyhwawiwjjjwwm";
    std::string error_rate = Printer::printerError(s);
    std::cout << error_rate << std::endl; // imprime "11/22"
    return 0;
}
