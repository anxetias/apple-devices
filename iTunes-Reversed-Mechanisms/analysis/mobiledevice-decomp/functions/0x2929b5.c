// rea decompile_all
// name: _AMAuthInstallMonetSetVersionAndPartialDigestForSBL
// address: 0x2929b5
// body: available
// range: 0x2929b5-0x292cad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x292ca9 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallMonetSetVersionAndPartialDigestForSBL
          (long param_1,long param_2,long param_3,long param_4,long param_5,uint param_6,int param_7
          ,long param_8,long param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  long lVar10;
  int iVar11;
  undefined8 uStackY_100;
  undefined4 local_d4;
  long local_d0;
  int local_c4 [2];
  undefined1 local_bc [64];
  int local_7c;
  uint local_78;
  int local_54;
  uint local_50;
  undefined1 local_4c [20];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 4);
  iVar11 = 0x80;
  if (((((iVar1 != 0x7f0e1) && (iVar1 != 0xe50e1)) && (iVar1 != 0x1440e1)) &&
      ((iVar1 != 0x1720e1 && (iVar1 != 0x19f0e1)))) && ((iVar1 != 0x1fe0e1 && (iVar1 != 0x2af0e1))))
  {
    iVar11 = 0x40;
  }
  uVar3 = 1;
  if (((param_2 != 0) && (param_3 != 0)) && ((param_4 != 0 && ((param_5 != 0 && (param_8 != 0))))))
  {
    lVar10 = 0;
    lVar6 = 0;
    if (param_9 == 0) goto LAB_00292c49;
    uVar2 = *(undefined4 *)(param_3 + 4 + (ulong)param_6);
    iVar1 = *(int *)(param_3 + 8 + (ulong)param_6);
    local_d4 = uVar2;
    local_d0 = param_5;
    uVar3 = _CFDataGetLength(param_4);
    _AMAuthInstallLog(7,"AMAuthInstallMonetSetVersionAndPartialDigestForSBL",
                      "fileSize=0x%x, srcOffset=0x%x, codeSize=0x%x",uVar3,param_6,param_7);
    _AMAuthInstallLog(7,"AMAuthInstallMonetSetVersionAndPartialDigestForSBL",
                      "version=0x%x, personalizationOffset=0x%x",uVar2,iVar1);
    param_7 = param_7 - iVar1;
    uVar7 = iVar1 + 0x50;
    pcVar9 = "NOT REQUIRED BYTE MULTIPLE";
    if ((uVar7 & iVar11 - 1U) == 0) {
      pcVar9 = "ok";
    }
    local_54 = param_7;
    local_50 = uVar7;
    _AMAuthInstallLog(7,"AMAuthInstallMonetSetVersionAndPartialDigestForSBL",
                      "reservationLength=0x%x, codeBytesHashed=0x%x (%s) byte_multiple=%d",param_7,
                      uVar7,pcVar9,iVar11);
    if ((uVar7 & iVar11 - 1U) != 0) {
      uVar3 = 10;
      lVar10 = 0;
      lVar6 = 0;
      goto LAB_00292c49;
    }
    iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 4);
    if (iVar1 == 0x3b0e1) {
LAB_00292b8d:
      local_7c = param_7;
      local_78 = uVar7;
      __SHA256Partial(local_d0,uVar7);
      uVar3 = _CFGetAllocator(param_1);
      piVar8 = &local_7c;
      uStackY_100 = 0x28;
    }
    else if ((((iVar1 == 0x7f0e1) || (iVar1 == 0xe50e1)) || (iVar1 == 0x1440e1)) ||
            (((iVar1 == 0x1720e1 || (iVar1 == 0x19f0e1)) ||
             ((iVar1 == 0x1fe0e1 || (iVar1 == 0x2af0e1)))))) {
      local_7c = param_7;
      local_78 = uVar7;
      __SHA384Partial(local_d0,0,local_bc);
      uVar3 = _CFGetAllocator(param_1);
      piVar8 = local_c4;
      uStackY_100 = 0x48;
    }
    else {
      if (((iVar1 == 0x7f50e1) || (iVar1 == 0x9540e1)) || (iVar1 == 0x9210e1)) goto LAB_00292b8d;
      __SHA1Partial(local_d0,uVar7,local_4c);
      uVar3 = _CFGetAllocator(param_1);
      piVar8 = &local_54;
      uStackY_100 = 0x1c;
    }
    lVar10 = _CFDataCreate(uVar3,piVar8,uStackY_100);
    uVar3 = 2;
    if (lVar10 != 0) {
      uVar4 = _CFGetAllocator(param_1);
      lVar5 = _CFNumberCreate(uVar4,3,&local_d4);
      lVar6 = 0;
      if (lVar5 != 0) {
        _CFDictionarySetValue(param_2,param_8,lVar5);
        _CFDictionarySetValue(param_2,param_9,lVar10);
        uVar3 = 0;
        lVar6 = lVar5;
      }
      goto LAB_00292c49;
    }
  }
  lVar6 = 0;
  lVar10 = 0;
LAB_00292c49:
  _SafeRelease(lVar6);
  _SafeRelease(lVar10);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

