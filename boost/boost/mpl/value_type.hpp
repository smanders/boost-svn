
#ifndef BOOST_MPL_VALUE_TYPE_HPP_INCLUDED
#define BOOST_MPL_VALUE_TYPE_HPP_INCLUDED

// Copyright Aleksey Gurtovoy 2003-2004
// Copyright David Abrahams 2003-2004
//
// Distributed under the Boost Software License, Version 1.0. 
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// See http://www.boost.org/libs/mpl for documentation.

// $Source$
// $Date$
// $Revision$

#include <boost/mpl/value_type_fwd.hpp>
#include <boost/mpl/sequence_tag.hpp>
#include <boost/mpl/aux_/na_spec.hpp>
#include <boost/mpl/aux_/lambda_support.hpp>

namespace boost { namespace mpl {

template<
      typename BOOST_MPL_AUX_NA_PARAM(AssociativeSequence)
    , typename BOOST_MPL_AUX_NA_PARAM(T)
    >
struct value_type
    : value_type_impl< typename sequence_tag<AssociativeSequence>::type >
        ::template apply<AssociativeSequence,T>
{
    BOOST_MPL_AUX_LAMBDA_SUPPORT(2,value_type,(AssociativeSequence,T))
};

BOOST_MPL_AUX_NA_SPEC(2, value_type)

#if BOOST_MPL_CFG_MSVC_60_ETI_BUG
template<>
struct value_type<int, int>
{
    typedef int type;
};
#endif

    
}}

#endif // BOOST_MPL_VALUE_TYPE_HPP_INCLUDED
