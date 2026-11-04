// rea decompile_all
// name: _USBMuxSendDictionaryWithTimeout
// address: 0xc587c
// body: available
// range: 0xc587c-0xc5ab7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _USBMuxSendDictionaryWithTimeout
              (undefined4 param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  uint uVar9;
  char *pcVar10;
  ulong uVar11;
  uint local_48 [4];
  ulong local_38;
  
  _CFDictionaryAddValue(param_3,_kUSBMuxParam_ClientStr,_kUSBMuxdVersionString);
  _pthread_once((pthread_once_t *)&_USBMuxSendDictionaryWithTimeout_once,_GetProgNameAndBundleID);
  if (_cfProgName != 0) {
    _CFDictionaryAddValue(param_3,_kUSBMuxParam_ProgName);
  }
  if (_cfBundleID != 0) {
    _CFDictionaryAddValue(param_3,_kUSBMuxParam_BundleID);
  }
  _USBMuxProcessID();
  uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar4 = _CFNumberCreate(uVar5,9);
  if (lVar4 != 0) {
    _CFDictionaryAddValue(param_3,_kUSBMuxParam_ProcessID,lVar4);
    _CFRelease(lVar4);
  }
  lVar4 = _CFPropertyListCreateData(uVar5,param_3,100,0,0);
  if (lVar4 == 0) {
    return 0x16;
  }
  uVar5 = _CFDataGetLength(lVar4);
  local_48[0] = (int)uVar5 + 0x10;
  local_48[1] = 1;
  local_48[2] = 8;
  uVar9 = _nextTransactionID + 1;
  local_48[3] = uVar9;
  if (_isTranslated == '\x01') {
    local_48[0] = local_48[0] >> 0x18 | (local_48[0] & 0xff0000) >> 8 | (local_48[0] & 0xff00) << 8
                  | local_48[0] * 0x1000000;
    local_48[1] = 0x1000000;
    local_48[2] = 0x8000000;
    local_48[3] = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                  uVar9 * 0x1000000;
  }
  _nextTransactionID = uVar9;
  iVar1 = _USBMuxWaitForTimeoutOrEvent(param_1,2,param_4);
  if (iVar1 == 0) {
    iVar1 = 0;
    uVar2 = _USBMuxSendWithTimeout(param_1,local_48,0x10,0,0);
    if (uVar2 == 0x10) {
      local_38 = _CFDataGetBytePtr(lVar4);
      uVar6 = _CFDataGetLength(lVar4);
      local_38 = _USBMuxSendWithTimeout(param_1,local_38,uVar6,0,0);
      iVar3 = (int)local_38;
      lVar7 = _CFDataGetLength(lVar4);
      if (iVar3 == lVar7) goto LAB_000c5a85;
      pcVar10 = "%s:%d USBMuxSendWithTimeout failed sending body of %d bytes: %d\n";
      uVar6 = 0xd3;
      uVar11 = local_38;
    }
    else {
      pcVar10 = "%s:%d USBMuxSendWithTimeout failed sending header of %d bytes: %d\n";
      uVar5 = 0x10;
      uVar6 = 0xca;
      uVar11 = (ulong)uVar2;
    }
    _USBMuxDebugLog(pcVar10,"USBMuxSendDictionaryWithTimeout",uVar6,uVar5,uVar11);
    piVar8 = ___error();
    iVar1 = *piVar8;
  }
LAB_000c5a85:
  _CFRelease(lVar4);
  if (param_2 != (uint *)0x0 && iVar1 == 0) {
    *param_2 = uVar9;
    iVar1 = 0;
  }
  return iVar1;
}

