#include <iostream>
#include <string>
using namespace std;

class Student {
protected :
	string name;
};

class DormitoryStudent : virtual public Student {
public :
	int roomNumber;
	void warn() {
		cout << "기숙사생 이름 : " << name << '\n';
		cout << "기숙사 호실 : " << roomNumber << '\n';
		cout << "벌점부여!\n";
	}
};

class UndergraduateStudent : virtual public Student {
public :
	int id;
	void warn() {
		cout << "학부생 이름 : " << name << '\n';
		cout << "학번 : " << id << '\n';
		cout << "학사경고!\n";
	}
};

class UdergraduateDormitoryStudent : public UndergraduateStudent, public DormitoryStudent {
public:
	void warn() {
		cout << "학생 이름 : " << name << '\n';
		cout << "학번 : " << id << '\n';
		cout << "기숙사 호실 : " << roomNumber << '\n';
		cout << "경고!\n";
	}
};

int main()
{
	UdergraduateDormitoryStudent uds;
	uds.warn();
	return 0;
}