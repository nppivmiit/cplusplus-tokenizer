// Токен базового типа
#include <iostream>
#include <fstream>
using namespace std;

struct BaseToken
{
    // позиции токена в текста
    int begin;
    int end;

    // тип токена
    char type[100];

    // текст
    char coveredText[100];

    // длина
    int length;
};

struct TokenType
{
    // имя типа
    char typeName[];

    // множество символов данного типа
    char characters[];
};

// содержится конфигурация токенайзера
struct TokenizerConfig
{
    TokenType baseTypes[100];
    TokenType mergedTypes[100];
    int countOfTypes;
};


// Процедура инициализации токенайзера
// configFIle - файл с настройками
TokenizerConfig InitializeTokenizer(ifstream &configFile);
