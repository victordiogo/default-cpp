#include <benchmark/benchmark.h>

void BM_foo(benchmark::State& state)
{
  for (auto _ : state) {
    // benchmark
  }
}

BENCHMARK(BM_foo);

BENCHMARK_MAIN();