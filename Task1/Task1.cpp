/*
Бывает полезно быстро создать копию объекта, которая самостоятельно управляет своей памятью. Если объект класса тяжёлый и имеет много данных на стеке, то целесообразнее возвращать unique_ptr.

В этом задании нужно написать функцию clone для класса трёхдиагональной матрицы, которая возвращает std::unique_ptr.
*/

#include <iostream>
#include "tridiagonal_matrix.h"

int main()
{
    auto down = std::vector<double>{ -4.0, 5.0 };
    auto upper = std::vector<double>{ 14.0, 8.0 };
    auto middle = std::vector<double>{ 3.0, 1.0, 7.0 };
    auto matrix = std::make_unique<tridiagonal_matrix>(
        down,
        upper,
        middle
    );

    auto matrix_clone = matrix->clone();

    return 0;
}
