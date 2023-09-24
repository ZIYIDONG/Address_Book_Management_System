#include "deletePerson.h"
#include "addPerson.h"

//É¾³ýÁªÏµÈË
void deletePerson(struct addressBook *adb, int location) {
	for (int i = location; i < adb->size; i++) {
		adb->personArray[i] = adb->personArray[i + 1];
	}
	adb->size--;
}