#include <cinttypes>

/**
 * A helper struct to store a parameter pack of indexes
 */
template <std::size_t... Is>
struct Indices {};

/**
 * Generate parameter pack of indexes from 0 to N-1
 */
template<std::size_t N, std::size_t... Is>
struct index_builder : index_builder<N - 1, N - 1, Is...> {};

/**
 * Specialization for index_builder to stop the recursion
 */
template<std::size_t... Is>
struct index_builder<0, Is...> : Indices<Is...> {};
