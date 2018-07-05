#include <cassert>
#include <cstring>

#include "steakworms.hpp"
#undef EXTERN_ABI

namespace msabi {
#define EXTERN_ABI [[gnu::ms_abi, gnu::thiscall]]
template <size_t N>
EXTERN_ABI void unimplemented(void *_this) {
  debug("unimplemented: %s->vtbl[%zu](%p, ...)", static_cast<isteam_object *>(_this)->clazz, N, _this);
  assert(false);
}
#undef EXTERN_ABI

decltype(&unimplemented<0>) unimplemented_vtbl[] = {
    &unimplemented<0>,
    &unimplemented<1>,
    &unimplemented<2>,
    &unimplemented<3>,
    &unimplemented<4>,
    &unimplemented<5>,
    &unimplemented<6>,
    &unimplemented<7>,
    &unimplemented<8>,
    &unimplemented<9>,
    &unimplemented<10>,
    &unimplemented<11>,
    &unimplemented<12>,
    &unimplemented<13>,
    &unimplemented<14>,
    &unimplemented<15>,
    &unimplemented<16>,
    &unimplemented<17>,
    &unimplemented<18>,
    &unimplemented<19>,
    &unimplemented<20>,
    &unimplemented<21>,
    &unimplemented<22>,
    &unimplemented<23>,
    &unimplemented<24>,
    &unimplemented<25>,
    &unimplemented<26>,
    &unimplemented<27>,
    &unimplemented<28>,
    &unimplemented<29>,
    &unimplemented<30>,
    &unimplemented<31>,
    &unimplemented<32>,
    &unimplemented<33>,
    &unimplemented<34>,
    &unimplemented<35>,
    &unimplemented<36>,
    &unimplemented<37>,
    &unimplemented<38>,
    &unimplemented<39>,
    &unimplemented<40>,
    &unimplemented<41>,
    &unimplemented<42>,
    &unimplemented<43>,
    &unimplemented<44>,
    &unimplemented<45>,
    &unimplemented<46>,
    &unimplemented<47>,
    &unimplemented<48>,
    &unimplemented<49>,
};
} // namespace msabi
