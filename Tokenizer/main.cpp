#include "Def.h"

int main() {
    ifstream configFile("TokenizerConfig.txt");
    TokenizerConfig config = InitializeTokenizer(configFile);

    cout << "� �������!" << endl;
    return 0;
}