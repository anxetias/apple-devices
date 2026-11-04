// rea decompile_all
// name: __legacy_AMRestoreGetDeviceMapEntryForHardware
// address: 0xdfe01
// body: available
// range: 0xdfe01-0xdfea3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__legacy_AMRestoreGetDeviceMapEntryForHardware
          (undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = _CFDictionaryGetValue(param_1,&cf_FirmwareDirectory);
  cVar1 = __getDeviceMapEntryForHardwareFromDeviceMapTxt(uVar2,param_2,param_3);
  uVar2 = 1;
  if (cVar1 == '\0') {
    lVar3 = _CFDictionaryGetValue(param_1,&cf_RestoreBundlePath);
    if ((lVar3 != 0) && (lVar3 = __AMRestoreCopyBoardConfigCacheForRestoreBundle(lVar3), lVar3 != 0)
       ) {
      cVar1 = __getDeviceMapEntryForHardwareFromPlistCache(lVar3,param_2,param_3);
      _CFRelease(lVar3);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    uVar2 = 0;
    _AMRLog(4,&cf_unabletofinddevicemapentryfor0x_08x0x_08x0x_08x,*param_2,param_2[1],param_2[0x15])
    ;
  }
  return uVar2;
}

