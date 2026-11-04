// rea decompile_all
// name: __AMRestorePushBootLogo
// address: 0xf0f58
// body: available
// range: 0xf0f58-0xf1128 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMRestorePushBootLogo(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  __AMRecoveryModeDeviceProgress(param_1,0x2b);
  lVar2 = __copyBootGraphicPath(param_1,param_2);
  if (lVar2 == 0) {
    return 1;
  }
  iVar1 = __sendFileToDevice(param_1,lVar2);
  if (iVar1 == 0x11) {
    _AMRLog(7,&cf_Nobootgraphicfound);
  }
  else {
    if (iVar1 != 0) goto LAB_000f1114;
    __loadFirmwareInfo(param_1);
    iVar1 = __sendCommandToDeviceWithTimeout
                      (*(undefined8 *)
                        (&DAT_0032ca70 +
                        (ulong)((*(uint *)(param_1 + 0x5c) & 0xfffffff0) == 0xf0) * 8),param_1,
                       &cf_setpicture4,0);
    if (iVar1 != 0) goto LAB_000f1114;
    _usleep(1000000);
  }
  _CFRelease(lVar2);
  local_2b = 0;
  local_2a = 0;
  local_29 = 0;
  lVar2 = _CFDictionaryGetValue(param_2,&cf_BackgroundColor);
  if (lVar2 == 0) {
    local_2b = 0;
    local_2a = 0;
    local_29 = 0;
  }
  else {
    uVar3 = _CFArrayGetValueAtIndex(lVar2,0);
    _CFNumberGetValue(uVar3,7,&local_2b);
    uVar3 = _CFArrayGetValueAtIndex(lVar2,1);
    _CFNumberGetValue(uVar3,7,&local_2a);
    uVar3 = _CFArrayGetValueAtIndex(lVar2,2);
    _CFNumberGetValue(uVar3,7,&local_29);
  }
  lVar2 = _CFStringCreateWithFormat
                    (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,&cf_bgcolor_d_d_d,local_2b,
                     local_2a,local_29);
  __loadFirmwareInfo(param_1);
  iVar1 = __sendCommandToDeviceWithTimeout
                    (*(undefined8 *)
                      (&DAT_0032ca70 + (ulong)((*(uint *)(param_1 + 0x5c) & 0xfffffff0) == 0xf0) * 8
                      ),param_1,lVar2,0);
LAB_000f1114:
  _CFRelease(lVar2);
  return iVar1;
}

