// rea decompile_all
// name: __bootstrapRestore
// address: 0xf08ea
// body: available
// range: 0xf08ea-0xf0a95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __bootstrapRestore(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  cfstringStruct *pcVar3;
  undefined8 uVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  long local_38;
  
  local_38 = 0;
  cVar1 = _AMRestoreOptionsAreLegacy(param_2);
  _AMRLog(7,&cf_bootstrappingrestorewith__,param_3);
  if (cVar1 == '\0') {
    iVar2 = _AMRAuthInstallCreatePathFromBundle
                      (*(undefined8 *)(param_1 + 200),param_2,param_3,&local_38);
    lVar5 = local_38;
    if (local_38 == 0 || iVar2 != 0) {
      _AMRLog(3,&cf_Failedtofindbootstrapfile);
      return 0xb;
    }
  }
  else {
    pcVar3 = (cfstringStruct *)_CFDictionaryGetValue(param_2,&cf_DFUFileType);
    uVar4 = _CFDictionaryGetValue(param_2,&cf_FirmwareDirectory);
    iVar2 = _AMRAuthInstallCreatePathFromBundle(*(undefined8 *)(param_1 + 200),param_2,param_3);
    if (iVar2 == 0) {
      lVar5 = 0;
    }
    else {
      pcVar6 = &cf_DEVELOPMENT;
      if (pcVar3 != (cfstringStruct *)0x0) {
        pcVar6 = pcVar3;
      }
      lVar5 = _CFStringCreateWithFormat
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                         &cf____cdfu_c_________dfu,uVar4,0x2f,0x2f,param_3,
                         *(undefined8 *)(param_1 + 0x40),pcVar6);
    }
  }
  iVar2 = __sendFileToDevice(param_1,lVar5);
  if (iVar2 == 0) {
    __AMRecoveryModeDeviceProgress(param_1,0x1f);
    _usleep(1000000);
    __loadFirmwareInfo(param_1);
    iVar2 = __sendCommandToDeviceWithTimeout
                      (*(undefined8 *)
                        (&DAT_0032ca70 +
                        (ulong)((*(uint *)(param_1 + 0x5c) & 0xfffffff0) == 0xf0) * 8),param_1,
                       &cf_go,1);
  }
  _CFRelease(lVar5);
  return iVar2;
}

