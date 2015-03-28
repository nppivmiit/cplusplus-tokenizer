// ����� �������� ����
#include <iostream>
#include <fstream>
using namespace std;

struct BaseToken
{
    // ������� ������ � ������
    int begin;
    int end;

    // ��� ������
    char type[100];

    // �����
    char coveredText[100];

    // �����
    int length;
};

struct TokenType
{
    // ��� ����
    char typeName[];

    // ��������� �������� ������� ����
    char characters[];
};

// ���������� ������������ �����������
struct TokenizerConfig
{
    TokenType baseTypes[100];
    TokenType mergedTypes[100];
    int countOfTypes;
};


// ��������� ������������� �����������
// configFIle - ���� � �����������
TokenizerConfig InitializeTokenizer(ifstream &configFile);
