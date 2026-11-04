// rea decompile_all
// name: __sendBootImageToDevice
// address: 0xf1243
// body: available
// range: 0xf1243-0xf13e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __sendBootImageToDevice(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  useconds_t uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long local_40;
  useconds_t local_34;
  
  uVar3 = __getMaxFileTransferSize();
  __AMRecoveryModeDeviceProgress(param_1,5);
  iVar4 = __sendFileToDeviceWithMaxSize(param_1,param_3,uVar3);
  if (iVar4 != 0) {
    return iVar4;
  }
  local_34 = 1000000;
  local_40 = 0;
  cVar2 = _AMRestoreDeviceIsBootstrapOnly(param_2,param_1 + 0x58);
  lVar6 = _CFDictionaryGetValue(param_2,&cf_RamdiskDelay);
  if (lVar6 == 0) {
    if ((cVar2 != '\0') ||
       (__copyEnvironmentVariable(param_1,&cf_ramdisk_delay,&local_40), lVar6 = local_40,
       local_40 == 0)) {
      uVar3 = 0;
      goto LAB_000f12df;
    }
    uVar5 = _CFStringGetIntValue(local_40);
    local_34 = uVar5;
    _CFRelease(lVar6);
    _AMRLog(7,&cf_ramdisk_delay__d,uVar5);
  }
  else {
    _CFNumberGetValue(lVar6,3,&local_34);
  }
  uVar3 = 1;
LAB_000f12df:
  __loadFirmwareInfo(param_1);
  uVar1 = *(uint *)(param_1 + 0x5c);
  lVar6 = _CFDictionaryGetValue(param_2,&cf_FPGAValidateRamdiskTimeout);
  if (lVar6 == 0) {
    uVar9 = *(undefined8 *)(&DAT_0032ca70 + (ulong)((uVar1 & 0xfffffff0) == 0xf0) * 8);
  }
  else {
    lVar7 = _CFGetTypeID(lVar6);
    lVar8 = _CFNumberGetTypeID();
    if (lVar7 != lVar8) {
      _AMRLog(3,&cf_FPGAValidateRamdiskTimeoutexpectsaninteger_);
      return 1;
    }
    uVar9 = __calcDeviceRequestTimeout(param_1,lVar6);
  }
  iVar4 = __sendCommandToDeviceWithTimeout(uVar9,param_1,&cf_ramdisk,uVar3);
  if (iVar4 == 0) {
    _usleep(local_34);
  }
  return iVar4;
}

