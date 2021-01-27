#include <cstdlib>
#include <algorithm>
#include "benchmark/benchmark.h"

const int fromRange = 16;
const int toRange = 1 << 20;

float count_add_c(const float* v, size_t size)
{
	float result = 0;
	for (size_t i = 0; i < size; i++)
	{
		result += v[i];
		benchmark::DoNotOptimize(result);
	}
	return result;
}

static void BM_BranchOpti(benchmark::State& state)
{
	const size_t size = state.range(0);
	std::vector<float> m1(size);
	std::generate(m1.begin(), m1.end(), [] { return (float)rand(); });
	for (auto _ : state)
	{
		benchmark::DoNotOptimize(count_add_c(m1.data(), m1.size()));
	}
}
BENCHMARK(BM_BranchOpti)->Range(fromRange, toRange);

float count_positive_c(const float* v, size_t size)
{
	float result = 0;
	for (size_t i = 0; i < size; i++) 
	{
		// result += v[i];
		result += (int)v[i] % 2 ? -1.0f : 1.0f;
		benchmark::DoNotOptimize(result);
	}
	return result;
}

static void BM_BranchNonOpti(benchmark::State& state)
{
	const size_t size = state.range(0);
	std::vector<float> m1(size);
	std::generate(
		m1.begin(), 
		m1.end(), 
		[] {return (float)rand(); });
	for (auto _ : state) 
	{
		benchmark::DoNotOptimize(count_positive_c(m1.data(), m1.size()));
	}
}
BENCHMARK(BM_BranchNonOpti)->Range(fromRange, toRange);

BENCHMARK_MAIN();