// rea decompile_all
// name: _AMAuthInstallRembrandtMeasureElf
// address: 0x29b23e
// body: available
// range: 0x29b23e-0x29b561 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallRembrandtMeasureElf
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  CC_LONG CVar2;
  ulong uVar3;
  int *data;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uchar *puVar7;
  char *pcVar8;
  void *pvVar9;
  long lVar10;
  void *data_00;
  CC_SHA512_CTX local_130;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  uVar3 = _CFDataGetLength(param_2);
  if ((uVar3 < 0x34) ||
     (local_48 = param_2, data = (int *)_CFDataGetBytePtr(param_2), *data != 0x464c457f)) {
    pcVar8 = "invalid file format";
LAB_0029b53e:
    _AMAuthInstallLog(3,"AMAuthInstallRembrandtMeasureElf",pcVar8);
    uVar5 = 10;
  }
  else {
    if ((*(uint *)((long)data + (ulong)(uint)data[7] + 0x18) & 0x7000000) == 0x4000000) {
      pcVar8 = "file lacks a hash section";
      goto LAB_0029b53e;
    }
    pvVar9 = (void *)((long)data + (ulong)(uint)data[7]);
    local_60 = param_4;
    local_58 = param_3;
    local_50 = param_5;
    lVar4 = _CFDataGetBytePtr(local_48);
    data_00 = (void *)((ulong)*(uint *)((long)pvVar9 + 4) + lVar4);
    _AMAuthInstallLogDumpMemory
              (7,"AMAuthInstallRembrandtMeasureElf","hash section",data_00,
               *(undefined4 *)((long)pvVar9 + 0x10));
    uVar5 = _CFGetAllocator(param_1);
    local_38 = _CFDataCreateMutable(uVar5,0);
    uVar5 = 2;
    if (local_38 != 0) {
      uVar6 = _CFGetAllocator(param_1);
      local_40 = _CFDataCreateMutable(uVar6,0);
      lVar4 = local_38;
      if (local_40 == 0) {
        lVar10 = 0;
        goto LAB_0029b4fb;
      }
      uVar1 = *(int *)(*(long *)(param_1 + 0x30) + 4) - 0x5e;
      if (uVar1 < 0xb) {
        if ((0x284U >> (uVar1 & 0x1f) & 1) == 0) {
          if ((0x401U >> (uVar1 & 0x1f) & 1) == 0) goto LAB_0029b4b6;
          _CFDataSetLength(local_38,0x30);
          _CC_SHA384_Init(&local_130);
          _CC_SHA384_Update(&local_130,data,(uint)*(ushort *)(data + 10));
          _CC_SHA384_Update(&local_130,pvVar9,
                            (uint)*(ushort *)((long)data + 0x2a) * (uint)*(ushort *)(data + 0xb));
          _CC_SHA384_Update(&local_130,data_00,*(CC_LONG *)((long)pvVar9 + 0x10));
          puVar7 = (uchar *)_CFDataGetMutableBytePtr(lVar4);
          _CC_SHA384_Final(puVar7,&local_130);
          lVar10 = local_40;
          _CFDataSetLength(local_40,0x30);
          uVar5 = local_48;
          pvVar9 = (void *)_CFDataGetBytePtr(local_48);
          CVar2 = _CFDataGetLength(uVar5);
          puVar7 = (uchar *)_CFDataGetMutableBytePtr(lVar10);
          _CC_SHA384(pvVar9,CVar2,puVar7);
        }
        else {
          _CFDataSetLength(local_38,0x20);
          _CC_SHA256_Init((CC_SHA256_CTX *)&local_130);
          _CC_SHA256_Update((CC_SHA256_CTX *)&local_130,data,(uint)*(ushort *)(data + 10));
          _CC_SHA256_Update((CC_SHA256_CTX *)&local_130,pvVar9,
                            (uint)*(ushort *)((long)data + 0x2a) * (uint)*(ushort *)(data + 0xb));
          _CC_SHA256_Update((CC_SHA256_CTX *)&local_130,data_00,*(CC_LONG *)((long)pvVar9 + 0x10));
          puVar7 = (uchar *)_CFDataGetMutableBytePtr(lVar4);
          _CC_SHA256_Final(puVar7,(CC_SHA256_CTX *)&local_130);
          lVar10 = local_40;
          _CFDataSetLength(local_40,0x20);
          uVar5 = local_48;
          pvVar9 = (void *)_CFDataGetBytePtr(local_48);
          CVar2 = _CFDataGetLength(uVar5);
          puVar7 = (uchar *)_CFDataGetMutableBytePtr(lVar10);
          _CC_SHA256(pvVar9,CVar2,puVar7);
        }
      }
      else {
LAB_0029b4b6:
        _AMAuthInstallLog(3,"AMAuthInstallRembrandtMeasureElf","Unknown chipid");
        lVar10 = local_40;
        lVar4 = local_38;
      }
      uVar5 = local_58;
      _CFDictionarySetValue(local_58,local_50,lVar10);
      _CFDictionarySetValue(uVar5,local_60,lVar4);
      uVar5 = 0;
      goto LAB_0029b4fb;
    }
  }
  lVar4 = 0;
  lVar10 = 0;
LAB_0029b4fb:
  _SafeRelease(lVar10);
  _SafeRelease(lVar4);
  return uVar5;
}

