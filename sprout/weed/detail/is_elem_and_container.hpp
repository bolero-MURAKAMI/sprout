/*=============================================================================
  Copyright (c) 2011-2019 Bolero MURAKAMI
  https://github.com/bolero-MURAKAMI/Sprout

  Distributed under the Boost Software License, Version 1.0. (See accompanying
  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
=============================================================================*/
#ifndef SPROUT_WEED_DETAIL_IS_ELEM_AND_CONTAINER_HPP
#define SPROUT_WEED_DETAIL_IS_ELEM_AND_CONTAINER_HPP

#include <type_traits>
#include <sprout/config.hpp>
#include <sprout/type_traits/integral_constant.hpp>
#include <sprout/weed/traits/type/is_container.hpp>

namespace sprout {
	namespace weed {
		namespace detail {
			template<typename T, typename U, typename = void>
			struct is_elem_and_container
				: public sprout::false_type
			{};
			template<typename T, typename U>
			struct is_elem_and_container<
				T,
				U,
				typename std::enable_if<
					sprout::weed::traits::is_container<U>::value
					&& std::is_same<
						typename U::value_type,
						T
					>::value
				>::type
			>
				: public sprout::true_type
			{};
		}	// namespace detail
	}	// namespace weed
}	// namespace sprout

#endif	// #ifndef SPROUT_WEED_DETAIL_IS_ELEM_AND_CONTAINER_HPP
