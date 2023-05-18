#include <chrono>
#include <random>

namespace BaseGraph {
namespace random {

std::mt19937_64
    rng(std::chrono::system_clock::now().time_since_epoch().count());

}
} // namespace BaseGraph::random
