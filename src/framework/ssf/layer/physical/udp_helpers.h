#ifndef SSF_LAYER_PHYSICAL_UDP_HELPERS_H_
#define SSF_LAYER_PHYSICAL_UDP_HELPERS_H_

#include <boost/asio/io_service.hpp>
#include <boost/asio/ip/udp.hpp>

#include <boost/system/error_code.hpp>

#include "ssf/layer/parameters.h"

namespace ssf {
namespace layer {
namespace physical {
namespace detail {

boost::asio::ip::udp::endpoint make_udp_endpoint(
    boost::asio::io_service& io_service, const LayerParameters& parameters,
    boost::system::error_code& ec);

}  // detail
}  // physical
}  // layer
}  // ssf

#endif  // SSF_LAYER_PHYSICAL_UDP_HELPERS_H_
