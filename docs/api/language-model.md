# LanguageModel

> Implement local AI language models

Process: [Utility](../glossary.md#utility-process)

## Class: LanguageModel

> Implement local AI language models

Process: [Utility](../glossary.md#utility-process)

### Static Methods

The `LanguageModel` class has the following static methods:

#### `LanguageModel.create([options])` _Experimental_

* `options` [LanguageModelCreateOptions](structures/language-model-create-options.md) (optional)

Returns `Promise<LanguageModel>`

#### `LanguageModel.availability([options])` _Experimental_

* `options` [LanguageModelCreateCoreOptions](structures/language-model-create-core-options.md) (optional)

Returns `Promise<string>`

Determines the availability of the language model and returns one of the following strings:

* `available`
* `downloadable`
* `downloading`
* `unavailable`

#### `LanguageModel.params()` _Experimental_

Returns `Promise<LanguageModelParams>`

### Instance Properties

The following properties are available on instances of `LanguageModel`:

#### `languageModel.inputUsage` _Readonly_ _Experimental_

A `number` representing TODO.

#### `languageModel.inputQuota` _Readonly_ _Experimental_

A `number` representing TODO.

#### `languageModel.topK` _Readonly_ _Experimental_

A `number` representing TODO.

#### `languageModel.temperature` _Readonly_ _Experimental_

A `number` representing TODO.

### Instance Methods

The following methods are available on instances of `LanguageModel`:

#### `languageModel.prompt(input, [options])` _Experimental_

* `input` [LanguageModelMessage[]](structures/language-model-message.md) | string
* `options` [LanguageModelPromptOptions](structures/language-model-prompt-options.md) (optional)

Returns `Promise<string>`

#### `languageModel.promptStreaming(input, [options])` _Experimental_

* `input` [LanguageModelMessage[]](structures/language-model-message.md) | string
* `options` [LanguageModelPromptOptions](structures/language-model-prompt-options.md) (optional)

<!-- TODO - This types to the wrong ReadableStream, we want the web one -->

Returns `ReadableStream<string>`

#### `languageModel.append(input, [options])` _Experimental_

* `input` [LanguageModelMessage[]](structures/language-model-message.md) | string
* `options` [LanguageModelAppendOptions](structures/language-model-append-options.md) (optional)

<!-- TODO - The spec actually says `Promise<undefined>` but our tooling doesn't like that -->

Returns `Promise<void>`

#### `languageModel.measureInputUsage(input, [options])` _Experimental_

* `input` [LanguageModelMessage[]](structures/language-model-message.md) | string
* `options` [LanguageModelPromptOptions](structures/language-model-prompt-options.md) (optional)

Returns `Promise<number>`

#### `languageModel.clone([options])` _Experimental_

* `options` [LanguageModelCloneOptions](structures/language-model-clone-options.md) (optional)

Returns `Promise<LanguageModel>`

#### `languageModel.destroy()` _Experimental_

Destroys the model
