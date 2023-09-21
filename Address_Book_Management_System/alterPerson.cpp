#include "alterPerson.h"
#include "findPerson.h"
#include "addPerson.h"

using namespace std;

void alterPerson(addressBook* adb){

	cout << "请输入要修改的联系人：" << endl;
	string name = "";
	cin >> name;

	int alterLocation = 0;
	alterLocation = findPerson(adb, name);
	if (alterLocation == -1) {
		cout << "输入有误，请从新输入" << endl;
	}
	else {

		//修改姓名
		string alterName = "";
		cout << "请输入修改后的姓名：" << endl;
		cin >> alterName;
		adb->personArray[alterLocation].name = alterName;

		//修改性别
		cout << "请输入性别：" << endl;
		cout << "1 -- 男" << endl;
		cout << "2 -- 女" << endl;
		int alterSex = 0;
		while (true) {
			cin >> alterSex;
			if (alterSex == 1 || alterSex == 2) {
				adb->personArray[alterLocation].sex = alterSex;
				break;
			}
			cout << "输入有误，请重新输入";
		}

		//修改年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		adb->personArray[alterLocation].age = age;

		//修改联系方式
		cout << "请输入联系电话：" << endl;
		string phone = "";
		cin >> phone;
		adb->personArray[alterLocation].phone = phone;

		//修改住址
		cout << "请输入家庭住址：" << endl;
		string address;
		cin >> address;
		adb->personArray[alterLocation].addr = address;

		cout << "修改成功" << endl;
	}
}
