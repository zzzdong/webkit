/*
 * Copyright (C) 2020 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. AND ITS CONTRIBUTORS ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL APPLE INC. OR ITS CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 */

#pragma once

#if ENABLE(GAMEPAD) && PLATFORM(MAC)

#import <IOKit/hid/IOHIDUsageTables.h>

namespace WebCore {

constexpr const uint64_t hidPointerFullUsage = ((uint64_t)kHIDPage_GenericDesktop) << 32 | kHIDUsage_GD_Pointer;
constexpr const uint64_t hidXAxisFullUsage = ((uint64_t)kHIDPage_GenericDesktop) << 32 | kHIDUsage_GD_X;
constexpr const uint64_t hidYAxisFullUsage = ((uint64_t)kHIDPage_GenericDesktop) << 32 | kHIDUsage_GD_Y;
constexpr const uint64_t hidZAxisFullUsage = ((uint64_t)kHIDPage_GenericDesktop) << 32 | kHIDUsage_GD_Z;
constexpr const uint64_t hidRzAxisFullUsage = ((uint64_t)kHIDPage_GenericDesktop) << 32 | kHIDUsage_GD_Rz;
constexpr const uint64_t hidButton1FullUsage = ((uint64_t)kHIDPage_Button) << 32 | kHIDUsage_Button_1;
constexpr const uint64_t hidButton2FullUsage = ((uint64_t)kHIDPage_Button) << 32 | (kHIDUsage_Button_1 + 1);
constexpr const uint64_t hidButton3FullUsage = ((uint64_t)kHIDPage_Button) << 32 | (kHIDUsage_Button_1 + 2);
constexpr const uint64_t hidButton4FullUsage = ((uint64_t)kHIDPage_Button) << 32 | (kHIDUsage_Button_1 + 3);
constexpr const uint64_t hidButton17FullUsage = ((uint64_t)kHIDPage_Button) << 32 | (kHIDUsage_Button_1 + 16);

} // namespace WebCore

#endif // ENABLE(GAMEPAD) && PLATFORM(MAC)
