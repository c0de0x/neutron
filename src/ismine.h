// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2015 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_SCRIPT_ISMINE_H
#define BITCOIN_SCRIPT_ISMINE_H

#include "script/standard.h"

#include <stdint.h>

class CKeyStore;
class CScript;

/** IsMine() return codes */
enum isminetype
{
    MINE_NO = 0,
    MINE_WATCH_ONLY = 1,
    MINE_SPENDABLE = 2,
};
/** used for bitflags of isminetype */
typedef uint8_t isminefilter;

bool IsMine(const CKeyStore& keystore, const CScript& scriptPubKey);
bool IsMine(const CKeyStore& keystore, const CTxDestination &dest);

#endif // BITCOIN_SCRIPT_ISMINE_H
