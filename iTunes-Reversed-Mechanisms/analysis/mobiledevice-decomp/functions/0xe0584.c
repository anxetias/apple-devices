// rea decompile_all
// name: __AMRestoreGetDeviceMapEntryForHardware
// address: 0xe0584
// body: available
// range: 0xe0584-0xe0684 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xe05c2 to 0xdfe01 __legacy_AMRestoreGetDeviceMapEntryForHardware (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __AMRestoreGetDeviceMapEntryForHardware
                (undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  long local_30;
  
  local_30 = 0;
  cVar1 = _AMRestoreOptionsAreLegacy();
  if (cVar1 != '\0') {
    uVar3 = __legacy_AMRestoreGetDeviceMapEntryForHardware(param_1,param_2,param_3);
    return uVar3;
  }
  iVar2 = _AMRAuthInstallCopyPathToFirmware(param_1,&local_30);
  if (iVar2 == 0) {
    cVar1 = __getDeviceMapEntryForHardwareFromDeviceMapTxt(local_30,param_2,param_3);
    bVar5 = 1;
    if (cVar1 == '\0') {
      lVar4 = _CFDictionaryGetValue(param_1,&cf_RestoreBundlePath);
      if (lVar4 != 0) {
        lVar4 = __AMRestoreCopyBoardConfigCacheForRestoreBundle(lVar4);
        if (lVar4 != 0) {
          cVar1 = __getDeviceMapEntryForHardwareFromPlistCache(lVar4,param_2,param_3);
          _CFRelease(lVar4);
          if (cVar1 != '\0') goto LAB_000e0666;
        }
      }
      bVar5 = 0;
      _AMRLog(4,&cf_unabletofinddevicemapentryfor0x_08x0x_08x0x_08x,*param_2,param_2[1],
              param_2[0x15]);
    }
  }
  else {
    bVar5 = 0;
    _AMRLog(3,&cf_FailedtogetpathtoFirmwaredirectory);
  }
LAB_000e0666:
  if (local_30 != 0) {
    _CFRelease();
  }
  return (ulong)bVar5;
}

