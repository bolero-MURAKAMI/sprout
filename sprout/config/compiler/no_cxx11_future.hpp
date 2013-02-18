#ifndef SPROUT_CONFIG_COMPILER_NO_CXX11_FUTURE_HPP
#define SPROUT_CONFIG_COMPILER_NO_CXX11_FUTURE_HPP

#ifdef SPROUT_NO_CONSTEXPR
#	define SPROUT_NO_CXX11_CONSTEXPR
#endif
#ifdef SPROUT_NO_DEFAULTED_FUNCTIONS
#	define SPROUT_NO_CXX11_DEFAULTED_FUNCTIONS
#endif
#ifdef SPROUT_NO_DELETED_FUNCTIONS
#	define SPROUT_NO_CXX11_DELETED_FUNCTIONS
#endif
#ifdef SPROUT_NO_EXPLICIT_CONVERSION_OPERATORS
#	define SPROUT_NO_CXX11_EXPLICIT_CONVERSION_OPERATORS
#endif
#ifdef SPROUT_NO_NOEXCEPT
#	define SPROUT_NO_CXX11_NOEXCEPT
#endif
#ifdef SPROUT_NO_TEMPLATE_ALIASES
#	define SPROUT_NO_CXX11_TEMPLATE_ALIASES
#endif
#ifdef SPROUT_NO_USER_DEFINED_LITERALS
#	define SPROUT_NO_CXX11_USER_DEFINED_LITERALS
#endif
#ifdef SPROUT_NO_DELEGATING_CONSTRUCTORS
#	define SPROUT_NO_CXX11_DELEGATING_CONSTRUCTORS
#endif
#ifdef SPROUT_NO_UNICODE_LITERALS
#	define SPROUT_NO_CXX11_UNICODE_LITERALS
#endif

#endif	// #ifndef SPROUT_CONFIG_COMPILER_NO_CXX11_FUTURE_HPP
