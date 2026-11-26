#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    char* data;
    ifstream instrm("pokemons.txt");
    if (!instrm.is_open())
    {
        cout << "pokemons.txt을 열 수 없습니다." << endl;
        assert(false);
    }
    for (int i = 1; i <= 2; i++) {
        instrm >> data;
        cout << data << " ";
    }
    instrm.close();
    return 0;
}