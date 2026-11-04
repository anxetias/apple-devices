// rea decompile_all
// name: _AMAuthInstallMonetMeasureMav20ElfMBN
// address: 0x1accbe
// body: available
// range: 0x1accbe-0x1ad082 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1ad07e to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallMonetMeasureMav20ElfMBN
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  int local_80;
  int local_7c;
  undefined1 local_78 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar3 = _CFDataGetLength(param_2);
  if (uVar3 < 0x34) {
    _AMAuthInstallMonetMeasureMav20ElfMBN_cold_12();
LAB_001acff7:
    uVar6 = 10;
  }
  else {
    piVar4 = (int *)_CFDataGetBytePtr(param_2);
    if (*piVar4 != 0x464c457f) {
      _AMAuthInstallMonetMeasureMav20ElfMBN_cold_1();
      goto LAB_001acff7;
    }
    uVar13 = (uint)*(ushort *)(piVar4 + 0xb);
    if (*(ushort *)(piVar4 + 0xb) == 0) {
LAB_001acff2:
      _AMAuthInstallMonetMeasureMav20ElfMBN_cold_11();
      goto LAB_001acff7;
    }
    lVar11 = (long)piVar4 + (ulong)(uint)piVar4[7];
    uVar12 = 0;
    lVar10 = 0;
    do {
      if ((uVar12 < *(uint *)(lVar11 + 0xc)) &&
         ((*(uint *)(lVar11 + 0x18) & 0x7000000) != 0x5000000)) {
        lVar10 = lVar11;
        uVar12 = *(uint *)(lVar11 + 0xc);
      }
      lVar11 = lVar11 + 0x20;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    if (lVar10 == 0) goto LAB_001acff2;
    iVar1 = *(int *)(lVar10 + 0x10);
    iVar2 = *(int *)(lVar10 + 4);
    lVar11 = _CFDataGetLength(param_2);
    if (lVar11 < (long)(ulong)(uint)(iVar1 + iVar2)) {
      _AMAuthInstallMonetMeasureMav20ElfMBN_cold_10();
      goto LAB_001acff7;
    }
    _CFDataGetBytePtr(param_2);
    lVar11 = _CFDataGetBytePtr(param_2);
    uVar13 = *(uint *)(lVar10 + 4);
    iVar1 = *(int *)(lVar11 + 0x14 + (ulong)uVar13);
    lVar5 = _CFDataGetLength(param_2);
    if (lVar5 < (long)(ulong)(iVar1 + uVar13)) {
      _AMAuthInstallMonetMeasureMav20ElfMBN_cold_9();
      goto LAB_001acff7;
    }
    lVar11 = lVar11 + (ulong)uVar13;
    iVar1 = *(int *)(lVar11 + 0x10);
    iVar2 = *(int *)(lVar10 + 4);
    lVar5 = _CFDataGetLength(param_2);
    if (lVar5 < (long)(ulong)(uint)(iVar1 + iVar2)) {
      _AMAuthInstallMonetMeasureMav20ElfMBN_cold_8();
      goto LAB_001acff7;
    }
    iVar1 = *(int *)(lVar11 + 0x24);
    iVar2 = *(int *)(lVar10 + 4);
    lVar5 = _CFDataGetLength(param_2);
    if (lVar5 < (long)(ulong)(uint)(iVar1 + iVar2)) {
      _AMAuthInstallMonetMeasureMav20ElfMBN_cold_7();
      goto LAB_001acff7;
    }
    iVar1 = *(int *)(lVar11 + 0x1c);
    iVar2 = *(int *)(lVar10 + 4);
    lVar5 = _CFDataGetLength(param_2);
    if (lVar5 < (long)(ulong)(uint)(iVar1 + iVar2)) {
      _AMAuthInstallMonetMeasureMav20ElfMBN_cold_6();
      goto LAB_001acff7;
    }
    if ((ulong)(uint)(*(int *)(lVar11 + 0x1c) + *(int *)(lVar11 + 0x14) + *(int *)(lVar11 + 0x24)) +
        0xa8 != (ulong)*(uint *)(lVar10 + 0x10)) {
      _AMAuthInstallMonetMeasureMav20ElfMBN_cold_2();
      goto LAB_001acff7;
    }
    uVar6 = _CFGetAllocator(param_1);
    lVar5 = _CFDataCreateMutable(uVar6,0);
    if (lVar5 != 0) {
      _CFDataSetLength(lVar5,0x30);
      _CFDataGetBytePtr(param_2);
      _CFDataGetMutableBytePtr(lVar5);
      uVar13 = *(uint *)(lVar10 + 4);
      lVar7 = _CFDataGetBytePtr(param_2);
      uVar6 = _CFGetAllocator(param_1);
      uVar8 = _CFDataCreate(uVar6,lVar11,0xa8);
      _CFDictionarySetValue(param_3,param_6,uVar8);
      uVar6 = _CFGetAllocator(param_1);
      lVar9 = _CFDataCreateMutable(uVar6,0);
      if (lVar9 == 0) {
        _AMAuthInstallMonetMeasureMav20ElfMBN_cold_4();
        uVar6 = 2;
        lVar9 = 0;
        lVar10 = 0;
      }
      else {
        _CFDataAppendBytes(lVar9,(ulong)uVar13 + lVar7 + 0xa8,*(undefined4 *)(lVar11 + 0x14));
        _CFDataSetLength(lVar9,*(undefined4 *)(lVar11 + 0x14));
        _CFDictionarySetValue(param_3,param_4,lVar9);
        iVar1 = *(int *)(lVar10 + 4);
        local_7c = iVar1;
        local_80 = _CFDataGetLength(param_2);
        local_80 = local_80 - iVar1;
        __SHA384Partial(piVar4,iVar1,local_78);
        uVar6 = _CFGetAllocator(param_1);
        lVar10 = _CFDataCreate(uVar6,&local_80,0x48);
        if (lVar10 == 0) {
          _AMAuthInstallMonetMeasureMav20ElfMBN_cold_3();
          uVar6 = 2;
          lVar10 = 0;
        }
        else {
          _CFDictionarySetValue(param_3,param_5,lVar10);
          uVar6 = 0;
        }
      }
      goto LAB_001acfad;
    }
    _AMAuthInstallMonetMeasureMav20ElfMBN_cold_5();
    uVar6 = 2;
  }
  uVar8 = 0;
  lVar9 = 0;
  lVar10 = 0;
  lVar5 = 0;
LAB_001acfad:
  _SafeRelease(lVar9);
  _SafeRelease(lVar5);
  _SafeRelease(lVar10);
  _SafeRelease(uVar8);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

