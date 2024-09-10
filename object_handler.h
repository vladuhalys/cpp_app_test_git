#include "object.h"

struct ObjectHandler
{
	template <typename T1, typename T2>
	static bool compare(MyObject<T1> * obj_1, MyObject<T2> * obj_2)
	{
		return (obj_1->getType() == obj_2->getType());
	}
};
