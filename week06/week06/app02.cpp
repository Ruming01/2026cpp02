#include <iostream>
#include <string>
using namespace std;

class DormitoryStudent {
public :
	void warn() {
		cout << "벌점부여!\n";
	}
};

class UndergraduateStudent {
public :
	void warn() {
		cout << "학사경고!\n";
	}
};

class UdergraduateDormitoryStudent : public UndergraduateStudent, public DormitoryStudent {

};

int main()
{
	UdergraduateDormitoryStudent uds;
	uds.warn(); // 모호하다
	return 0;
}