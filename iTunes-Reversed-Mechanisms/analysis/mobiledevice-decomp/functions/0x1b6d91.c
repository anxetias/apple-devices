// rea decompile_all
// name: __AMAuthInstallUpdaterCopyDescription
// address: 0x1b6d91
// body: available
// range: 0x1b6d91-0x1b6e68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __AMAuthInstallUpdaterCopyDescription(long param_1)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  
  uVar1 = _CFGetAllocator();
  uVar1 = _CFStringCreateMutable(uVar1,0);
  pcVar2 = &cf_true;
  if (*(char *)(param_1 + 0x40) == '\0') {
    pcVar2 = &cf_false;
  }
  _CFStringAppendFormat(uVar1,0,&cf_<AMAuthInstallUpdater_p>_localSigning___,param_1,pcVar2);
  _CFStringAppendFormat(uVar1,0,&cf_responseTags___,*(undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x20) != 0) {
    _CFStringAppendFormat(uVar1,0,&cf_buildIdentityTags___);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    _CFStringAppendFormat(uVar1,0,&cf_requestTags___);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    _CFStringAppendFormat(uVar1,0,&cf_responseTags___);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    _CFStringAppendFormat(uVar1,0,&cf_updaterOptions___);
  }
  return uVar1;
}

