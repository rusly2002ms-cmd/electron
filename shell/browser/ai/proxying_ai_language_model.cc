// Copyright (c) 2025 Microsoft, Inc.
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file.

#include "shell/browser/ai/proxying_ai_language_model.h"

#include "base/notimplemented.h"

namespace electron {

ProxyingAILanguageModel::ProxyingAILanguageModel() = default;

ProxyingAILanguageModel::~ProxyingAILanguageModel() = default;

void ProxyingAILanguageModel::Prompt(
    std::vector<blink::mojom::AILanguageModelPromptPtr> prompts,
    on_device_model::mojom::ResponseConstraintPtr constraint,
    mojo::PendingRemote<blink::mojom::ModelStreamingResponder>
        pending_responder) {
  // TODO - Implement this
  NOTIMPLEMENTED();
}

void ProxyingAILanguageModel::Append(
    std::vector<blink::mojom::AILanguageModelPromptPtr> prompts,
    mojo::PendingRemote<blink::mojom::ModelStreamingResponder>
        pending_responder) {
  // TODO - Implement this
  NOTIMPLEMENTED();
}

void ProxyingAILanguageModel::Fork(
    mojo::PendingRemote<blink::mojom::AIManagerCreateLanguageModelClient>
        client) {
  // TODO - Implement this
  NOTIMPLEMENTED();
}

void ProxyingAILanguageModel::Destroy() {
  // TODO - Implement this
  NOTIMPLEMENTED();
}

void ProxyingAILanguageModel::MeasureInputUsage(
    std::vector<blink::mojom::AILanguageModelPromptPtr> input,
    MeasureInputUsageCallback callback) {
  // TODO - Implement this
  NOTIMPLEMENTED();
}

}  // namespace electron
