#include "showMenu.h"
#include "addPerson.h"
#include "showPerson.h"
#include "findPerson.h"
#include "deletePerson.h"
#include "alterPerson.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//创建通讯录
	struct addressBook adb;

	//初始化通讯录中人数
	adb.size = 0;

	while (true) {

		//显示菜单
		showMenu();

		int select = 0;
		int location = 0;
		int personLocation = 0;
		string findName = "";
		cout << "请输入数字选择要使用的功能:" << endl;
		cin >> select;

		switch (select) {
			case 1:
				//功能1：添加联系人
				addPerson(&adb);
				break;
			case 2:
				//功能2：显示联系人
				showPerson(&adb);
				break;
			case 3:
				//功能3：删除联系人
				cin >> findName;
				personLocation = findPerson(&adb,findName);
				if (personLocation == -1) {
					cout << "所查找的联系人不存在" << endl;
					break;
				}
				else {
					deletePerson(&adb, personLocation);
					cout << "删除成功" << endl;
				}
				break;
			case 4:
				//功能4：查找联系人
				cin >> findName;
				location = findPerson(&adb, findName);
				if (location == -1) {
					cout << "查无此人" << endl;
				}
				else {
					cout << "姓名：" << adb.personArray[location].name << "\t";
					cout << "性别：" << adb.personArray[location].sex << "\t";
					cout << "年龄：" << adb.personArray[location].age << "\t";
					cout << "电话：" << adb.personArray[location].phone << "\t";
					cout << "住址：" << adb.personArray[location].addr << endl;
				}
				break;
			case 5:
				//功能5：修改联系人
				alterPerson(&adb);
				break;
			case 6:
				//功能6：清空通讯录中所有信息
				break;
			case 0://退出通讯录管理系统
				cout << "欢迎下次使用!" << endl;
				system("pause");
				return 0;
				break;
		}
	}

	system("pause");

	return 0;
}