#include <clients/nrt/NoveltyClient.hpp>

#include <FluidMaxWrapper.hpp>

void ext_main(void*)
{
  using namespace fluid::client;
  makeMaxWrapper<NoveltyClient>("fluid.bufnoveltyslice~"); 
 
}


