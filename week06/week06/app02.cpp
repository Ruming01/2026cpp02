#include <iostream>
#include <string>
using namespace std;

class Student {
protected :
	string name;
public :
	Student(string name) : name(name) {}
};

class DormitoryStudent : virtual public Student {
protected :
	int roomNumber;
	void warn() {
		cout << "기숙사생 이름 : " << name << '\n';
		cout << "기숙사 호실 : " << roomNumber << '\n';
		cout << "벌점부여!\n";
	}
public :
	DormitoryStudent(string name, int roomNumber) : Student(name), roomNumber(roomNumber) {}
};

class UndergraduateStudent : virtual public Student {
public :
	int id;
	UndergraduateStudent(string name, int id) : Student(name), id(id) {}
	void warn() {
		cout << "학부생 이름 : " << name << '\n';
		cout << "학번 : " << id << '\n';
		cout << "학사경고!\n";
	}
};

class UdergraduateDormitoryStudent : public UndergraduateStudent, public DormitoryStudent {
public:
	UdergraduateDormitoryStudent(string name, int id, int roomNumber) : Student(name), UndergraduateStudent(name, id), DormitoryStudent(name, roomNumber) {}
	void warn() {
		cout << "학생 이름 : " << name << '\n';
		cout << "학번 : " << id << '\n';
		cout << "기숙사 호실 : " << roomNumber << '\n';
		cout << "경고!\n";
	}
};

int main()
{
	UdergraduateDormitoryStudent uds("DS Kim", 12345, 12373);
	uds.warn();
	return 0;
}