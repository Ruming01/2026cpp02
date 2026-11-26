#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    char ch;
    ifstream istr;
    ofstream ostr;
    istr.open("pokemons.txt", ios::in);
    if (!istr.is_open())
    {
        cout << "pokemons.txt를 열 수 없습니다." << endl;
        assert(false);
    }
    ostr.open("pokemonsReplica.txt", ios::out);
    if (!ostr.is_open())
    {
        cout << "pokemonsReplica.txt를 열 수 없습니다." << endl;
        assert(false);
    }
    // file1의 내용을 읽어 file2에 쓰기
    while (istr.get(ch))
    {
        ostr.put(ch);
    }
    // 파일 2개 닫기
    istr.close();
    ostr.close();
    return 0;
}