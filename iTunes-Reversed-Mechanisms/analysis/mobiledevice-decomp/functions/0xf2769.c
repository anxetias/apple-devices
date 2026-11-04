// rea decompile_all
// name: __pushFWToiBoot
// address: 0xf2769
// body: available
// range: 0xf2769-0xf2882 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __pushFWToiBoot(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  
  if (param_2 == 0) {
    return 1;
  }
  lVar3 = _CFURLCopyFileSystemPath(param_2,0);
  if (lVar3 == 0) {
    return 0x12;
  }
  iVar2 = __sendFileToDevice(param_1,lVar3);
  if (iVar2 == 0) {
    __loadFirmwareInfo(param_1);
    uVar1 = *(uint *)(param_1 + 0x5c);
    lVar4 = _CFDictionaryGetValue(param_3,&cf_FPGAValidateFirmwareTimeout);
    if (lVar4 == 0) {
      uVar8 = *(undefined8 *)(&DAT_0032ca70 + (ulong)((uVar1 & 0xfffffff0) == 0xf0) * 8);
    }
    else {
      lVar5 = _CFGetTypeID(lVar4);
      lVar6 = _CFNumberGetTypeID();
      if (lVar5 != lVar6) {
        _AMRLog(3,&cf_FPGAValidateFirmwareTimeoutexpectsaninteger_);
        iVar7 = 1;
        goto LAB_000f284e;
      }
      uVar8 = __calcDeviceRequestTimeout(param_1,lVar4);
    }
    iVar2 = __sendCommandToDeviceWithTimeout(uVar8,param_1,&cf_firmware,0);
    iVar7 = 0;
    if (iVar2 == 0) goto LAB_000f284e;
  }
  _AMRLog(3,&cf__sendiBootFirmwareToDevicefailedwith_d,iVar2);
  iVar7 = iVar2;
LAB_000f284e:
  _CFRelease(lVar3);
  return iVar7;
}

