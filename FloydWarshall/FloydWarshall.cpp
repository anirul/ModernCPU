#include <cstdlib>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include "benchmark/benchmark.h"

const int fromRange = 4;
const int toRange = 128;

template <int T>
class matrix 
{
public:
	matrix() 
	{
		for (std::uint16_t x = 0; x < T; ++x)
		{
			for (std::uint16_t y = 0; y < T; ++y)
			{
				map_[x][y] = std::numeric_limits<float>::infinity();
			}
		}
	}
	float operator()(std::uint16_t x, std::uint16_t y) const
	{
		assert(x < T);
		assert(y < T);
		return map_[x][y];
	}
	void floyd_warshall()
	{
		for (std::uint16_t k = 0; k < T; ++k)
		{
			for (std::uint16_t x = 0; x < T; ++x)
			{
				for (std::uint16_t y = 0; y < T; ++y)
				{
					float value = operator()(x, y);
					float new_value = operator()(k, y) + operator()(x, k);
					map_[x][y] = 
						(value < new_value) ? value : new_value;
				}
			}
		}
	}
protected:
	float map_[T][T];
};

static void BM_FloydWarshall(benchmark::State& state)
{
	std::size_t range = state.range(0);
	switch (range)
	{
	case 4:
	{
		matrix<4> correspondance{};
		for (auto _ : state)
		{
			correspondance.floyd_warshall();
			benchmark::DoNotOptimize(correspondance);
		}
		break;
	}
	case 8:
	{
		matrix<8> correspondance{};
		for (auto _ : state)
		{
			correspondance.floyd_warshall();
			benchmark::DoNotOptimize(correspondance);
		}
		break;
	}
	case 64:
	{
		matrix<64> correspondance{};
		for (auto _ : state)
		{
			correspondance.floyd_warshall();
			benchmark::DoNotOptimize(correspondance);
		}
		break;
	}
	default:
	case 128:
	{
		matrix<128> correspondance{};
		for (auto _ : state)
		{
			correspondance.floyd_warshall();
			benchmark::DoNotOptimize(correspondance);
		}
		break;
	}
	}
}
BENCHMARK(BM_FloydWarshall)->Range(fromRange, toRange);

BENCHMARK_MAIN();