#include "addPerson.h"

//添加联系人函数
void addPerson(struct addressBook *adb)
{
	//判断通讯簿是否已满
	if (adb->size > 1000) {
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	else {

		//姓名
		string name = "";
		cout << "请输入姓名" << endl;
		cin >> name;
		adb->personArray[adb->size].name = name;


		//性别
		cout << "请输入性别：" << endl;
		cout << "1 -- 男" << endl;
		cout << "2 -- 女" << endl;

		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				adb->personArray[adb->size].sex = sex;
				break;
			}
			cout << "输入有误，请重新输入！" << endl;
		}

		//年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		adb->personArray[adb->size].age = age;

		//联系电话
		cout << "请输入联系电话：" << endl;
		string phone = "";
		cin >> phone;
		adb->personArray[adb->size].phone = phone;

		//家庭住址
		cout << "请输入家庭住址" << endl;
		string address = "";
		cin >> address;
		adb->personArray[adb->size].addr = address;

		//更新通讯录人数
		adb->size++;

		cout << "添加成功" << endl;

		system("pause");
		system("cls");
	}
}
