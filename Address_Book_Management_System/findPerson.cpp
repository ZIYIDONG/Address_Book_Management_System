#include "findPerson.h"
#include "addPerson.h"

int findPerson(struct addressBook *adb, string name) {
	for (int i = 0; i < adb->size; i++) {
		if (adb->personArray[i].name == name) {
			return i;
		}
		return -1;
	}
}