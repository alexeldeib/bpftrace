#include "../mocks.h"
#include "common.h"

namespace bpftrace {
namespace test {
namespace codegen {

using ::testing::Return;

TEST(codegen, builtin_probe_wild)
{
  auto bpftrace = get_mock_bpftrace();

  test(*bpftrace,
       "tracepoint:sched:sched_on* { @x = probe }",

       NAME);
}

} // namespace codegen
} // namespace test
} // namespace bpftrace
