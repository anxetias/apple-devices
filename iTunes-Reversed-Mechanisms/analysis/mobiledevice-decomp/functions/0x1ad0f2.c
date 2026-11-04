// rea decompile_all
// name: _AMAuthInstallMonetMeasureElfMBN
// address: 0x1ad0f2
// body: available
// range: 0x1ad0f2-0x1ad4c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1ad4bf to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallMonetMeasureElfMBN
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uchar *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined8 uVar11;
  uint uVar12;
  int iVar13;
  int local_80;
  int local_7c;
  undefined1 local_78 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar2 = _CFDataGetLength(param_2);
  if (uVar2 < 0x34) {
    _AMAuthInstallMonetMeasureElfMBN_cold_11();
LAB_001ad455:
    uVar5 = 10;
  }
  else {
    piVar3 = (int *)_CFDataGetBytePtr(param_2);
    if (*piVar3 != 0x464c457f) {
      _AMAuthInstallMonetMeasureElfMBN_cold_1();
      goto LAB_001ad455;
    }
    uVar12 = (uint)*(ushort *)(piVar3 + 0xb);
    if (*(ushort *)(piVar3 + 0xb) == 0) {
LAB_001ad450:
      _AMAuthInstallMonetMeasureElfMBN_cold_10();
      goto LAB_001ad455;
    }
    lVar9 = (long)piVar3 + (ulong)(uint)piVar3[7];
    uVar10 = 0;
    lVar8 = 0;
    do {
      if ((uVar10 < *(uint *)(lVar9 + 0xc)) && ((*(uint *)(lVar9 + 0x18) & 0x7000000) != 0x5000000))
      {
        lVar8 = lVar9;
        uVar10 = *(uint *)(lVar9 + 0xc);
      }
      lVar9 = lVar9 + 0x20;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    if (lVar8 == 0) goto LAB_001ad450;
    iVar13 = *(int *)(lVar8 + 0x10);
    iVar1 = *(int *)(lVar8 + 4);
    lVar9 = _CFDataGetLength(param_2);
    if (lVar9 < (long)(ulong)(uint)(iVar13 + iVar1)) {
      _AMAuthInstallMonetMeasureElfMBN_cold_9();
      goto LAB_001ad455;
    }
    lVar9 = _CFDataGetBytePtr(param_2);
    uVar12 = *(uint *)(lVar8 + 4);
    uVar2 = (ulong)uVar12;
    iVar13 = *(int *)(lVar9 + 0x14 + uVar2);
    lVar4 = _CFDataGetLength(param_2);
    if (lVar4 < (long)(ulong)(iVar13 + uVar12)) {
      _AMAuthInstallMonetMeasureElfMBN_cold_8();
      goto LAB_001ad455;
    }
    iVar13 = *(int *)(lVar9 + 0x10 + uVar2);
    iVar1 = *(int *)(lVar8 + 4);
    lVar4 = _CFDataGetLength(param_2);
    if (lVar4 < (long)(ulong)(uint)(iVar13 + iVar1)) {
      _AMAuthInstallMonetMeasureElfMBN_cold_7();
      goto LAB_001ad455;
    }
    iVar13 = *(int *)(lVar9 + 0x24 + uVar2);
    iVar1 = *(int *)(lVar8 + 4);
    lVar4 = _CFDataGetLength(param_2);
    if (lVar4 < (long)(ulong)(uint)(iVar13 + iVar1)) {
      _AMAuthInstallMonetMeasureElfMBN_cold_6();
      goto LAB_001ad455;
    }
    iVar13 = *(int *)(lVar9 + 0x1c + uVar2);
    iVar1 = *(int *)(lVar8 + 4);
    lVar4 = _CFDataGetLength(param_2);
    if (lVar4 < (long)(ulong)(uint)(iVar13 + iVar1)) {
      _AMAuthInstallMonetMeasureElfMBN_cold_5();
      goto LAB_001ad455;
    }
    if ((ulong)(uint)(*(int *)(lVar9 + 0x1c + uVar2) + *(int *)(lVar9 + 0x14 + uVar2) +
                     *(int *)(lVar9 + 0x24 + uVar2)) + 0x28 != (ulong)*(uint *)(lVar8 + 0x10)) {
      _AMAuthInstallMonetMeasureElfMBN_cold_2();
      goto LAB_001ad455;
    }
    uVar5 = _CFGetAllocator(param_1);
    lVar4 = _CFDataCreateMutable(uVar5,0);
    if (lVar4 != 0) {
      if (*(int *)(*(long *)(param_1 + 0x30) + 4) == 0x7f0e1) {
        _CFDataSetLength(lVar4,0x30);
        lVar6 = _CFDataGetBytePtr(param_2);
        uVar12 = *(uint *)(lVar8 + 4);
        iVar13 = *(int *)(lVar9 + 0x14 + uVar2);
        puVar7 = (uchar *)_CFDataGetMutableBytePtr(lVar4);
        _CC_SHA384((void *)((ulong)uVar12 + lVar6),iVar13 + 0x28,puVar7);
        iVar13 = *(int *)(lVar8 + 4) + *(int *)(lVar9 + 0x14 + uVar2) + 0x28;
        local_7c = iVar13;
        local_80 = _CFDataGetLength(param_2);
        local_80 = local_80 - iVar13;
        __SHA384Partial(piVar3,iVar13,local_78);
        uVar5 = _CFGetAllocator(param_1);
        uVar11 = 0x48;
      }
      else {
        _CFDataSetLength(lVar4,0x20);
        lVar6 = _CFDataGetBytePtr(param_2);
        uVar12 = *(uint *)(lVar8 + 4);
        iVar13 = *(int *)(lVar9 + 0x14 + uVar2);
        puVar7 = (uchar *)_CFDataGetMutableBytePtr(lVar4);
        _CC_SHA256((void *)((ulong)uVar12 + lVar6),iVar13 + 0x28,puVar7);
        iVar13 = *(int *)(lVar8 + 4) + *(int *)(lVar9 + 0x14 + uVar2) + 0x28;
        local_7c = iVar13;
        local_80 = _CFDataGetLength(param_2);
        local_80 = local_80 - iVar13;
        __SHA256Partial(piVar3,iVar13,local_78);
        uVar5 = _CFGetAllocator(param_1);
        uVar11 = 0x28;
      }
      lVar8 = _CFDataCreate(uVar5,&local_80,uVar11);
      if (lVar8 == 0) {
        _AMAuthInstallMonetMeasureElfMBN_cold_3();
        uVar5 = 2;
        lVar8 = 0;
      }
      else {
        _CFDictionarySetValue(param_3,param_4,lVar4);
        _CFDictionarySetValue(param_3,param_5,lVar8);
        uVar5 = 0;
      }
      goto LAB_001ad418;
    }
    _AMAuthInstallMonetMeasureElfMBN_cold_4();
    uVar5 = 2;
  }
  lVar4 = 0;
  lVar8 = 0;
LAB_001ad418:
  _SafeRelease(lVar4);
  _SafeRelease(lVar8);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

