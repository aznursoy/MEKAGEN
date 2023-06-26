# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_kalbot_brignup_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED kalbot_brignup_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(kalbot_brignup_FOUND FALSE)
  elseif(NOT kalbot_brignup_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(kalbot_brignup_FOUND FALSE)
  endif()
  return()
endif()
set(_kalbot_brignup_CONFIG_INCLUDED TRUE)

# output package information
if(NOT kalbot_brignup_FIND_QUIETLY)
  message(STATUS "Found kalbot_brignup: 0.0.0 (${kalbot_brignup_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'kalbot_brignup' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${kalbot_brignup_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(kalbot_brignup_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${kalbot_brignup_DIR}/${_extra}")
endforeach()
