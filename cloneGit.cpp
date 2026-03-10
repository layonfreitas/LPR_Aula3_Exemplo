#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.utf8"); //Para usar acentuação
    cout << "\033[1;34m***************************************************\033[0m\n";
    cout << "\033[1;32m*                                                 *\033[0m\n";
    cout << "\033[1;32m*   \033[1;33m EU SOU DO ROOOOOOCKKKK!                     \033[1;32m          *\033[0m\n";
    cout << "\033[1;32m*                                                 *\033[0m\n";
    cout << "\033[1;32m*   \033[1;36mVocê clonei um repositório público do Git     \033[1;32m*\033[0m\n";
    cout << "\033[1;32m*   \033[1;36mpara o meu repositório local!                 \033[1;32m*\033[0m\n";
    cout << "\033[1;32m*                                                 *\033[0m\n";
    cout << "\033[1;34m***************************************************\033[0m\n";
    string nome;
    nome = "layon";
    return 0;
}
//EU SOU MUITO BOM EM C++!