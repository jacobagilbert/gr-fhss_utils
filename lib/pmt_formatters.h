#pragma once

#include <fmt/core.h>
#include <pmt/pmt.h>

// Formatter for pmt::pmt_t
template <> 
struct fmt::formatter<pmt::pmt_t> : fmt::formatter<std::string_view> {
    auto format(const pmt::pmt_t& p, format_context& ctx) const {
        return fmt::formatter<std::string_view>::format(pmt::write_string(p), ctx);
    }
};