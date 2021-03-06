/*
 * Copyright (C) 2010 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _WIPE_H_
#define _WIPE_H_

#include "ext4_utils.h"

#define WIPE_DISABLED   0
#define WIPE_FALLBACK   1
#define WIPE_UNSECURE   2
#define WIPE_SECURE     4

int wipe_block_device(int fd, s64 len, int wipe_mode);

#endif
