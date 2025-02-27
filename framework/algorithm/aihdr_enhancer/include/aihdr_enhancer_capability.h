/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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

#ifndef AIHDR_ENHANCER_CAPABILITY_H
#define AIHDR_ENHANCER_CAPABILITY_H

#include <functional>
#include <vector>

#include "frame_info.h"

namespace OHOS {
namespace Media {
namespace VideoProcessingEngine {
struct AihdrEnhancerCapability {
    ColorSpaceDescription colorspaceDesc;
    std::vector<GraphicPixelFormat> pixelFormats;
    uint32_t rank;
    int32_t version;
};

using AihdrEnhancerCapabilitiesBuilder = std::function<std::vector<AihdrEnhancerCapability>()>;
} // namespace VideoProcessingEngine
} // namespace Media
} // namespace OHOS

#endif // AIHDR_ENHANCER_CAPABILITY_H
