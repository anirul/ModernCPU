#include <benchmark/benchmark.h>
#include <array>

struct Vec3
{
	Vec3() 
	{
		x = static_cast<float>(rand() % 32768);
		y = static_cast<float>(rand() % 32768);
		z = static_cast<float>(rand() % 32768);
	}
	float x, y, z;
	static float Dot(const Vec3& a, const Vec3& b);
};

float Vec3::Dot(const Vec3& a, const Vec3& b)
{
	return a.x * b.x + a.y * b.y + a.z * b.z;
}

float Dot(float ax, float ay, float az, float bx, float by, float bz)
{
	return ax * bx + ay * by + az * bz;
}

struct FourVec3
{
	FourVec3() {
		for (auto vx : x)
		{
			vx = static_cast<float>(rand() % 32768);
		}
		for (auto vy : y)
		{
			vy = static_cast<float>(rand() % 32768);
		}
		for (auto vz : z)
		{
			vz = static_cast<float>(rand() % 32768);
		}
	}
	std::array<float, 4> x;
	std::array<float, 4> y;
	std::array<float, 4> z;

	static std::array<float, 4> Dot(const FourVec3& a, const FourVec3& b);
};

std::array<float, 4> FourVec3::Dot(const FourVec3& a, const FourVec3& b)
{
	std::array<float, 4> result;
	for (int i = 0; i < 4; i++)
	{
		result[i] = a.x[i] * b.x[i] + a.y[i] * b.y[i] + a.z[i] * b.z[i];
	}
	return result;
}

const unsigned long fromRange = 8;
const unsigned long toRange = 1 << 20;

static void BM_ArrayVec3(benchmark::State& state)
{
	std::array<Vec3, 4> array_vec3 = {};
	for (auto _ : state)
	{
		for (auto v : array_vec3)
		{
			benchmark::DoNotOptimize(Vec3::Dot(v, v));
		}
	}
}
BENCHMARK(BM_ArrayVec3)->Range(fromRange, toRange);

static void BM_Vec3Array(benchmark::State& state)
{
	FourVec3 four_vec3{};
	for (auto _ : state)
	{
		benchmark::DoNotOptimize(FourVec3::Dot(four_vec3, four_vec3));
	}
}
BENCHMARK(BM_Vec3Array)->Range(fromRange, toRange);

BENCHMARK_MAIN();