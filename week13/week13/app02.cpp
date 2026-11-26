#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    string data;
    ifstream instrm("pokemon.txt", ios :: in); // 해당 파일이 프로젝트 폴더에 존재하지 않음. 기본값이라 생략 가능.
    if (!instrm.is_open())
    {
        cout << "pokemons.txt을 열 수 없습니다." << endl; //출력 후 종료
        assert(false);
    }
    for (int i = 1; i <= 2; i++) {
        instrm >> data;
        cout << data << " ";
    }
    instrm.close();
    return 0;
}