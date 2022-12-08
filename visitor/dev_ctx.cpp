#include "dev_ctx.h"
#include "dev_impl.h"

void statPorts(std::vector<std::unique_ptr<Port> > const& ports)
{
    for (auto const& p : ports) {
        p->accept(Stat{});
    }
}