// rea decompile_all
// name: __AMRestoreCopyDeviceMapPlistEntryForHardware
// address: 0xe0812
// body: available
// range: 0xe0812-0xe0a56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xe0a52 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1
__AMRestoreCopyDeviceMapPlistEntryForHardware(long param_1,undefined4 *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  cfstringStruct *pcVar9;
  long local_f0 [23];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if ((param_2 == (undefined4 *)0x0 || param_1 == 0) || param_3 == (undefined8 *)0x0) {
    pcVar9 = &cf__s_badparamater;
LAB_000e0853:
    uVar8 = 0;
    _AMRLog(4,pcVar9,"_AMRestoreCopyDeviceMapPlistEntryForHardware");
    goto LAB_000e0a2d;
  }
  local_f0[0x13] = 0;
  local_f0[0x14] = 0;
  local_f0[0x11] = 0;
  local_f0[0x12] = 0;
  local_f0[0xf] = 0;
  local_f0[0x10] = 0;
  local_f0[0xd] = 0;
  local_f0[0xe] = 0;
  local_f0[0xb] = 0;
  local_f0[0xc] = 0;
  local_f0[9] = 0;
  local_f0[10] = 0;
  local_f0[7] = 0;
  local_f0[8] = 0;
  local_f0[5] = 0;
  local_f0[6] = 0;
  local_f0[3] = 0;
  local_f0[4] = 0;
  local_f0[1] = 0;
  local_f0[2] = 0;
  local_f0[0x15] = 0;
  cVar1 = __AMRestoreGetDeviceMapEntryForHardware();
  if (cVar1 == '\0') {
    uVar8 = 0;
    _AMRLog(4,&cf_unabletofinddevicemapentryfor0x_08x0x_08x0x_08x,*param_2,param_2[1],param_2[0x15])
    ;
    goto LAB_000e0a2d;
  }
  _AMRLog(7,&cf_founddevicemapentryfor0x_08x0x_08x0x_08x_boardConfig__splatform__s,*param_2,
          param_2[1],param_2[0x15],local_f0 + 0xe,local_f0 + 0x12);
  uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar3 = _CFStringCreateWithCString(uVar7,local_f0 + 0xe,0x8000100);
  if (lVar3 == 0) {
    pcVar9 = &cf__s_unabletocreatec_string;
    goto LAB_000e0853;
  }
  lVar4 = _CFDictionaryGetValue(param_1,&cf_FirmwareDirectory);
  if (lVar4 == 0) {
    uVar8 = 0;
    _AMRLog(4,&cf__s_firmwareDirectorynotinoptions,"_AMRestoreCopyDeviceMapPlistEntryForHardware");
  }
  else {
    local_f0[0] = 0;
    lVar5 = _CFStringCreateWithFormat(uVar7,0,&cf____cdevice_map_plist,lVar4,0x2f);
    iVar2 = __AMRestoreCreateCFPropertyListWithContentsOfFile(lVar5,local_f0);
    lVar4 = local_f0[0];
    if (local_f0[0] == 0 || iVar2 != 0) {
      uVar8 = 0;
      _AMRLogWithFilePath(3,lVar5,&cf_device_map_plistfilenotfound);
      if (lVar4 != 0) goto LAB_000e0a10;
    }
    else {
      lVar6 = _CFDictionaryGetValue(local_f0[0],lVar3);
      if (lVar6 == 0) {
        uVar8 = 0;
        _AMRLog(4,&cf_boardConfigDictisNULL);
      }
      else {
        uVar7 = _CFRetain(lVar6);
        *param_3 = uVar7;
        uVar8 = 1;
      }
LAB_000e0a10:
      _CFRelease(lVar4);
    }
    if (lVar5 != 0) {
      _CFRelease(lVar5);
    }
  }
  _CFRelease(lVar3);
LAB_000e0a2d:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}

