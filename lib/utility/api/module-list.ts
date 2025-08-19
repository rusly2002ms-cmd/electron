// Utility side modules, please sort alphabetically.
export const utilityNodeModuleList: ElectronInternal.ModuleEntry[] = [
  { name: 'localAIHandler', loader: () => require('./local-ai-handler') },
  { name: 'LanguageModel', loader: () => require('./language-model') },
  { name: 'net', loader: () => require('./net') },
  { name: 'systemPreferences', loader: () => require('@electron/internal/browser/api/system-preferences') }
];
