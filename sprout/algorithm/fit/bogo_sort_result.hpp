#ifndef SPROUT_ALGORITHM_FIT_BOGO_SORT_RESULT_HPP
#define SPROUT_ALGORITHM_FIT_BOGO_SORT_RESULT_HPP

#include <sprout/config.hpp>
#include <sprout/tuple/tuple.hpp>
#include <sprout/fixed_container/traits.hpp>
#include <sprout/fixed_container/functions.hpp>
#include <sprout/utility/forward.hpp>
#include <sprout/algorithm/fixed/bogo_sort_result.hpp>
#include <sprout/algorithm/fit/result_of.hpp>
#include <sprout/sub_array.hpp>

namespace sprout {
	namespace fit {
		namespace detail {
			template<typename Container, typename UniformRandomNumberGenerator, typename Sorted>
			SPROUT_CONSTEXPR inline sprout::tuples::tuple<
				typename sprout::fit::result_of::algorithm<Container>::type,
				typename std::decay<UniformRandomNumberGenerator>::type
			> bogo_sort_result_impl_1(
				Sorted const& sorted,
				typename sprout::fixed_container_traits<Container>::difference_type offset
				)
			{
				typedef sprout::tuples::tuple<
					typename sprout::fit::result_of::algorithm<Container>::type,
					typename std::decay<UniformRandomNumberGenerator>::type
				> result_type;
				return result_type(
					sprout::sub_copy(
						sprout::get_fixed(sprout::tuples::get<0>(sorted)),
						offset,
						offset + sprout::size(sprout::tuples::get<0>(sorted))
						),
					sprout::tuples::get<1>(sorted)
					);
			}
			template<typename Container, typename UniformRandomNumberGenerator, typename Compare>
			SPROUT_CONSTEXPR inline sprout::tuples::tuple<
				typename sprout::fit::result_of::algorithm<Container>::type,
				typename std::decay<UniformRandomNumberGenerator>::type
			> bogo_sort_result_impl(
				Container const& cont,
				UniformRandomNumberGenerator&& g,
				Compare comp,
				typename sprout::fixed_container_traits<Container>::difference_type offset
				)
			{
				return sprout::fit::detail::bogo_sort_result_impl_1<Container, UniformRandomNumberGenerator>(
					sprout::fixed::bogo_sort_result(cont, sprout::forward<UniformRandomNumberGenerator>(g), comp),
					offset
					);
			}
		}	// namespace detail
		//
		// bogo_sort_result
		//
		template<typename Container, typename UniformRandomNumberGenerator, typename Compare>
		SPROUT_CONSTEXPR inline sprout::tuples::tuple<
			typename sprout::fit::result_of::algorithm<Container>::type,
			typename std::decay<UniformRandomNumberGenerator>::type
		> bogo_sort_result(
			Container const& cont,
			UniformRandomNumberGenerator&& g,
			Compare comp
			)
		{
			return sprout::fit::detail::bogo_sort_result_impl(
				cont,
				sprout::forward<UniformRandomNumberGenerator>(g),
				comp,
				sprout::fixed_begin_offset(cont)
				);
		}

		namespace detail {
			template<typename Container, typename UniformRandomNumberGenerator>
			SPROUT_CONSTEXPR inline sprout::tuples::tuple<
				typename sprout::fit::result_of::algorithm<Container>::type,
				typename std::decay<UniformRandomNumberGenerator>::type
			> bogo_sort_result_impl(
				Container const& cont,
				UniformRandomNumberGenerator&& g,
				typename sprout::fixed_container_traits<Container>::difference_type offset
				)
			{
				return sprout::fit::detail::bogo_sort_result_impl_1<Container, UniformRandomNumberGenerator>(
					sprout::fixed::bogo_sort_result(cont, sprout::forward<UniformRandomNumberGenerator>(g)),
					offset
					);
			}
		}	// namespace detail
		//
		// bogo_sort_result
		//
		template<typename Container, typename UniformRandomNumberGenerator>
		SPROUT_CONSTEXPR inline sprout::tuples::tuple<
			typename sprout::fit::result_of::algorithm<Container>::type,
			typename std::decay<UniformRandomNumberGenerator>::type
		> bogo_sort_result(
			Container const& cont,
			UniformRandomNumberGenerator&& g
			)
		{
			return sprout::fit::detail::bogo_sort_result_impl(
				cont,
				sprout::forward<UniformRandomNumberGenerator>(g),
				sprout::fixed_begin_offset(cont)
				);
		}
	}	// namespace fit
}	// namespace sprout

#endif	// #ifndef SPROUT_ALGORITHM_FIT_BOGO_SORT_RESULT_HPP
