// Copyright 2023 Vanushkin Dmitry

#include <vector>

#pragma once

using DoubleMatrix = std::vector<std::vector<double>>;
using DoubleVector = std::vector<double>;


DoubleVector SequentialSeidelMethod(
        const DoubleMatrix& alpha,
        const DoubleVector& beta,
        double eps
);

DoubleVector ParallelSeidelMethod(
        const DoubleMatrix& alpha,
        const DoubleVector& beta,
        double eps
);

double norm(const DoubleVector& v1, const DoubleVector& v2);
