/*################################################################################
  ##
  ##   Copyright (C) 2011-2018 Keith O'Hara
  ##
  ##   This file is part of the StatsLib C++ library.
  ##
  ##   StatsLib is free software: you can redistribute it and/or modify
  ##   it under the terms of the GNU General Public License as published by
  ##   the Free Software Foundation, either version 2 of the License, or
  ##   (at your option) any later version.
  ##
  ##   StatsLib is distributed in the hope that it will be useful,
  ##   but WITHOUT ANY WARRANTY; without even the implied warranty of
  ##   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  ##   GNU General Public License for more details.
  ##
  ################################################################################*/

/*
 * pdf of the uniform distribution
 */

#ifndef _statslib_dunif_HPP
#define _statslib_dunif_HPP

//
// single input
template<typename T>
statslib_constexpr T dunif(const T x, const T a_par, const T b_par, const bool log_form = false);

template<typename T>
statslib_constexpr T dunif(const T x);

//
// matrix/vector input

template<typename Ta, typename Tb, typename Tc = Tb>
void dunif_int(const Ta* __stats_pointer_settings__ vals_in, const Tb a_par, const Tb b_par, const bool log_form, 
                     Tc* __stats_pointer_settings__ vals_out, const uint_t num_elem)

#ifdef STATS_USE_ARMA
template<typename Ta, typename Tb, typename Tc = Tb>
ArmaMat<Tc> dunif(const ArmaMat<Ta>& X, const Tb a_par, const Tb b_par, const bool log_form = false);
#endif

#ifdef STATS_USE_BLAZE
template<typename Ta, typename Tb, typename Tc = Tb, bool To = blaze::columnMajor>
BlazeMat<Tc,To> dunif(const BlazeMat<Ta,To>& X, const Tb a_par, const Tb b_par, const bool log_form = false);
#endif

#ifdef STATS_USE_EIGEN
template<typename Ta, typename Tb, typename Tc = Tb, int iTr = Eigen::Dynamic, int iTc = Eigen::Dynamic>
EigMat<Tc,iTr,iTc> dunif(const EigMat<Ta,iTr,iTc>& X, const Tb a_par, const Tb b_par, const bool log_form = false);
#endif

//
// include implementation files

#include "dunif.ipp"

#endif
