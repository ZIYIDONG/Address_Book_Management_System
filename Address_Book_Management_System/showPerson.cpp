#include <iostream>
#include "showPerson.h"
#include "addPerson.h"

void showPerson(struct addressBook * adb)
{
	if ( adb->size == 0 ) {
		cout << "��ǰ��¼Ϊ�ա�" << endl;
	}
	else {
		for ( int i = 0; i < adb->size; i++ ) {
			cout << adb->personArray[i].name << endl;
			cout <<(adb->personArray[i].sex == 1 ? "��": "Ů")<< endl;
			cout << adb->personArray[i].age << endl;
			cout << adb->personArray[i].phone << endl;
			cout << adb->personArray[i].addr << endl;
		}
	}
	
	system("pasue");
	system("cls");
}
