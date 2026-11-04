// rea decompile_all
// name: __AMAuthInstallMonetLocalCreateECCSignature
// address: 0x2976c3
// body: available
// range: 0x2976c3-0x2978a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMAuthInstallMonetLocalCreateECCSignature
              (long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  void *pvVar8;
  void *pvVar9;
  size_t sVar10;
  undefined1 local_54 [4];
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0;
  iVar1 = _AMAuthInstallCryptoGetEccKeyLength(param_1,param_2,local_54);
  if (iVar1 == 0) {
    uVar2 = _CFDataGetLength(param_3);
    if (uVar2 < 0x5b8) {
      local_48 = param_4;
      uVar4 = _CFGetAllocator(param_1);
      lVar7 = 0;
      local_50 = param_2;
      uVar4 = _CFDataCreateMutable(uVar4,0);
      uVar5 = _CFDataGetBytePtr(param_3);
      uVar6 = _CFDataGetLength(param_3);
      _CFDataAppendBytes(uVar4,uVar5,uVar6);
      uVar5 = _CFDataGetBytePtr(uVar4);
      local_40 = uVar4;
      uVar3 = _CFDataGetLength(uVar4);
      iVar1 = _AMAuthInstallCryptoCreateEccCustomSignature(param_1,local_50,uVar5,uVar3,&local_38);
      uVar4 = local_40;
      if (iVar1 == 0) {
        iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 4);
        uVar4 = 0x68;
        if ((((iVar1 != 0xe50e1) && (iVar1 != 0x1440e1)) && (iVar1 != 0x1720e1)) &&
           (((iVar1 != 0x19f0e1 && (iVar1 != 0x1fe0e1)) && (iVar1 != 0x2af0e1)))) {
          uVar4 = 0x100;
        }
        uVar5 = _CFGetAllocator(param_1);
        lVar7 = _CFDataCreateMutable(uVar5,uVar4);
        iVar1 = 0;
        if (lVar7 == 0) {
          iVar1 = 2;
          lVar7 = 0;
          uVar4 = local_40;
        }
        else {
          _CFDataSetLength(lVar7,uVar4);
          uVar4 = _CFDataGetMutableBytePtr(lVar7);
          uVar5 = _CFDataGetLength(lVar7);
          ___bzero(uVar4,uVar5);
          pvVar8 = (void *)_CFDataGetMutableBytePtr(lVar7);
          pvVar9 = (void *)_CFDataGetBytePtr(local_38);
          sVar10 = _CFDataGetLength(local_38);
          _memcpy(pvVar8,pvVar9,sVar10);
          uVar4 = _CFRetain(lVar7);
          *local_48 = uVar4;
          uVar4 = local_40;
        }
      }
      goto LAB_00297846;
    }
    _AMAuthInstallLog(3,"_AMAuthInstallMonetLocalCreateECCSignature",
                      "data to be signed is too large");
    iVar1 = 1;
  }
  lVar7 = 0;
  uVar4 = 0;
LAB_00297846:
  _SafeRelease(uVar4);
  _SafeRelease(lVar7);
  _SafeRelease(local_38);
  return iVar1;
}

