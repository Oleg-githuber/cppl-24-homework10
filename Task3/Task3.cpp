/*
Нужно создать упрощённый аналог std::unique_ptr.

В шаблонном классе должны быть реализованы функции:

Конструктор, принимающий сырой указатель.
Перегружен оператор * для получения объекта.
Запрещены оператор присваивания и конструктор копирования.
Метод release, который освобождает владение и возвращает сырой указатель.
Деструктор.
*/

#include <iostream>
#include "simple_ptr.h"

int main()
{
    my_simple_ptr::simple_ptr<int> sp{ new int(4) };
    std::cout << *sp << '\n';   // оператор разыменования

    // Запрещенные конструкторы копирования
    //my_simple_ptr::simple_ptr<int> sp2(sp);
    //my_simple_ptr::simple_ptr<int> sp3{ sp };
 
    // Запрещенные опереторы копирования
    //my_simple_ptr::simple_ptr<int> sp4 = sp;
    my_simple_ptr::simple_ptr<int> sp5{ new int(5) };
    //sp5 = sp;

    return EXIT_SUCCESS;
}
