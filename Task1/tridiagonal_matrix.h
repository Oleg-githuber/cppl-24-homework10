#pragma once

#include <vector>
#include <iostream>
#include <memory>
#include <algorithm>

class tridiagonal_matrix
{
public:
    std::vector<double> m_down;
    std::vector<double> m_upper;
    std::vector<double> m_middle;

    tridiagonal_matrix(
        const std::vector<double>& down,
        const std::vector<double>& upper,
        const std::vector<double>& middle);

    ~tridiagonal_matrix();

    std::unique_ptr<tridiagonal_matrix> clone();
};

