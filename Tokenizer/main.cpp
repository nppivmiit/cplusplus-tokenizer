#include "Def.h"

int main() {
    ifstream configFile("TokenizerConfig.txt");
    TokenizerConfig config = InitializeTokenizer(configFile);

    cout << "Я Марсель!" << endl;
    return 0;
}