#include <benchmark/benchmark.h>
#include <vector>
#include <list>
#include <memory_resource>

const unsigned long fromRange = 8;
const unsigned long toRange = 1 << 20;
std::byte array[toRange * sizeof(int)];

static void BM_Vector(benchmark::State& state)
{
	const auto length = state.range(0);
	std::vector<int> values;
	for (int i = 0; i < length; i++)
	{
		values.push_back(rand() % 32768);
	}
	for (auto _ : state)
	{
		for (auto& v : values)
		{
			benchmark::DoNotOptimize(v);
		}
	}
}
BENCHMARK(BM_Vector)->Range(fromRange, toRange);

static void BM_PMRVector(benchmark::State& state)
{
	const auto length = state.range(0);
	std::pmr::monotonic_buffer_resource rsrc(array, sizeof array);
	std::pmr::vector<int> values(&rsrc);
	for (int i = 0; i < length; i++)
	{
		values.push_back(rand() % 32768);
	}
	for (auto _ : state)
	{
		for (auto& v : values)
		{
			benchmark::DoNotOptimize(v);
		}
	}
}
BENCHMARK(BM_PMRVector)->Range(fromRange, toRange);

static void BM_List(benchmark::State& state)
{
	const auto length = state.range(0);
	std::list<int> values;
	for (int i = 0; i < length; i++)
	{
		values.push_back(rand() % 32768);
	}
	for (auto _ : state)
	{
		for (auto& v : values)
		{
			benchmark::DoNotOptimize(v);
		}
	}
}
BENCHMARK(BM_List)->Range(fromRange, toRange);

static void BM_PMRList(benchmark::State& state)
{
	const auto length = state.range(0);
	std::pmr::monotonic_buffer_resource rsrc(array, sizeof array);
	std::pmr::list<int> values(&rsrc);
	for (int i = 0; i < length; i++)
	{
		values.push_back(rand() % 32768);
	}
	for (auto _ : state)
	{
		for (auto& v : values)
		{
			benchmark::DoNotOptimize(v);
		}
	}
}
BENCHMARK(BM_PMRList)->Range(fromRange, toRange);

static void BM_Set(benchmark::State& state)
{
	const auto length = state.range(0);
	std::set<int> values;
	for (int i = 0; i < length; i++)
	{
		values.insert(rand() % 32768);
	}
	for (auto _ : state)
	{
		for (auto& v : values)
		{
			benchmark::DoNotOptimize(v);
		}
	}
}
BENCHMARK(BM_Set)->Range(fromRange, toRange);

static void BM_PMRSet(benchmark::State& state)
{
	const auto length = state.range(0);
	std::pmr::monotonic_buffer_resource rsrc(array, sizeof array);
	std::pmr::set<int> values(&rsrc);
	for (int i = 0; i < length; i++)
	{
		values.insert(rand() % 32768);
	}
	for (auto _ : state)
	{
		for (auto& v : values)
		{
			benchmark::DoNotOptimize(v);
		}
	}
}
BENCHMARK(BM_PMRSet)->Range(fromRange, toRange);

BENCHMARK_MAIN();