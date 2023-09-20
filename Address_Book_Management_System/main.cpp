#include "showMenu.h"
#include "addPerson.h"
#include <iostream>
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
		cout << "请输入数字选择要使用的功能:" << endl;
		cin >> select;

		switch (select) {
			case 1:
				//功能1：添加联系人
				addPerson(&adb);
				break;
			case 2:
				//功能2：显示联系人
				break;
			case 3:
				//功能3：删除联系人
				break;
			case 4:
				//功能4：查找联系人
				break;
			case 5:
				//功能5：修改联系人
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