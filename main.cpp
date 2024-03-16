#include"KIntArray.h"

void test() {
	KIntArray c(5);
	c.inputArray();
	c.outputArray();
	c.deleteData(3);
	c.outputArray();
}

int main() {
	test();
	system("pause");
	return 0;
}