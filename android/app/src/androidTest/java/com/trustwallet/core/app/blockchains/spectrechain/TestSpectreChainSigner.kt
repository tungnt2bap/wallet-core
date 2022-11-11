// Copyright © 2017-2022 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

package com.trustwallet.core.app.blockchains.spectrechain

import com.google.protobuf.ByteString
import com.trustwallet.core.app.utils.Numeric
import com.trustwallet.core.app.utils.toHexByteArray
import com.trustwallet.core.app.utils.toHexBytes
import com.trustwallet.core.app.utils.toHexBytesInByteString
import org.junit.Assert.assertEquals
import org.junit.Test
import wallet.core.jni.SpectreChainSigner
import wallet.core.jni.proto.SpectreChain

class TestSpectreChainSigner {

    init {
        System.loadLibrary("TrustWalletCore")
    }

    @Test
    fun SpectreChainTransactionSigning() {
        // TODO: Finalize implementation

        //val transfer = SpectreChain.TransferMessage.newBuilder()
        //    .setTo("...")
        //    .setAmount(...)
        //    ...
        //    .build()
        //val signingInput = SpectreChain.SigningInput.newBuilder()
        //    ...
        //    .build()

        //val output: SpectreChain.SigningOutput = SpectreChainSigner.sign(signingInput)

        //assertEquals(
        //    "__EXPECTED_RESULT_DATA__",
        //    Numeric.toHexString(output.encoded.toByteArray())
        //)
    }
}
