// rea decompile_all
// name: _AMAuthInstallMonetMeasureEBootLoader
// address: 0x291f6a
// body: available
// range: 0x291f6a-0x2921e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2921dd to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
_AMAuthInstallMonetMeasureEBootLoader
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar10;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  uint local_50;
  undefined1 local_4c [20];
  long local_38;
  
  uVar10 = (undefined4)((ulong)in_stack_ffffffffffffff68 >> 0x20);
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar4 = _CFDataGetLength(param_2);
  local_58 = 10;
  if (0x27 < uVar4) {
    lVar5 = _CFDataGetBytePtr(param_2);
    iVar3 = *(int *)(*(long *)(param_1 + 0x30) + 4);
    if ((((iVar3 == 0xe50e1) || (iVar3 == 0x1440e1)) || (iVar3 == 0x1720e1)) ||
       (((iVar3 == 0x19f0e1 || (iVar3 == 0x2af0e1)) || (iVar3 == 0x1fe0e1)))) {
      if (lVar5 != 0) {
        uVar2 = _CFDataGetLength(param_2);
        if (*(uint *)(lVar5 + 0x10) <= uVar2) {
LAB_00292020:
          iVar3 = _CFDataGetLength(param_2);
          uVar2 = iVar3 - *(int *)(lVar5 + 0x10);
          iVar3 = *(int *)(lVar5 + 0x14);
          local_60 = *(undefined4 *)(lVar5 + 4 + (ulong)uVar2);
          iVar1 = *(int *)(lVar5 + 8 + (ulong)uVar2);
          local_5c = local_60;
          uVar6 = _CFDataGetLength(param_2);
          _AMAuthInstallLog(7,"AMAuthInstallMonetMeasureEBootLoader",
                            "%@: fileSize=0x%x, srcOffset=0x%x, codeSize=0x%x",param_5,uVar6,uVar2,
                            CONCAT44(uVar10,iVar3));
          _AMAuthInstallLog(7,"AMAuthInstallMonetMeasureEBootLoader",
                            "%@: version=0x%x, personalizationOffset=0x%x",param_4,local_5c,iVar1);
          local_54 = iVar3 - iVar1;
          uVar2 = uVar2 + iVar1;
          pcVar8 = "NOT 64-BYTE MULTIPLE";
          if ((uVar2 & 0x3f) == 0) {
            pcVar8 = "ok";
          }
          local_50 = uVar2;
          _AMAuthInstallLog(7,"AMAuthInstallMonetMeasureEBootLoader",
                            "%@: reservationLength=0x%x, codeBytesHashed=0x%x (%s)",param_5,local_54
                            ,uVar2,pcVar8);
          if ((uVar2 & 0x3f) != 0) {
            lVar5 = 0;
            lVar9 = 0;
            goto LAB_0029218a;
          }
          __SHA1Partial(lVar5,uVar2,local_4c);
          uVar6 = _CFGetAllocator(param_1);
          lVar5 = _CFDataCreate(uVar6,&local_54,0x1c);
          local_58 = 2;
          if (lVar5 != 0) {
            uVar6 = _CFGetAllocator(param_1);
            lVar7 = _CFNumberCreate(uVar6,3,&local_60);
            lVar9 = 0;
            if (lVar7 != 0) {
              _CFDictionarySetValue(param_3,param_4,lVar7);
              _CFDictionarySetValue(param_3,param_5,lVar5);
              local_58 = 0;
              lVar9 = lVar7;
            }
            goto LAB_0029218a;
          }
        }
      }
    }
    else if (lVar5 != 0) {
      uVar2 = _CFDataGetLength(param_2);
      if (*(uint *)(lVar5 + 0x10) <= uVar2) goto LAB_00292020;
    }
  }
  lVar9 = 0;
  lVar5 = 0;
LAB_0029218a:
  _SafeRelease(lVar9);
  _SafeRelease(lVar5);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return local_58;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

