// Copyright © 2017-2022 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.
//
// This is a GENERATED FILE, changes made here MAY BE LOST.
// Generated one-time (codegen/bin/cointests)
//

#include "TestUtilities.h"
#include <TrustWalletCore/TWCoinTypeConfiguration.h>
#include <gtest/gtest.h>


TEST(TWSpectreChainCoinType, TWCoinType) {
    const auto coin = TWCoinTypeSpectreChain;
    const auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(coin));
    const auto id = WRAPS(TWCoinTypeConfigurationGetID(coin));
    const auto name = WRAPS(TWCoinTypeConfigurationGetName(coin));
    const auto chainId = WRAPS(TWCoinTypeChainId(coin));
    const auto txId = WRAPS(TWStringCreateWithUTF8Bytes("0x0b0131b5d8b336353d4092af2249e3ff298eddfbac872d032d71333536f6fc12"));
    const auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(coin, txId.get()));
    const auto accId = WRAPS(TWStringCreateWithUTF8Bytes("0xDA0786dF404b2E1Da57D0eE495F87462b90eA7e1"));
    const auto accUrl = WRAPS(TWCoinTypeConfigurationGetAccountURL(coin, accId.get()));

    assertStringsEqual(id, "spectre");
    assertStringsEqual(name, "SpectreChain");
    assertStringsEqual(symbol, "SPC");
    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(coin), 18);
    ASSERT_EQ(TWCoinTypeBlockchain(coin), TWBlockchainEthereum);
    ASSERT_EQ(TWCoinTypeP2shPrefix(coin), 0x0);
    ASSERT_EQ(TWCoinTypeStaticPrefix(coin), 0x0);
    assertStringsEqual(chainId, "39");
    assertStringsEqual(txUrl, "https://spectre-scan.io//tx/0x0b0131b5d8b336353d4092af2249e3ff298eddfbac872d032d71333536f6fc12");
    assertStringsEqual(accUrl, "https://spectre-scan.io//address/0xDA0786dF404b2E1Da57D0eE495F87462b90eA7e1");
}
