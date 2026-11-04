// rea decompile_all
// name: __AMAuthInstallCopyFormattingDescription
// address: 0x19fba9
// body: available
// range: 0x19fba9-0x19fc98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __AMAuthInstallCopyFormattingDescription(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *pcVar9;
  
  if (param_1 != 0) {
    uVar2 = _AMAuthInstallApCopyDescription();
    uVar3 = _AMAuthInstallBasebandCopyDescription(param_1);
    uVar4 = _CFGetAllocator(param_1);
    pcVar7 = &cf_default;
    if (*(cfstringStruct **)(param_1 + 0x40) != (cfstringStruct *)0x0) {
      pcVar7 = *(cfstringStruct **)(param_1 + 0x40);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    pcVar8 = &cf_YES;
    pcVar9 = &cf_YES;
    if (*(char *)(param_1 + 0x38) == '\0') {
      pcVar9 = &cf_NO;
    }
    if (*(long *)(param_1 + 0x68) == 0) {
      pcVar8 = &cf_NO;
    }
    uVar5 = _AMAuthInstallSupportGetLibraryVersionString();
    uVar6 = _AMAuthInstallPlatformGetPlatformInfoString();
    uVar4 = _CFStringCreateWithFormat
                      (uVar4,param_2,
                       &
                       cf_<AMAuthInstall_p>_ap____bp____UserAuth____iTunes____server______locale____version______platform____
                       ,param_1,uVar2,uVar3,pcVar8,pcVar9,uVar1,pcVar7,uVar5,uVar6);
    _SafeRelease(uVar2);
    _SafeRelease(uVar3);
    return uVar4;
  }
  __AMAuthInstallCopyFormattingDescription_cold_1();
  uVar2 = __AMAuthInstallCopyFormattingDescription();
  return uVar2;
}

