// rea decompile_all
// name: _AMAuthInstallMonetMeasureElf
// address: 0x29236e
// body: available
// range: 0x29236e-0x2926d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallMonetMeasureElf
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  CC_LONG CVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  uchar *puVar10;
  void *pvVar11;
  uint uVar12;
  char *pcVar13;
  uint uVar14;
  long lVar15;
  
  uVar3 = _CFDataGetLength(param_2);
  if ((uVar3 < 0x34) || (piVar4 = (int *)_CFDataGetBytePtr(param_2), *piVar4 != 0x464c457f)) {
    pcVar13 = "invalid file format";
  }
  else {
    uVar12 = (uint)*(ushort *)(piVar4 + 0xb);
    if (*(ushort *)(piVar4 + 0xb) != 0) {
      lVar5 = (long)piVar4 + (ulong)(uint)piVar4[7];
      lVar15 = 0;
      uVar14 = 0;
      do {
        if ((uVar14 < *(uint *)(lVar5 + 0xc)) &&
           ((*(uint *)(lVar5 + 0x18) & 0x7000000) != 0x5000000)) {
          lVar15 = lVar5;
          uVar14 = *(uint *)(lVar5 + 0xc);
        }
        lVar5 = lVar5 + 0x20;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      if (lVar15 != 0) {
        uVar6 = _CFGetAllocator(param_1);
        lVar8 = 0;
        lVar5 = _CFDataCreateMutable(uVar6,0);
        uVar6 = 2;
        if (lVar5 == 0) {
          lVar5 = 0;
          goto LAB_0029260a;
        }
        uVar7 = _CFGetAllocator(param_1);
        lVar8 = _CFDataCreateMutable(uVar7,0);
        if (lVar8 == 0) {
          lVar8 = 0;
          goto LAB_0029260a;
        }
        iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 4);
        if (iVar1 == 0x3b0e1) {
LAB_002924c3:
          _CFDataSetLength(lVar5,0x20);
          lVar9 = _CFDataGetBytePtr(param_2);
          uVar12 = *(uint *)(lVar15 + 4);
          CVar2 = *(CC_LONG *)(lVar15 + 0x10);
          puVar10 = (uchar *)_CFDataGetMutableBytePtr(lVar5);
          _CC_SHA256((void *)((ulong)uVar12 + lVar9),CVar2,puVar10);
          _CFDataSetLength(lVar8,0x20);
          pvVar11 = (void *)_CFDataGetBytePtr(param_2);
          CVar2 = _CFDataGetLength(param_2);
          puVar10 = (uchar *)_CFDataGetMutableBytePtr(lVar8);
          _CC_SHA256(pvVar11,CVar2,puVar10);
        }
        else if (((((iVar1 == 0x7f0e1) || (iVar1 == 0xe50e1)) || (iVar1 == 0x1440e1)) ||
                 ((iVar1 == 0x1720e1 || (iVar1 == 0x19f0e1)))) ||
                ((iVar1 == 0x1fe0e1 || (iVar1 == 0x2af0e1)))) {
          _CFDataSetLength(lVar5,0x30);
          lVar9 = _CFDataGetBytePtr(param_2);
          uVar12 = *(uint *)(lVar15 + 4);
          CVar2 = *(CC_LONG *)(lVar15 + 0x10);
          puVar10 = (uchar *)_CFDataGetMutableBytePtr(lVar5);
          _CC_SHA384((void *)((ulong)uVar12 + lVar9),CVar2,puVar10);
          _CFDataSetLength(lVar8,0x30);
          pvVar11 = (void *)_CFDataGetBytePtr(param_2);
          CVar2 = _CFDataGetLength(param_2);
          puVar10 = (uchar *)_CFDataGetMutableBytePtr(lVar8);
          _CC_SHA384(pvVar11,CVar2,puVar10);
        }
        else {
          if (((iVar1 == 0x7f50e1) || (iVar1 == 0x9540e1)) || (iVar1 == 0x9210e1))
          goto LAB_002924c3;
          _CFDataSetLength(lVar5,0x14);
          lVar9 = _CFDataGetBytePtr(param_2);
          uVar12 = *(uint *)(lVar15 + 4);
          CVar2 = *(CC_LONG *)(lVar15 + 0x10);
          puVar10 = (uchar *)_CFDataGetMutableBytePtr(lVar5);
          _CC_SHA1((void *)((ulong)uVar12 + lVar9),CVar2,puVar10);
          _CFDataSetLength(lVar8,0x14);
          pvVar11 = (void *)_CFDataGetBytePtr(param_2);
          CVar2 = _CFDataGetLength(param_2);
          puVar10 = (uchar *)_CFDataGetMutableBytePtr(lVar8);
          _CC_SHA1(pvVar11,CVar2,puVar10);
        }
        _CFDictionarySetValue(param_3,param_5,lVar8);
        _CFDictionarySetValue(param_3,param_4,lVar5);
        uVar6 = 0;
        goto LAB_0029260a;
      }
    }
    pcVar13 = "file lacks a hash section";
  }
  lVar5 = 0;
  _AMAuthInstallLog(3,"AMAuthInstallMonetMeasureElf",pcVar13);
  uVar6 = 10;
  lVar8 = 0;
LAB_0029260a:
  _SafeRelease(lVar8);
  _SafeRelease(lVar5);
  return uVar6;
}

