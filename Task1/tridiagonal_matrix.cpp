#include "tridiagonal_matrix.h"

tridiagonal_matrix::tridiagonal_matrix(
    const std::vector<double>& down,
    const std::vector<double>& upper,
    const std::vector<double>& middle) :
    m_down{ down }, m_upper{ upper }, m_middle{ middle }
{};

tridiagonal_matrix::~tridiagonal_matrix()
{
    std::cout << "destructor called\n";
}

std::unique_ptr<tridiagonal_matrix> tridiagonal_matrix::clone()
{
    return std::make_unique<tridiagonal_matrix>(m_down, m_upper, m_middle);
}