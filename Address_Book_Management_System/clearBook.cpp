#include "clearBook.h"
#include "addPerson.h"

void clearBook(addressBook* adb){
	adb->size = 0;
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}
