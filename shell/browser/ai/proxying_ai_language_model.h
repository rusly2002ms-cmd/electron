// Copyright (c) 2025 Microsoft, Inc.
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file.

#ifndef ELECTRON_SHELL_BROWSER_AI_PROXYING_AI_LANGUAGE_MODEL_H_
#define ELECTRON_SHELL_BROWSER_AI_PROXYING_AI_LANGUAGE_MODEL_H_

#include "base/containers/flat_set.h"
#include "base/memory/weak_ptr.h"
#include "mojo/public/cpp/bindings/pending_remote.h"
#include "mojo/public/cpp/bindings/receiver.h"
#include "mojo/public/cpp/bindings/remote_set.h"
#include "third_party/blink/public/mojom/ai/ai_language_model.mojom.h"

namespace electron {

class ProxyingAILanguageModel : public blink::mojom::AILanguageModel {
 public:
  explicit ProxyingAILanguageModel();
  ProxyingAILanguageModel(const ProxyingAILanguageModel&) = delete;
  ProxyingAILanguageModel& operator=(const ProxyingAILanguageModel&) = delete;

  ~ProxyingAILanguageModel() override;

  // `blink::mojom::AILanguageModel` implementation.
  void Prompt(std::vector<blink::mojom::AILanguageModelPromptPtr> prompts,
              on_device_model::mojom::ResponseConstraintPtr constraint,
              mojo::PendingRemote<blink::mojom::ModelStreamingResponder>
                  pending_responder) override;
  void Append(std::vector<blink::mojom::AILanguageModelPromptPtr> prompts,
              mojo::PendingRemote<blink::mojom::ModelStreamingResponder>
                  pending_responder) override;
  void Fork(
      mojo::PendingRemote<blink::mojom::AIManagerCreateLanguageModelClient>
          client) override;
  void Destroy() override;
  void MeasureInputUsage(
      std::vector<blink::mojom::AILanguageModelPromptPtr> input,
      MeasureInputUsageCallback callback) override;

 private:
  mojo::Receiver<blink::mojom::AILanguageModel> receiver_{this};

  base::WeakPtrFactory<ProxyingAILanguageModel> weak_ptr_factory_{this};
};

}  // namespace electron

#endif  // ELECTRON_SHELL_BROWSER_AI_PROXYING_AI_LANGUAGE_MODEL_H_
