/*=============================================================================
  Copyright (c) 2011-2019 Bolero MURAKAMI
  https://github.com/bolero-MURAKAMI/Sprout

  Distributed under the Boost Software License, Version 1.0. (See accompanying
  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
=============================================================================*/
#ifndef SPROUT_NUMERIC_DFT_CXX14_PHASE_SPECTRUM_HPP
#define SPROUT_NUMERIC_DFT_CXX14_PHASE_SPECTRUM_HPP

#include <sprout/config.hpp>
#include <sprout/iterator/type_traits/is_iterator_of.hpp>
#include <sprout/type_traits/enabler_if.hpp>
#include <sprout/numeric/dft/phase_spectrum_value.hpp>

namespace sprout {
	//
	// phase_spectrum
	//
	template<
		typename InputIterator, typename OutputIterator,
		typename sprout::enabler_if<sprout::is_iterator_outputable<OutputIterator>::value>::type = sprout::enabler
	>
	inline SPROUT_CXX14_CONSTEXPR OutputIterator
	phase_spectrum(InputIterator first, InputIterator last, OutputIterator result) {
		while (first != last) {
			*result++ = sprout::phase_spectrum_value(*first++);
		}
		return result;
	}
}	// namespace sprout

#endif	// #ifndef SPROUT_NUMERIC_DFT_CXX14_PHASE_SPECTRUM_HPP
