
#ifndef BOOST_MPL_VECTOR_VECTOR100_HPP_INCLUDED
#define BOOST_MPL_VECTOR_VECTOR100_HPP_INCLUDED

#   include <boost/mpl/vector/vector50.hpp>
#   include <boost/mpl/aux_/config/typeof.hpp>
#   include <boost/mpl/aux_/config/ctps.hpp>
#   include <boost/preprocessor/iterate.hpp>

namespace boost { namespace mpl {

#   define BOOST_PP_ITERATION_PARAMS_1 \
    (3,(51, 100, <boost/mpl/vector/aux_/numbered.hpp>))
#   include BOOST_PP_ITERATE()

}}

#endif // BOOST_MPL_VECTOR_VECTOR100_HPP_INCLUDED
