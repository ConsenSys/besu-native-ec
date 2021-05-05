/*
 * Copyright ConsenSys AG.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not
 * use this file except in compliance with the License. You may obtain a copy of
 * the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations under
 * the License.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#pragma once

//  This test vectors are copied from
// https://csrc.nist.gov/groups/STM/cavp/documents/dss/186-3ecdsatestvectors.zip
//
// The following sets have been copied from SigGen.txt:
// [P-256,SHA-224], [P-256,SHA-256], [P-256,SHA-384], [P-256,SHA-512]
//
// SigGen.txt contain also the values k, R and S. k is the random value that is
// generated when a new signature is created, R and S are the expected signature
// parts. P-256 is a non-deterministic algorithm, in order to use these parts of
// the test vectors, k would need to be returned by the RNG (random number
// generator). In the current implementation of this library it is not possible
// to mock this behavior. Therefore the signatures in the tests are created
// non-deterministically and are verified by calling p256_verify instead of
// comparing them to R and S from the test vectors.
struct sign_test_vector {
  const char data[257];
  const char private_key[65];
  const char public_key[129];
};

struct sign_test_vector sign_test_vectors_sha224[] = {
    {.data =
         {"ff624d0ba02c7b6370c1622eec3fa2186ea681d1659e0a845448e777b75a8e77a77b"
          "b26e5733179d58ef9bc8a4e8b6971aef2539f77ab0963a3415bbd6258339bd1bf55d"
          "e65db520c63f5b8eab3d55debd05e9494212170f5d65b3286b8b668705b1e2b2b556"
          "8610617abb51d2dd0cb450ef59df4b907da90cfa7b268de8c4c2"},
     .private_key =
         {"708309a7449e156b0db70e5b52e606c7e094ed676ce8953bf6c14757c826f590"},
     .public_key =
         {"29578c7ab6ce0d11493c95d5ea05d299d536801ca9cbd50e9924e43b733b83ab"
          "08c8049879c6278b2273348474158515accaa38344106ef96803c5a05adc4800"}},
    {.data =
         {"9155e91fd9155eeed15afd83487ea1a3af04c5998b77c0fe8c43dcc479440a8a9a89"
          "efe883d9385cb9edfde10b43bce61fb63669935ad39419cf29ef3a936931733bfc23"
          "78e253e73b7ae9a3ec7a6a7932ab10f1e5b94d05160c053988f3bdc9167155d06933"
          "7d42c9a7056619efc031fa5ec7310d29bd28980b1e3559757578"},
     .private_key =
         {"90c5386100b137a75b0bb495002b28697a451add2f1f22cb65f735e8aaeace98"},
     .public_key =
         {"4a92396ff7930b1da9a873a479a28a9896af6cc3d39345b949b726dc3cd978b5"
          "475abb18eaed948879b9c1453e3ef2755dd90f77519ec7b6a30297aad08e4931"}},
    {.data =
         {"b242a7586a1383368a33c88264889adfa3be45422fbef4a2df4e3c5325a9c7757017"
          "e0d5cf4bbf4de7f99d189f81f1fd2f0dd645574d1eb0d547eead9375677819297c1a"
          "be62526ae29fc54cdd11bfe17714f2fbd2d0d0e8d297ff98535980482dd5c1ebdc5a"
          "7274aabf1382c9f2315ca61391e3943856e4c5e616c2f1f7be0d"},
     .private_key =
         {"a3a43cece9c1abeff81099fb344d01f7d8df66447b95a667ee368f924bccf870"},
     .public_key =
         {"5775174deb0248112e069cb86f1546ac7a78bc2127d0cb953bad46384dd6be5b"
          "a27020952971cc0b0c3abd06e9ca3e141a4943f560564eba31e5288928bc7ce7"}},
    {.data =
         {"b64005da76b24715880af94dba379acc25a047b06066c9bedc8f17b8c74e74f4fc72"
          "0d9f4ef0e2a659e0756931c080587ebdcd0f85e819aea6dacb327a9d96496da53ea2"
          "1aef3b2e793a9c0def5196acec99891f46ead78a85bc7ab644765781d3543da9fbf9"
          "fec916dca975ef3b4271e50ecc68bf79b2d8935e2b25fc063358"},
     .private_key =
         {"7bbc8ff13f6f921f21e949b224c16b7176c5984d312b671cf6c2e4841135fc7f"},
     .public_key =
         {"f888e913ec6f3cd8b31eb89e4f8aaa8887d30ae5348ed7118696949d5b8cc7c1"
          "08895d09620500d244e5035e262dea3f2867cd8967b226324d5c05220d8b410c"}},
    {.data =
         {"fe6e1ea477640655eaa1f6e3352d4bce53eb3d95424df7f238e93d8531da8f36bc35"
          "fa6be4bf5a6a382e06e855139eb617a9cc9376b4dafacbd80876343b12628619d7cb"
          "e1bff6757e3706111ed53898c0219823adbc044eaf8c6ad449df8f6aab9d444dadb5"
          "c3380eec0d91694df5fc4b30280d4b87d27e67ae58a1df828963"},
     .private_key =
         {"daf5ec7a4eebc20d9485796c355b4a65ad254fe19b998d0507e91ea24135f45d"},
     .public_key =
         {"137c465085c1b1b8cccbe9fccbe9d0295a331aaf332f3ed2e285d16e574b943b"
          "d3e8d5a24cd218c19760b0e85b35a8569945aa857cbf0fd6a3ce127581b217b6"}},
    {.data =
         {"907c0c00dc080a688548957b5b8b1f33ba378de1368023dcad43242411f554eb7d39"
          "2d3e5c1668fad3944ff9634105343d83b8c85d2a988da5f5dc60ee0518327caed6dd"
          "5cf4e9bc6222deb46d00abde745f9b71d6e7aee6c7fdfc9ed053f2c0b611d4c68630"
          "88bd012ea9810ee94f8e58905970ebd07353f1f409a371ed03e3"},
     .private_key =
         {"8729a8396f262dabd991aa404cc1753581cea405f0d19222a0b3f210de8ee3c5"},
     .public_key =
         {"82b1f1a7af9b48ca8452613d7032beb0e4f28fe710306aeccc959e4d03662a35"
          "5e39f33574097b8d32b471a591972496f5d44db344c037d13f06fafc75f016fd"}},
    {.data =
         {"771c4d7bce05610a3e71b272096b57f0d1efcce33a1cb4f714d6ebc0865b2773ec5e"
          "edc25fae81dee1d256474dbd9676623614c150916e6ed92ce4430b26037d28fa5252"
          "ef6b10c09dc2f7ee5a36a1ea7897b69f389d9f5075e271d92f4eb97b148f3abcb1e5"
          "be0b4feb8278613d18abf6da60bfe448238aa04d7f11b71f44c5"},
     .private_key =
         {"f1b62413935fc589ad2280f6892599ad994dae8ca3655ed4f7318cc89b61aa96"},
     .public_key =
         {"e0bbfe4016eea93e6f509518cbffc25d492de6ebbf80465a461caa5bdc018159"
          "3231ee7a119d84fa56e3034d50fea85929aec2eb437abc7646821e1bf805fb50"}},
    {.data =
         {"a3b2825235718fc679b942e8ac38fb4f54415a213c65875b5453d18ca012320ddfbb"
          "c58b991eaebadfc2d1a28d4f0cd82652b12e4d5bfda89eda3be12ac52188e38e8cce"
          "32a264a300c0e463631f525ae501348594f980392c76b4a12ddc88e5ca086cb8685d"
          "03895919a8627725a3e00c4728e2b7c6f6a14fc342b2937fc3dd"},
     .private_key =
         {"4caaa26f93f009682bbba6db6b265aec17b7ec1542bda458e8550b9e68eed18d"},
     .public_key =
         {"e3c58c1c254d11c7e781ad133e4c36dd1b5de362120d336a58e7b68813f3fbee"
          "59760db66120afe0d962c81a8e5586588fd19de2f40556371611c73af22c8a68"}},
    {.data =
         {"3e6e2a9bffd729ee5d4807849cd4250021d8184cda723df6ab0e5c939d39237c8e58"
          "af9d869fe62d3c97b3298a99e891e5e11aa68b11a087573a40a3e83c7965e7910d72"
          "f81cad0f42accc5c25a4fd3cdd8cee63757bbbfbdae98be2bc867d3bcb1333c4632c"
          "b0a55dffeb77d8b119c466cd889ec468454fabe6fbee7102deaf"},
     .private_key =
         {"7af4b150bb7167cb68037f280d0823ce5320c01a92b1b56ee1b88547481b1de9"},
     .public_key =
         {"cb3634ec4f0cbb99986be788f889e586026d5a851e80d15382f1bdb1bda2bc75"
          "51e4e43bc16fb114896b18198a1aebe6054ba20ed0c0317c1b8776158c0e6bfb"}},
    {.data =
         {"52e5c308e70329a17c71eaedb66bbee303c8ec48a6f1a2efb235d308563cd58553d4"
          "34e12f353227a9ea28608ec9c820ed83c95124e7a886f7e832a2de1032e78dc05920"
          "8f9ec354170b2b1cab992b52ac01e6c0e4e1b0112686962edc53ab226dafcc9fc7ba"
          "ed2cd9307160e8572edb125935db49289b178f35a8ad23f4f801"},
     .private_key =
         {"52ad53e849e30bec0e6345c3e9d98ebc808b19496c1ef16d72ab4a00bbb8c634"},
     .public_key =
         {"7cca1334bfc2a78728c50b370399be3f9690d445aa03c701da643eeb0b0f7fa8"
          "3f7522238668e615405e49b2f63faee58286000a30cdb4b564ac0df99bc8950f"}},
    {.data =
         {"d3e9e82051d4c84d699453c9ff44c7c09f6523bb92232bcf30bf3c380224249de296"
          "4e871d56a364d6955c81ef91d06482a6c7c61bc70f66ef22fad128d15416e7174312"
          "619134f968f1009f92cbf99248932efb533ff113fb6d949e21d6b80dfbbe69010c8d"
          "1ccb0f3808ea309bb0bac1a222168c95b088847e613749b19d04"},
     .private_key =
         {"80754962a864be1803bc441fa331e126005bfc6d8b09ed38b7e69d9a030a5d27"},
     .public_key =
         {"0aaeed6dd1ae020d6eefc98ec4241ac93cbd3c8afed05bb28007e7da5727571b"
          "2dda1d5b7872eb94dfffb456115037ff8d3e72f8ebdd8fcfc42391f96809be69"}},
    {.data =
         {"968951c2c1918436fe19fa2fe2152656a08f9a6b8aa6201920f1b424da98cee71928"
          "897ff087620cc5c551320b1e75a1e98d7d98a5bd5361c9393759614a6087cc0f7fb0"
          "1fcb173783eb4c4c23961a8231ac4a07d72e683b0c1bd4c51ef1b031df875e7b8d5a"
          "6e0628949f5b8f157f43dccaea3b2a4fc11181e6b451e06ceb37"},
     .private_key =
         {"cfa8c8bd810eb0d73585f36280ecdd296ee098511be8ad5eac68984eca8eb19d"},
     .public_key =
         {"c227a2af15dfa8734e11c0c50f77e24e77ed58dd8cccf1b0e9fa06bee1c64766"
          "b686592ce3745eb300d2704083db55e1fa8274e4cb7e256889ccc0bb34a60570"}},
    {.data =
         {"78048628932e1c1cdd1e70932bd7b76f704ba08d7e7d825d3de763bf1a062315f4af"
          "16eccefe0b6ebadccaf403d013f50833ce2c54e24eea8345e25f93b69bb048988d10"
          "2240225ceacf5003e2abdcc90299f4bf2c101585d36ecdd7a155953c674789d07048"
          "0d1ef47cc7858e97a6d87c41c6922a00ea12539f251826e141b4"},
     .private_key =
         {"b2021e2665ce543b7feadd0cd5a4bd57ffcc5b32deb860b4d736d9880855da3c"},
     .public_key =
         {"722e0abad4504b7832a148746153777694714eca220eced2b2156ca64cfed3dd"
          "f0351b357b3081e859c46cad5328c5afa10546e92bc6c3fd541796ac30397a75"}},
    {.data =
         {"9b0800c443e693067591737fdbcf0966fdfa50872d41d0c189d87cbc34c2771ee5e1"
          "255fd604f09fcf167fda16437c245d299147299c69046895d22482db29aba37ff57f"
          "756716cd3d6223077f747c4caffbecc0a7c9dfaaafd9a9817470ded8777e6355838a"
          "c54d11b2f0fc3f43668ff949cc31de0c2d15af5ef17884e4d66a"},
     .private_key =
         {"0c9bce6a568ca239395fc3552755575cbcdddb1d89f6f5ab354517a057b17b48"},
     .public_key =
         {"4814d454495df7103e2da383aba55f7842fd84f1750ee5801ad32c10d0be6c7d"
          "a0bd039d5097c8f0770477f6b18d247876e88e528bf0453eab515ffab8a9eda3"}},
    {.data =
         {"fc3b8291c172dae635a6859f525beaf01cf683765d7c86f1a4d768df7cae055f639e"
          "ccc08d7a0272394d949f82d5e12d69c08e2483e11a1d28a4c61f18193106e12e5de4"
          "a9d0b4bf341e2acd6b715dc83ae5ff63328f8346f35521ca378b311299947f63ec59"
          "3a5e32e6bd11ec4edb0e75302a9f54d21226d23314729e061016"},
     .private_key =
         {"1daa385ec7c7f8a09adfcaea42801a4de4c889fb5c6eb4e92bc611d596d68e3f"},
     .public_key =
         {"f04e9f2831d9697ae146c7d4552e5f91085cc46778400b75b76f00205252941d"
          "bd267148174cd0c2b019cd0a5256e2f3f889d1e597160372b5a1339c8d787f10"}},
};

struct sign_test_vector sign_test_vectors_sha256[] = {
    {.data =
         {"5905238877c77421f73e43ee3da6f2d9e2ccad5fc942dcec0cbd25482935faaf4169"
          "83fe165b1a045ee2bcd2e6dca3bdf46c4310a7461f9a37960ca672d3feb5473e2536"
          "05fb1ddfd28065b53cb5858a8ad28175bf9bd386a5e471ea7a65c17cc934a9d791e9"
          "1491eb3754d03799790fe2d308d16146d5c9b0d0debd97d79ce8"},
     .private_key =
         {"519b423d715f8b581f4fa8ee59f4771a5b44c8130b4e3eacca54a56dda72b464"},
     .public_key =
         {"1ccbe91c075fc7f4f033bfa248db8fccd3565de94bbfb12f3c59ff46c271bf83"
          "ce4014c68811f9a21a1fdb2c0e6113e06db7ca93b7404e78dc7ccd5ca89a4ca9"}},
    {.data =
         {"c35e2f092553c55772926bdbe87c9796827d17024dbb9233a545366e2e5987dd344d"
          "eb72df987144b8c6c43bc41b654b94cc856e16b96d7a821c8ec039b503e3d86728c4"
          "94a967d83011a0e090b5d54cd47f4e366c0912bc808fbb2ea96efac88fb3ebec9342"
          "738e225f7c7c2b011ce375b56621a20642b4d36e060db4524af1"},
     .private_key =
         {"0f56db78ca460b055c500064824bed999a25aaf48ebb519ac201537b85479813"},
     .public_key =
         {"e266ddfdc12668db30d4ca3e8f7749432c416044f2d2b8c10bf3d4012aeffa8a"
          "bfa86404a2e9ffe67d47c587ef7a97a7f456b863b4d02cfc6928973ab5b1cb39"}},
    {.data =
         {"3c054e333a94259c36af09ab5b4ff9beb3492f8d5b4282d16801daccb29f70fe61a0"
          "b37ffef5c04cd1b70e85b1f549a1c4dc672985e50f43ea037efa9964f096b5f62f7f"
          "fdf8d6bfb2cc859558f5a393cb949dbd48f269343b5263dcdb9c556eca074f2e98e6"
          "d94c2c29a677afaf806edf79b15a3fcd46e7067b7669f83188ee"},
     .private_key =
         {"e283871239837e13b95f789e6e1af63bf61c918c992e62bca040d64cad1fc2ef"},
     .public_key =
         {"74ccd8a62fba0e667c50929a53f78c21b8ff0c3c737b0b40b1750b2302b0bde8"
          "29074e21f3a0ef88b9efdf10d06aa4c295cc1671f758ca0e4cd108803d0f2614"}},
    {.data =
         {"0989122410d522af64ceb07da2c865219046b4c3d9d99b01278c07ff63eaf1039cb7"
          "87ae9e2dd46436cc0415f280c562bebb83a23e639e476a02ec8cff7ea06cd12c86dc"
          "c3adefbf1a9e9a9b6646c7599ec631b0da9a60debeb9b3e19324977f3b4f36892c8a"
          "38671c8e1cc8e50fcd50f9e51deaf98272f9266fc702e4e57c30"},
     .private_key =
         {"a3d2d3b7596f6592ce98b4bfe10d41837f10027a90d7bb75349490018cf72d07"},
     .public_key =
         {"322f80371bf6e044bc49391d97c1714ab87f990b949bc178cb7c43b7c22d89e1"
          "3c15d54a5cc6b9f09de8457e873eb3deb1fceb54b0b295da6050294fae7fd999"}},
    {.data =
         {"dc66e39f9bbfd9865318531ffe9207f934fa615a5b285708a5e9c46b7775150e818d"
          "7f24d2a123df3672fff2094e3fd3df6fbe259e3989dd5edfcccbe7d45e26a775a5c4"
          "329a084f057c42c13f3248e3fd6f0c76678f890f513c32292dd306eaa84a59abe34b"
          "16cb5e38d0e885525d10336ca443e1682aa04a7af832b0eee4e7"},
     .private_key =
         {"53a0e8a8fe93db01e7ae94e1a9882a102ebd079b3a535827d583626c272d280d"},
     .public_key =
         {"1bcec4570e1ec2436596b8ded58f60c3b1ebc6a403bc5543040ba82963057244"
          "8af62a4c683f096b28558320737bf83b9959a46ad2521004ef74cf85e67494e1"}},
    {.data =
         {"600974e7d8c5508e2c1aab0783ad0d7c4494ab2b4da265c2fe496421c4df238b0be2"
          "5f25659157c8a225fb03953607f7df996acfd402f147e37aee2f1693e3bf1c35eab3"
          "ae360a2bd91d04622ea47f83d863d2dfecb618e8b8bdc39e17d15d672eee03bb4ce2"
          "cc5cf6b217e5faf3f336fdd87d972d3a8b8a593ba85955cc9d71"},
     .private_key =
         {"4af107e8e2194c830ffb712a65511bc9186a133007855b49ab4b3833aefc4a1d"},
     .public_key =
         {"a32e50be3dae2c8ba3f5e4bdae14cf7645420d425ead94036c22dd6c4fc59e00"
          "d623bf641160c289d6742c6257ae6ba574446dd1d0e74db3aaa80900b78d4ae9"}},
    {.data =
         {"dfa6cb9b39adda6c74cc8b2a8b53a12c499ab9dee01b4123642b4f11af336a91a5c9"
          "ce0520eb2395a6190ecbf6169c4cba81941de8e76c9c908eb843b98ce95e0da29c5d"
          "4388040264e05e07030a577cc5d176387154eabae2af52a83e85c61c7c61da930c9b"
          "19e45d7e34c8516dc3c238fddd6e450a77455d534c48a152010b"},
     .private_key =
         {"78dfaa09f1076850b3e206e477494cddcfb822aaa0128475053592c48ebaf4ab"},
     .public_key =
         {"8bcfe2a721ca6d753968f564ec4315be4857e28bef1908f61a366b1f03c97479"
          "0f67576a30b8e20d4232d8530b52fb4c89cbc589ede291e499ddd15fe870ab96"}},
    {.data =
         {"51d2547cbff92431174aa7fc7302139519d98071c755ff1c92e4694b58587ea560f7"
          "2f32fc6dd4dee7d22bb7387381d0256e2862d0644cdf2c277c5d740fa089830eb52b"
          "f79d1e75b8596ecf0ea58a0b9df61e0c9754bfcd62efab6ea1bd216bf181c5593da7"
          "9f10135a9bc6e164f1854bc8859734341aad237ba29a81a3fc8b"},
     .private_key =
         {"80e692e3eb9fcd8c7d44e7de9f7a5952686407f90025a1d87e52c7096a62618a"},
     .public_key =
         {"a88bc8430279c8c0400a77d751f26c0abc93e5de4ad9a4166357952fe041e767"
          "2d365a1eef25ead579cc9a069b6abc1b16b81c35f18785ce26a10ba6d1381185"}},
    {.data =
         {"558c2ac13026402bad4a0a83ebc9468e50f7ffab06d6f981e5db1d082098065bcff6"
          "f21a7a74558b1e8612914b8b5a0aa28ed5b574c36ac4ea5868432a62bb8ef0695d27"
          "c1e3ceaf75c7b251c65ddb268696f07c16d2767973d85beb443f211e6445e7fe5d46"
          "f0dce70d58a4cd9fe70688c035688ea8c6baec65a5fc7e2c93e8"},
     .private_key =
         {"5e666c0db0214c3b627a8e48541cc84a8b6fd15f300da4dff5d18aec6c55b881"},
     .public_key =
         {"1bc487570f040dc94196c9befe8ab2b6de77208b1f38bdaae28f9645c4d2bc3a"
          "ec81602abd8345e71867c8210313737865b8aa186851e1b48eaca140320f5d8f"}},
    {.data =
         {"4d55c99ef6bd54621662c3d110c3cb627c03d6311393b264ab97b90a4b15214a5593"
          "ba2510a53d63fb34be251facb697c973e11b665cb7920f1684b0031b4dd370cb927c"
          "a7168b0bf8ad285e05e9e31e34bc24024739fdc10b78586f29eff94412034e3b606e"
          "d850ec2c1900e8e68151fc4aee5adebb066eb6da4eaa5681378e"},
     .private_key =
         {"f73f455271c877c4d5334627e37c278f68d143014b0a05aa62f308b2101c5308"},
     .public_key =
         {"b8188bd68701fc396dab53125d4d28ea33a91daf6d21485f4770f6ea8c565dde"
          "423f058810f277f8fe076f6db56e9285a1bf2c2a1dae145095edd9c04970bc4a"}},
    {.data =
         {"f8248ad47d97c18c984f1f5c10950dc1404713c56b6ea397e01e6dd925e903b4fadf"
          "e2c9e877169e71ce3c7fe5ce70ee4255d9cdc26f6943bf48687874de64f6cf30a012"
          "512e787b88059bbf561162bdcc23a3742c835ac144cc14167b1bd6727e940540a9c9"
          "9f3cbb41fb1dcb00d76dda04995847c657f4c19d303eb09eb48a"},
     .private_key =
         {"b20d705d9bd7c2b8dc60393a5357f632990e599a0975573ac67fd89b49187906"},
     .public_key =
         {"51f99d2d52d4a6e734484a018b7ca2f895c2929b6754a3a03224d07ae61166ce"
          "4737da963c6ef7247fb88d19f9b0c667cac7fe12837fdab88c66f10d3c14cad1"}},
    {.data =
         {"3b6ee2425940b3d240d35b97b6dcd61ed3423d8e71a0ada35d47b322d17b35ea0472"
          "f35edd1d252f87b8b65ef4b716669fc9ac28b00d34a9d66ad118c9d94e7f46d0b4f6"
          "c2b2d339fd6bcd351241a387cc82609057048c12c4ec3d85c661975c45b300cb9693"
          "0d89370a327c98b67defaa89497aa8ef994c77f1130f752f94a4"},
     .private_key =
         {"b20d705d9bd7c2b8dc60393a5357f632990e599a0975573ac67fd89b49187906"},
     .public_key =
         {"51f99d2d52d4a6e734484a018b7ca2f895c2929b6754a3a03224d07ae61166ce"
          "4737da963c6ef7247fb88d19f9b0c667cac7fe12837fdab88c66f10d3c14cad1"}},
    {.data =
         {"c5204b81ec0a4df5b7e9fda3dc245f98082ae7f4efe81998dcaa286bd4507ca840a5"
          "3d21b01e904f55e38f78c3757d5a5a4a44b1d5d4e480be3afb5b394a5d2840af42b1"
          "b4083d40afbfe22d702f370d32dbfd392e128ea4724d66a3701da41ae2f03bb4d91b"
          "b946c7969404cb544f71eb7a49eb4c4ec55799bda1eb545143a7"},
     .private_key =
         {"b58f5211dff440626bb56d0ad483193d606cf21f36d9830543327292f4d25d8c"},
     .public_key =
         {"68229b48c2fe19d3db034e4c15077eb7471a66031f28a980821873915298ba76"
          "303e8ee3742a893f78b810991da697083dd8f11128c47651c27a56740a80c24c"}},
    {.data =
         {"72e81fe221fb402148d8b7ab03549f1180bcc03d41ca59d7653801f0ba853add1f6d"
          "29edd7f9abc621b2d548f8dbf8979bd16608d2d8fc3260b4ebc0dd42482481d548c7"
          "075711b5759649c41f439fad69954956c9326841ea6492956829f9e0dc789f73633b"
          "40f6ac77bcae6dfc7930cfe89e526d1684365c5b0be2437fdb01"},
     .private_key =
         {"54c066711cdb061eda07e5275f7e95a9962c6764b84f6f1f3ab5a588e0a2afb1"},
     .public_key =
         {"0a7dbb8bf50cb605eb2268b081f26d6b08e012f952c4b70a5a1e6e7d46af98bb"
          "f26dd7d799930062480849962ccf5004edcfd307c044f4e8f667c9baa834eeae"}},
    {.data =
         {"21188c3edd5de088dacc1076b9e1bcecd79de1003c2414c3866173054dc82dde8516"
          "9baa77993adb20c269f60a5226111828578bcc7c29e6e8d2dae81806152c8ba0c6ad"
          "a1986a1983ebeec1473a73a04795b6319d48662d40881c1723a706f516fe75300f92"
          "408aa1dc6ae4288d2046f23c1aa2e54b7fb6448a0da922bd7f34"},
     .private_key =
         {"34fa4682bf6cb5b16783adcd18f0e6879b92185f76d7c920409f904f522db4b1"},
     .public_key =
         {"105d22d9c626520faca13e7ced382dcbe93498315f00cc0ac39c4821d0d73737"
          "6c47f3cbbfa97dfcebe16270b8c7d5d3a5900b888c42520d751e8faf3b401ef4"}},
};

struct sign_test_vector sign_test_vectors_sha384[] = {
    {.data =
         {"e0b8596b375f3306bbc6e77a0b42f7469d7e83635990e74aa6d713594a3a24498fef"
          "f5006790742d9c2e9b47d714bee932435db747c6e733e3d8de41f2f91311f2e9fd8e"
          "025651631ffd84f66732d3473fbd1627e63dc7194048ebec93c95c159b5039ab5e79"
          "e42c80b484a943f125de3da1e04e5bf9c16671ad55a1117d3306"},
     .private_key =
         {"b6faf2c8922235c589c27368a3b3e6e2f42eb6073bf9507f19eed0746c79dced"},
     .public_key =
         {"e0e7b99bc62d8dd67883e39ed9fa0657789c5ff556cc1fd8dd1e2a55e9e3f243"
          "63fbfd0232b95578075c903a4dbf85ad58f8350516e1ec89b0ee1f5e1362da69"}},
    {.data =
         {"099a0131179fff4c6928e49886d2fdb3a9f239b7dd5fa828a52cbbe3fcfabecfbba3"
          "e192159b887b5d13aa1e14e6a07ccbb21f6ad8b7e88fee6bea9b86dea40ffb962f38"
          "554056fb7c5bb486418915f7e7e9b9033fe3baaf9a069db98bc02fa8af3d3d1859a1"
          "1375d6f98aa2ce632606d0800dff7f55b40f971a8586ed6b39e9"},
     .private_key =
         {"118958fd0ff0f0b0ed11d3cf8fa664bc17cdb5fed1f4a8fc52d0b1ae30412181"},
     .public_key =
         {"afda82260c9f42122a3f11c6058839488f6d7977f6f2a263c67d06e27ea2c355"
          "0ae2bbdd2207c590332c5bfeb4c8b5b16622134bd4dc55382ae806435468058b"}},
    {.data =
         {"0fbc07ea947c946bea26afa10c51511039b94ddbc4e2e4184ca3559260da24a14522"
          "d1497ca5e77a5d1a8e86583aeea1f5d4ff9b04a6aa0de79cd88fdb85e01f17114353"
          "5f2f7c23b050289d7e05cebccdd131888572534bae0061bdcc3015206b9270b0d5af"
          "9f1da2f9de91772d178a632c3261a1e7b3fb255608b3801962f9"},
     .private_key =
         {"3e647357cd5b754fad0fdb876eaf9b1abd7b60536f383c81ce5745ec80826431"},
     .public_key =
         {"702b2c94d039e590dd5c8f9736e753cf5824aacf33ee3de74fe1f5f7c858d5ed"
          "0c28894e907af99fb0d18c9e98f19ac80dd77abfa4bebe45055c0857b82a0f4d"}},
    {.data =
         {"1e38d750d936d8522e9db1873fb4996bef97f8da3c6674a1223d29263f1234a90b75"
          "1785316444e9ba698bc8ab6cd010638d182c9adad4e334b2bd7529f0ae8e9a52ad60"
          "f59804b2d780ed52bdd33b0bf5400147c28b4304e5e3434505ae7ce30d4b239e7e6f"
          "0ecf058badd5b388eddbad64d24d2430dd04b4ddee98f972988f"},
     .private_key =
         {"76c17c2efc99891f3697ba4d71850e5816a1b65562cc39a13da4b6da9051b0fd"},
     .public_key =
         {"d12512e934c367e4c4384dbd010e93416840288a0ba00b299b4e7c0d91578b57"
          "ebf8835661d9b578f18d14ae4acf9c357c0dc8b7112fc32824a685ed72754e23"}},
    {.data =
         {"abcf0e0f046b2e0672d1cc6c0a114905627cbbdefdf9752f0c31660aa95f2d0ede72"
          "d17919a9e9b1add3213164e0c9b5ae3c76f1a2f79d3eeb444e6741521019d8bd5ca3"
          "91b28c1063347f07afcfbb705be4b52261c19ebaf1d6f054a74d86fb5d091fa7f229"
          "450996b76f0ada5f977b09b58488eebfb5f5e9539a8fd89662ab"},
     .private_key =
         {"67b9dea6a575b5103999efffce29cca688c781782a41129fdecbce76608174de"},
     .public_key =
         {"b4238b029fc0b7d9a5286d8c29b6f3d5a569e9108d44d889cd795c4a385905be"
          "8cb3fff8f6cca7187c6a9ad0a2b1d9f40ae01b32a7e8f8c4ca75d71a1fffb309"}},
    {.data =
         {"dc3d4884c741a4a687593c79fb4e35c5c13c781dca16db561d7e393577f7b62ca41a"
          "6e259fc1fb8d0c4e1e062517a0fdf95558b7799f20c211796167953e6372c11829be"
          "ec64869d67bf3ee1f1455dd87acfbdbcc597056e7fb347a17688ad32fda7ccc3572d"
          "a7677d7255c261738f07763cd45973c728c6e9adbeecadc3d961"},
     .private_key =
         {"ecf644ea9b6c3a04fdfe2de4fdcb55fdcdfcf738c0b3176575fa91515194b566"},
     .public_key =
         {"c3bdc7c795ec94620a2cfff614c13a3390a5e86c892e53a24d3ed22228bc85bf"
          "70480fc5cf4aacd73e24618b61b5c56c1ced8c4f1b869580ea538e68c7a61ca3"}},
    {.data =
         {"719bf1911ae5b5e08f1d97b92a5089c0ab9d6f1c175ac7199086aeeaa416a17e6d6f"
          "8486c711d386f284f096296689a54d330c8efb0f5fa1c5ba128d3234a3da856c2a94"
          "667ef7103616a64c913135f4e1dc50e38daa60610f732ad1bedfcc396f8716939252"
          "0314a6b6b9af6793dbabad4599525228cc7c9c32c4d8e097ddf6"},
     .private_key =
         {"4961485cbc978f8456ec5ac7cfc9f7d9298f99415ecae69c8491b258c029bfee"},
     .public_key =
         {"8d40bf2299e05d758d421972e81cfb0cce68b949240dc30f315836acc70bef03"
          "5674e6f77f8b46f46cca937d83b128dffbe9bd7e0d3d08aa2cbbfdfb16f72c9a"}},
    {.data =
         {"7cf19f4c851e97c5bca11a39f0074c3b7bd3274e7dd75d0447b7b84995dfc9f716bf"
          "08c25347f56fcc5e5149cb3f9cfb39d408ace5a5c47e75f7a827fa0bb9921bb5b23a"
          "6053dbe1fa2bba341ac874d9b1333fc4dc224854949f5c8d8a5fedd02fb26fdfcd3b"
          "e351aec0fcbef18972956c6ec0effaf057eb4420b6d28e0c008c"},
     .private_key =
         {"587907e7f215cf0d2cb2c9e6963d45b6e535ed426c828a6ea2fb637cca4c5cbd"},
     .public_key =
         {"660da45c413cc9c9526202c16b402af602d30daaa7c342f1e722f15199407f31"
          "e6f8cbb06913cc718f2d69ba2fb3137f04a41c27c676d1a80fbf30ea3ca46439"}},
    {.data =
         {"b892ffabb809e98a99b0a79895445fc734fa1b6159f9cddb6d21e510708bdab60766"
          "33ac30aaef43db566c0d21f4381db46711fe3812c5ce0fb4a40e3d5d8ab24e4e82d3"
          "560c6dc7c37794ee17d4a144065ef99c8d1c88bc22ad8c4c27d85ad518fa5747ae35"
          "276fc104829d3f5c72fc2a9ea55a1c3a87007cd133263f79e405"},
     .private_key =
         {"24b1e5676d1a9d6b645a984141a157c124531feeb92d915110aef474b1e27666"},
     .public_key =
         {"b4909a5bdf25f7659f4ef35e4b811429fb2c59126e3dad09100b46aea6ebe7a6"
          "760ae015fa6af5c9749c4030fdb5de6e58c6b5b1944829105cf7edf7d3a22cfb"}},
    {.data =
         {"8144e37014c95e13231cbd6fa64772771f93b44e37f7b02f592099cc146343edd4f4"
          "ec9fa1bc68d7f2e9ee78fc370443aa2803ff4ca52ee49a2f4daf2c8181ea7b8475b3"
          "a0f608fc3279d09e2d057fbe3f2ffbe5133796124781299c6da60cfe7ecea3abc307"
          "06ded2cdf18f9d788e59f2c31662df3abe01a9b12304fb8d5c8c"},
     .private_key =
         {"bce49c7b03dcdc72393b0a67cf5aa5df870f5aaa6137ada1edc7862e0981ec67"},
     .public_key =
         {"c786d9421d67b72b922cf3def2a25eeb5e73f34543eb50b152e738a98afb0ca5"
          "6796271e79e2496f9e74b126b1123a3d067de56b5605d6f51c8f6e1d5bb93aba"}},
    {.data =
         {"a3683d120807f0a030feed679785326698c3702f1983eaba1b70ddfa7f0b3188060b"
          "845e2b67ed57ee68087746710450f7427cb34655d719c0acbc09ac696adb4b22aba1"
          "b9322b7111076e67053a55f62b501a4bca0ad9d50a868f51aeeb4ef27823236f5267"
          "e8da83e143047422ce140d66e05e44dc84fb3a4506b2a5d7caa8"},
     .private_key =
         {"73188a923bc0b289e81c3db48d826917910f1b957700f8925425c1fb27cabab9"},
     .public_key =
         {"86662c014ab666ee770723be8da38c5cd299efc6480fc6f8c3603438fa8397b9"
          "f26b3307a650c3863faaa5f642f3ba1384c3d3a02edd3d48c657c269609cc3fc"}},
    {.data =
         {"b1df8051b213fc5f636537e37e212eb20b2423e6467a9c7081336a870e6373fc8358"
          "99d59e546c0ac668cc81ce4921e88f42e6da2a109a03b4f4e819a17c955b8d099ec6"
          "b282fb495258dca13ec779c459da909475519a3477223c06b99afbd77f9922e7cbef"
          "844b93f3ce5f50db816b2e0d8b1575d2e17a6b8db9111d6da578"},
     .private_key =
         {"f637d55763fe819541588e0c603f288a693cc66823c6bb7b8e003bd38580ebce"},
     .public_key =
         {"74a4620c578601475fc169a9b84be613b4a16cb6acab8fd98848a6ec9fbd133d"
          "42b9e35d347c107e63bd55f525f915bcf1e3d2b81d002d3c39acf10fc30645a1"}},
    {.data =
         {"0b918ede985b5c491797d0a81446b2933be312f419b212e3aae9ba5914c00af43174"
          "7a9d287a7c7761e9bcbc8a12aaf9d4a76d13dad59fc742f8f218ef66eb67035220a0"
          "7acc1a357c5b562ecb6b895cf725c4230412fefac72097f2c2b829ed58742d7c327c"
          "ad0f1058df1bddd4ae9c6d2aba25480424308684cecd6517cdd8"},
     .private_key =
         {"2e357d51517ff93b821f895932fddded8347f32596b812308e6f1baf7dd8a47f"},
     .public_key =
         {"7e4078a1d50c669fb2996dd9bacb0c3ac7ede4f58fa0fa1222e78dbf5d1f4186"
          "0014e46e90cc171fbb83ea34c6b78202ea8137a7d926f0169147ed5ae3d6596f"}},
    {.data =
         {"0fab26fde1a4467ca930dbe513ccc3452b70313cccde2994eead2fde85c8da1db84d"
          "7d06a024c9e88629d5344224a4eae01b21a2665d5f7f36d5524bf5367d7f8b6a71ea"
          "05d413d4afde33777f0a3be49c9e6aa29ea447746a9e77ce27232a550b31dd4e7c9b"
          "c8913485f2dc83a56298051c92461fd46b14cc895c300a4fb874"},
     .private_key =
         {"77d60cacbbac86ab89009403c97289b5900466856887d3e6112af427f7f0f50b"},
     .public_key =
         {"a62032dfdb87e25ed0c70cad20d927c7effeb2638e6c88ddd670f74df16090e5"
          "44c5ee2cf740ded468f5d2efe13daa7c5234645a37c073af35330d03a4fed976"}},
    {.data =
         {"7843f157ef8566722a7d69da67de7599ee65cb3975508f70c612b3289190e3641417"
          "81e0b832f2d9627122742f4b5871ceeafcd09ba5ec90cae6bcc01ae32b50f13f6391"
          "8dfb5177df9797c6273b92d103c3f7a3fc2050d2b196cc872c57b77f9bdb1782d419"
          "5445fcc6236dd8bd14c8bcbc8223a6739f6a17c9a861e8c821a6"},
     .private_key =
         {"486854e77962117f49e09378de6c9e3b3522fa752b10b2c810bf48db584d7388"},
     .public_key =
         {"760b5624bd64d19c866e54ccd74ad7f98851afdbc3ddeae3ec2c52a135be9cfa"
          "feca15ce9350877102eee0f5af18b2fed89dc86b7df0bf7bc2963c1638e36fe8"}},
};

struct sign_test_vector sign_test_vectors_sha512[] = {
    {.data =
         {"6c8572b6a3a4a9e8e03dbeed99334d41661b8a8417074f335ab1845f6cc852adb8c0"
          "1d9820fcf8e10699cc827a8fbdca2cbd46cc66e4e6b7ba41ec3efa733587e4a30ec5"
          "52cd8ddab8163e148e50f4d090782897f3ddac84a41e1fcfe8c56b6152c0097b0d63"
          "4b41011471ffd004f43eb4aafc038197ec6bae2b4470e869bded"},
     .private_key =
         {"9dd0d3a3d514c2a8adb162b81e3adfba3299309f7d2018f607bdb15b1a25f499"},
     .public_key =
         {"6b738de3398b6ac57b9591f9d7985dd4f32137ad3460dcf8970c1390cb9eaf8d"
          "83bc61e26d2bbbd3cf2d2ab445a2bc4ab5dde41f4a13078fd1d3cc36ab596d57"}},
    {.data =
         {"7e3c8fe162d48cc8c5b11b5e5ebc05ebc45c439bdbc0b0902145921b8383037cb081"
          "2222031598cd1a56fa71694fbd304cc62938233465ec39c6e49f57dfe823983b6923"
          "c4e865633949183e6b90e9e06d8275f3907d97967d47b6239fe2847b7d49cf16ba69"
          "d2862083cf1bccf7afe34fdc90e21998964107b64abe6b89d126"},
     .private_key =
         {"f9bf909b7973bf0e3dad0e43dcb2d7fa8bda49dbe6e5357f8f0e2bd119be30e6"},
     .public_key =
         {"f2a6674d4e86152a527199bed293fa63acde1b4d8a92b62e552210ba45c38792"
          "c72565c24f0eee6a094af341ddd8579747b865f91c8ed5b44cda8a19cc93776f"}},
    {.data =
         {"d5aa8ac9218ca661cd177756af6fbb5a40a3fecfd4eea6d5872fbb9a2884784aa9b5"
          "f0c023a6e0da5cf6364754ee6465b4ee2d0ddc745b02994c98427a213c849537da5a"
          "4477b3abfe02648be67f26e80b56a33150490d062aaac137aa47f11cfeddba855bab"
          "9e4e028532a563326d927f9e6e3292b1fb248ee90b6f429798db"},
     .private_key =
         {"724567d21ef682dfc6dc4d46853880cfa86fe6fea0efd51fac456f03c3d36ead"},
     .public_key =
         {"70b877b5e365fcf08140b1eca119baba662879f38e059d074a2cb60b03ea5d39"
          "5f56f94d591df40b9f3b8763ac4b3dbe622c956d5bd0c55658b6f46fa3deb201"}},
    {.data =
         {"790b06054afc9c3fc4dfe72df19dd5d68d108cfcfca6212804f6d534fd2fbe489bd8"
          "f64bf205ce04bcb50124a12ce5238fc3fe7dd76e6fa640206af52549f133d593a1bf"
          "d423ab737f3326fa79433cde293236f90d4238f0dd38ed69492ddbd9c3eae583b632"
          "5a95dec3166fe52b21658293d8c137830ef45297d67813b7a508"},
     .private_key =
         {"29c5d54d7d1f099d50f949bfce8d6073dae059c5a19cc70834722f18a7199edd"},
     .public_key =
         {"3088d4f45d274cc5f418c8ecc4cbcf96be87491f420250f8cbc01cdf2503ec47"
          "634db48198129237ed068c88ff5809f6211921a6258f548f4b64dd125921b78b"}},
    {.data =
         {"6d549aa87afdb8bfa60d22a68e2783b27e8db46041e4df04be0c261c4734b608a96f"
          "198d1cdb8d082ae48579ec9defcf21fbc72803764a58c31e5323d5452b9fb57c8991"
          "d31749140da7ef067b18bf0d7dfbae6eefd0d8064f334bf7e9ec1e028daed4e86e17"
          "635ec2e409a3ed1238048a45882c5c57501b314e636b9bc81cbe"},
     .private_key =
         {"0d8095da1abba06b0d349c226511f642dabbf1043ad41baa4e14297afe8a3117"},
     .public_key =
         {"75a45758ced45ecf55f755cb56ca2601d794ebeaeb2e6107fe2fc443f580e23c"
          "5303d47d5a75ec821d51a2ee7548448208c699eca0cd89810ffc1aa4faf81ead"}},
    {.data =
         {"1906e48b7f889ee3ff7ab0807a7aa88f53f4018808870bfed6372a77330c73764796"
          "1324c2b4d46f6ee8b01190474951a701b048ae86579ff8e3fc889fecf926b17f9895"
          "8ac7534e6e781ca2db2baa380dec766cfb2a3eca2a9d5818967d64dfab84f768d24e"
          "c122eebacaab0a4dc3a75f37331bb1c43dd8966cc09ec4945bbd"},
     .private_key =
         {"52fe57da3427b1a75cb816f61c4e8e0e0551b94c01382b1a80837940ed579e61"},
     .public_key =
         {"2177e20a2092a46667debdcc21e7e45d6da72f124adecbc5ada6a7bcc7b401d5"
          "550e468f2626070a080afeeb98edd75a721eb773c8e62149f3e903cf9c4d7b61"}},
    {.data =
         {"7b59fef13daf01afec35dea3276541be681c4916767f34d4e874464d20979863ee77"
          "ad0fd1635bcdf93e9f62ed69ae52ec90aab5bbf87f8951213747ccec9f38c775c1df"
          "1e9d7f735c2ce39b42edb3b0c5086247556cfea539995c5d9689765288ec600848ec"
          "f085c01ca738bbef11f5d12d4457db988b4add90be00781024ad"},
     .private_key =
         {"003d91611445919f59bfe3ca71fe0bfdeb0e39a7195e83ac03a37c7eceef0df2"},
     .public_key =
         {"7b9c592f61aae0555855d0b9ebb6fd00fb6746e8842e2523565c858630b9ba00"
          "d35b2e168b1875bbc563bea5e8d63c4e38957c774a65e762959a349eaf263ba0"}},
    {.data =
         {"041a6767a935dc3d8985eb4e608b0cbfebe7f93789d4200bcfe595277ac2b0f40288"
          "9b580b72def5da778a680fd380c955421f626d52dd9a83ea180187b850e1b72a4ec6"
          "dd63235e598fd15a9b19f8ce9aec1d23f0bd6ea4d92360d50f951152bc9a01354732"
          "ba0cf90aaed33c307c1de8fa3d14f9489151b8377b57c7215f0b"},
     .private_key =
         {"48f13d393899cd835c4193670ec62f28e4c4903e0bbe5817bf0996831a720bb7"},
     .public_key =
         {"82a1a96f4648393c5e42633ecdeb1d8245c78c5ea236b5bab460dedcc8924bc0"
          "e8cbf03c34b5154f876de19f3bb6fd43cd2eabf6e7c95467bcfa8c8fc42d76fd"}},
    {.data =
         {"7905a9036e022c78b2c9efd40b77b0a194fbc1d45462779b0b76ad30dc52c564e48a"
          "493d8249a061e62f26f453ba566538a4d43c64fb9fdbd1f36409316433c6f074e1b4"
          "7b544a847de25fc67d81ac801ed9f7371a43da39001c90766f943e629d74d0436ba1"
          "240c3d7fab990d586a6d6ef1771786722df56448815f2feda48f"},
     .private_key =
         {"95c99cf9ec26480275f23de419e41bb779590f0eab5cf9095d37dd70cb75e870"},
     .public_key =
         {"42c292b0fbcc9f457ae361d940a9d45ad9427431a105a6e5cd90a345fe3507f7"
          "313b08fd2fa351908b3178051ee782cc62b9954ad95d4119aa564900f8ade70c"}},
    {.data =
         {"cf25e4642d4f39d15afb7aec79469d82fc9aedb8f89964e79b749a852d931d374365"
          "02804e39555f5a3c75dd958fd5291ada647c1a5e38fe7b1048f16f2b711fdd5d39ac"
          "c0812ca65bd50d7f8119f2fd195ab16633503a78ee9102c1f9c4c22568e0b54bd4fa"
          "3f5ff7b49160bf23e7e2231b1ebebbdaf0e4a7d4484158a87e07"},
     .private_key =
         {"e15e835d0e2217bc7c6f05a498f20af1cd56f2f165c23d225eb3360aa2c5cbcf"},
     .public_key =
         {"89dd22052ec3ab4840206a62f2270c21e7836d1a9109a3407dd0974c7802b9ae"
          "e91609ba35c7008b080c77a9068d97a14ca77b97299e74945217672b2fd5faf0"}},
    {.data =
         {"7562c445b35883cc937be6349b4cefc3556a80255d70f09e28c3f393daac19442a7e"
          "ecedcdfbe8f7628e30cd8939537ec56d5c9645d43340eb4e78fc5dd4322de8a07966"
          "b262770d7ff13a071ff3dce560718e60ed3086b7e0003a6abafe91af90af86733ce8"
          "689440bf73d2aa0acfe9776036e877599acbabfcb03bb3b50faa"},
     .private_key =
         {"808c08c0d77423a6feaaffc8f98a2948f17726e67c15eeae4e672edbe388f98c"},
     .public_key =
         {"b0c0ad5e1f6001d8e9018ec611b2e3b91923e69fa6c98690ab644d650f640c42"
          "610539c0b9ed21ac0a2f27527c1a61d9b47cbf033187b1a6ada006eb5b2662ed"}},
    {.data =
         {"051c2db8e71e44653ea1cb0afc9e0abdf12658e9e761bfb767c20c7ab4adfcb18ed9"
          "b5c372a3ac11d8a43c55f7f99b33355437891686d42362abd71db8b6d84dd694d698"
          "2f0612178a937aa934b9ac3c0794c39027bdd767841c4370666c80dbc0f8132ca274"
          "74f553d266deefd7c9dbad6d734f9006bb557567701bb7e6a7c9"},
     .private_key =
         {"f7c6315f0081acd8f09c7a2c3ec1b7ece20180b0a6365a27dcd8f71b729558f9"},
     .public_key =
         {"250f7112d381c1751860045d9bcaf20dbeb25a001431f96ac6f19109362ffebb"
          "49fba9efe73546135a5a31ab3753e247034741ce839d3d94bd73936c4a17e4aa"}},
    {.data =
         {"4dcb7b62ba31b866fce7c1feedf0be1f67bf611dbc2e2e86f004422f67b3bc1839c6"
          "958eb1dc3ead137c3d7f88aa97244577a775c8021b1642a8647bba82871e3c15d074"
          "9ed343ea6cad38f123835d8ef66b0719273105e924e8685b65fd5dc430efbc35b05a"
          "6097f17ebc5943cdcd9abcba752b7f8f37027409bd6e11cd158f"},
     .private_key =
         {"f547735a9409386dbff719ce2dae03c50cb437d6b30cc7fa3ea20d9aec17e5a5"},
     .public_key =
         {"4ca87c5845fb04c2f76ae3273073b0523e356a445e4e95737260eba9e2d021db"
          "0f86475d07f82655320fdf2cd8db23b21905b1b1f2f9c48e2df87e24119c4880"}},
    {.data =
         {"efe55737771070d5ac79236b04e3fbaf4f2e9bed187d1930680fcf1aba769674bf42"
          "6310f21245006f528779347d28b8aeacd2b1d5e3456dcbf188b2be8c07f19219e406"
          "7c1e7c9714784285d8bac79a76b56f2e2676ea93994f11eb573af1d03fc8ed1118ea"
          "fc7f07a82f3263c33eb85e497e18f435d4076a774f42d276c323"},
     .private_key =
         {"26a1aa4b927a516b661986895aff58f40b78cc5d0c767eda7eaa3dbb835b5628"},
     .public_key =
         {"28afa3b0f81a0e95ad302f487a9b679fcdef8d3f40236ec4d4dbf4bb0cbba8b2"
          "bb4ac1be8405cbae8a553fbc28e29e2e689fabe7def26d653a1dafc023f3cecf"}},
    {.data =
         {"ea95859cc13cccb37198d919803be89c2ee10befdcaf5d5afa09dcc529d333ae1e4f"
          "fd3bd8ba8642203badd7a80a3f77eeee9402eed365d53f05c1a995c536f8236ba6b6"
          "ff8897393506660cc8ea82b2163aa6a1855251c87d935e23857fe35b889427b449de"
          "7274d7754bdeace960b4303c5dd5f745a5cfd580293d6548c832"},
     .private_key =
         {"6a5ca39aae2d45aa331f18a8598a3f2db32781f7c92efd4f64ee3bbe0c4c4e49"},
     .public_key =
         {"c62cc4a39ace01006ad48cf49a3e71466955bbeeca5d318d672695df926b3aa4"
          "c85ccf517bf2ebd9ad6a9e99254def0d74d1d2fd611e328b4a3988d4f045fe6f"}},
};