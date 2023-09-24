#include "showPerson.h"
#include "addPerson.h"

//显示联系人函数
void showPerson(struct addressBook * adb)
{
	if ( adb->size == 0 ) {
		cout << "当前记录为空。" << endl;
	}
	else {
		for ( int i = 0; i < adb->size; i++ ) {
			cout << adb->personArray[i].name << "\t";
			cout <<(adb->personArray[i].sex == 1 ? "男": "女")<< "\t";
			cout << adb->personArray[i].age << "\t";
			cout << adb->personArray[i].phone << "\t";
			cout << adb->personArray[i].addr << endl;
		}
	}
	
	system("pause");
	system("cls");
}
