#include "monkey_watcher.hpp"

void MonkeyWatcher::filter_op(std::vector<Monkey> &monkeys)
{
}

const std::vector<Monkey> &MonkeyWatcher::get_monkeys_seen() const
{
    return this->monkeys_seen;
}