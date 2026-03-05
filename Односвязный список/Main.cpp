#include "List.h"

int main()
{
    List list;

    list.Add({"Alex", 20});
    list.Add({"Maria", 22});
    list.Add({"John", 25});

    list.Insert({"Kate", 19}, 1);

    list.Print();

    list.RemoveAt(2);

    list.Print();

    return 0;
}
