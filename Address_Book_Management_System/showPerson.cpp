#include <iostream>
#include "showPerson.h"
#include "addPerson.h"

void showPerson(struct addressBook * adb)
{
	if ( adb->size == 0 ) {
		cout << "当前记录为空。" << endl;
	}
	else {
		for ( int i = 0; i < adb->size; i++ ) {
			cout << adb->personArray[i].name << endl;
			cout <<(adb->personArray[i].sex == 1 ? "男": "女")<< endl;
			cout << adb->personArray[i].age << endl;
			cout << adb->personArray[i].phone << endl;
			cout << adb->personArray[i].addr << endl;
		}
	}
	
	system("pasue");
	system("cls");
}
