// rea decompile_all
// name: __AMRUSBDeviceGetProductType
// address: 0xe15c3
// body: available
// range: 0xe15c3-0xe16a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __AMRUSBDeviceGetProductType(undefined8 param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uVar2 = __AMRUSBDeviceGetProductID();
  cVar1 = __AMRestorePIDStoresInfoInSerialNumber(uVar2);
  if (cVar1 == '\0') {
    uVar4 = __AMRUSBDeviceGetDeviceReleaseNumber(param_1);
    uVar4 = uVar4 & 0xff00 | (uint)uVar2 << 0x10;
  }
  else {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_28 = 0;
    iVar3 = __AMRUSBDeviceGetFirmwareInfo(param_1,&local_88,0);
    if (iVar3 == 0) {
      if ((uint)local_88 == 0x8900) {
        uVar4 = 0x12800000;
        if ((ushort)(uVar2 + 0xedda) < 4) {
          uVar4 = 0x12220000;
        }
        lVar5 = 0;
        do {
          local_88._0_4_ = uVar4;
          if ((&DAT_0032c5d2)[lVar5 * 2] == local_88._4_2_) {
            uVar4 = (uint)(ushort)(&_BoardIDMap)[lVar5 * 2] << 8;
            goto LAB_000e169d;
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 != 6);
        uVar4 = 0xffff00;
      }
      else {
        uVar4 = local_88._4_4_ << 0x18;
      }
LAB_000e169d:
      uVar4 = uVar4 | (uint)local_88;
    }
    else {
      _AMRLog(3,&cf_unabletogetfirmwareinfofordevice__d,iVar3);
      uVar4 = 0xffffffff;
    }
  }
  return uVar4;
}

