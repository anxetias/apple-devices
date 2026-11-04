// rea decompile_all
// name: __AMRestoreCopyiBootStage2FirmwareURLs
// address: 0xf0d5d
// body: available
// range: 0xf0d5d-0xf0e54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__AMRestoreCopyiBootStage2FirmwareURLs(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long local_40;
  long local_38;
  
  local_40 = 0;
  local_38 = 0;
  iVar1 = __AMRestoreCopyiBootFirmwareURLs();
  if (iVar1 == 0) {
    iVar1 = __AMRestoreCopyiBootStage1FirmwareURLs(param_1,param_2,&local_40);
    if (iVar1 == 0) {
      lVar2 = _CFDictionaryGetCount(local_40);
      pvVar3 = _malloc(lVar2 * 8);
      uVar6 = 0;
      _CFDictionaryGetKeysAndValues(local_40,pvVar3,0);
      if (0 < lVar2) {
        lVar5 = 0;
        do {
          _CFDictionaryRemoveValue(local_38,*(undefined8 *)((long)pvVar3 + lVar5 * 8));
          lVar5 = lVar5 + 1;
        } while (lVar2 != lVar5);
      }
      *param_3 = local_38;
      local_38 = 0;
      _free(pvVar3);
      goto LAB_000f0e35;
    }
    pcVar4 = &cf__AMRestoreCopyiBootStage1FirmwareURLsfailed_d;
  }
  else {
    pcVar4 = &cf__AMRestoreCopyiBootFirmwareURLsfailed_d;
  }
  _AMRLog(3,pcVar4,iVar1);
  uVar6 = 6;
  if (local_38 != 0) {
    _CFRelease();
  }
LAB_000f0e35:
  if (local_40 != 0) {
    _CFRelease();
  }
  return uVar6;
}

