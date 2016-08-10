//------------------------------------------------------------------------------
/*
    This file is part of blnd: https://github.com/bln/blnd
    Copyright (c) 2016 Bln

    Permission to use, copy, modify, and/or distribute this software for any
    purpose  with  or without fee is hereby granted, provided that the above
    copyright notice and this permission notice appear in all copies.

    THE  SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
    WITH  REGARD  TO  THIS  SOFTWARE  INCLUDING  ALL  IMPLIED  WARRANTIES  OF
    MERCHANTABILITY  AND  FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
    ANY  SPECIAL ,  DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
    WHATSOEVER  RESULTING  FROM  LOSS  OF USE, DATA OR PROFITS, WHETHER IN AN
    ACTION  OF  CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/
//==============================================================================

#ifndef BLN_PROTOCOL_SYSTEMPARAMETERS_H_INCLUDED
#define BLN_PROTOCOL_SYSTEMPARAMETERS_H_INCLUDED

#include <cstdint>
#include <string>

namespace ripple {

// Various protocol and system specific constant globals.

/* The name of the system. */
static inline
std::string const&
systemName ()
{
    static std::string const name = "bln";
    return name;
}

/** Configure the initial native currency for bln. */
static
std::uint64_t const
SYSTEM_CURRENCY_INITIAL = 660 * 1000 * 1000;

/** Number of drops per 1 BLN */
static
std::uint64_t const
SYSTEM_CURRENCY_PARTS = 1000000;

/** Number of drops in the genesis account. */
static
std::uint64_t const
SYSTEM_CURRENCY_START = SYSTEM_CURRENCY_INITIAL * SYSTEM_CURRENCY_PARTS;

/** Period 1 for inflation. */
static
std::uint64_t const
SYSTEM_INFLATE_PERIOD_1 = 31536000ull;  // Next years.

static
std::uint64_t const
SYSTEM_INFLATE_AMOUNT_1 = 100 * 1000 * 1000 * SYSTEM_CURRENCY_PARTS;

/** Period 2 for inflation. */
static
std::uint64_t const
SYSTEM_INFLATE_PERIOD_2 = 2 * 31536000ull; //  Third year.

static
std::uint64_t const
SYSTEM_INFLATE_AMOUNT_2 = 100 * 1000 * 1000 * SYSTEM_CURRENCY_PARTS;

/** Period 3 for inflation. */
static
std::uint64_t const
SYSTEM_INFLATE_PERIOD_3 = 3 * 31536000ull; //  Third year.

static
std::uint64_t const
SYSTEM_INFLATE_AMOUNT_3 = 100 * 1000 * 1000 * SYSTEM_CURRENCY_PARTS;

/** Period 4 for inflation. */
static
std::uint64_t const
SYSTEM_INFLATE_PERIOD_4 = 4 * 31536000ull; //  4th year.

static
std::uint64_t const
SYSTEM_INFLATE_AMOUNT_4 = 700 * 1000 * 1000 * SYSTEM_CURRENCY_PARTS;

/** Period 5 for inflation. */
static
std::uint64_t const
SYSTEM_INFLATE_PERIOD_5 = 5 * 31536000ull; //  5th year.

static
std::uint64_t const
SYSTEM_INFLATE_AMOUNT_5 = 700 * 1000 * 1000 * SYSTEM_CURRENCY_PARTS;

/** Period 6 for inflation. */
static
std::uint64_t const
SYSTEM_INFLATE_PERIOD_6 = 6 * 31536000ull; //  6th year.

static
std::uint64_t const
SYSTEM_INFLATE_AMOUNT_6 = 500 * 1000 * 1000 * SYSTEM_CURRENCY_PARTS;

/** Period 7 for inflation. */
static
std::uint64_t const
SYSTEM_INFLATE_PERIOD_7 = 2 * 31536000ull; //  7th year.

static
std::uint64_t const
SYSTEM_INFLATE_AMOUNT_7 = 500 * 1000 * 1000 * SYSTEM_CURRENCY_PARTS;

/* The currency code for the native currency. */
static inline
std::string const&
systemCurrencyCode ()
{
    static std::string const code = "BLN";
    return code;
}

} // bln

#endif
