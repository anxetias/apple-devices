// rea decompile_all
// name: __AMRUSBDeviceGetFirmwareInfo
// address: 0xe12db
// body: available
// range: 0xe12db-0xe13ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMRUSBDeviceGetFirmwareInfo(undefined8 param_1,undefined8 *param_2,undefined1 param_3)

{
  char cVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[0xc] = 0;
  uVar2 = __AMRUSBDeviceGetProductID();
  cVar1 = __AMRestorePIDStoresInfoInSerialNumber(uVar2);
  if (cVar1 == '\0') {
    uVar3 = __AMRUSBDeviceGetDeviceReleaseNumber(param_1);
    *(undefined4 *)param_2 = 0x8900;
    *(uint *)(param_2 + 1) = (uint)(byte)uVar3;
    lVar6 = 0;
    do {
      if ((&_BoardIDMap)[lVar6 * 2] == uVar3 >> 8) {
        uVar5 = (uint)(ushort)(&DAT_0032c5d2)[lVar6 * 2];
        goto LAB_000e13ae;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 6);
    uVar5 = 0xffff;
LAB_000e13ae:
    *(uint *)((long)param_2 + 4) = uVar5;
    lVar6 = 0;
  }
  else {
    lVar6 = __AMRUSBDeviceCopySerialNumber();
    if (lVar6 == 0) {
      _AMRLog(3,&cf_unabletogetdeviceserialnumber);
      return -1;
    }
    iVar4 = _parseSerialNumberInfo(lVar6,param_2,uVar2,param_3);
    if (iVar4 != 0) goto LAB_000e13e6;
  }
  lVar7 = __AMRUSBDeviceCopyProductString(param_1);
  param_2[4] = lVar7;
  iVar4 = 0;
  if (lVar7 == 0) {
    _AMRLog(3,&cf_unabletogetdeviceproudctstring);
    iVar4 = -1;
  }
  if (lVar6 == 0) {
    return iVar4;
  }
LAB_000e13e6:
  _CFRelease(lVar6);
  return iVar4;
}

