/*
 * If not stated otherwise in this file or this component's LICENSE file the
 * following copyright and licenses apply:
 *
 * Copyright 2020 Metrological
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CRYPTOGRAPHY_VAULT_IDS_H
#define CRYPTOGRAPHY_VAULT_IDS_H

#include <stdint.h>

#ifdef __cplusplus
extern "C"
#endif
    enum cryptographyvault : uint8_t {
        CRYPTOGRAPHY_VAULT_DEFAULT = 0,
        CRYPTOGRAPHY_VAULT_PLATFORM = 1,
        CRYPTOGRAPHY_VAULT_PROVISIONING = 0x10,
        CRYPTOGRAPHY_VAULT_NETFLIX = 0x11
    };

#endif // CRYPTOGRAPHY_VAULT_IDS_H
