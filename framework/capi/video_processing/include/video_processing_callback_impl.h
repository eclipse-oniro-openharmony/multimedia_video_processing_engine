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

#ifndef VIDEO_PROCESSING_CALLBACK_IMPL_H
#define VIDEO_PROCESSING_CALLBACK_IMPL_H

#include <memory>

#include "video_processing_callback_native.h"

struct VideoProcessing_Callback {
public:
    static VideoProcessing_ErrorCode Create(VideoProcessing_Callback** instance);
    static VideoProcessing_ErrorCode Destroy(VideoProcessing_Callback* instance);

    std::shared_ptr<OHOS::Media::VideoProcessingEngine::VideoProcessingCallbackNative> GetInnerCallback() const;

private:
    VideoProcessing_Callback();
    ~VideoProcessing_Callback();

    std::shared_ptr<OHOS::Media::VideoProcessingEngine::VideoProcessingCallbackNative> videoProcessingCallback_{};
};

#endif // VIDEO_PROCESSING_CALLBACK_IMPL_H
