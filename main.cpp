#include "object_handler.h"

int main() {
	MyObject<string>* obj_1 = new MyObject<string>(0, "text", "Value text", ObjectType::TEXT);
	obj_1->print();
	MyObject<int>* obj_2 = new MyObject<int>(1, "number", 23, ObjectType::NUMBER);
	obj_2->print();
	bool result = ObjectHandler::compare<string, int>(obj_1, obj_2);
	cout << "Result: " << result << endl;
	delete obj_1, obj_2;
	return 0;
}