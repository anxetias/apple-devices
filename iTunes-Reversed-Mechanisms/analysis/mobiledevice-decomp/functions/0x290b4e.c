// rea decompile_all
// name: _AMAuthInstallFusingCreateProfileName
// address: 0x290b4e
// body: available
// range: 0x290b4e-0x290e05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x290e01 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallFusingCreateProfileName(long param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_48 = 0x462290;
  uStack_44 = 0;
  uStack_40 = 0x4622b0;
  uStack_3c = 0;
  if (param_1 == 0) {
LAB_00290dec:
    lVar9 = 0;
    lVar4 = 0;
  }
  else {
    if (*(long *)(param_1 + 0xa8) == 0) {
      pcVar8 = "no fusing profile specified";
LAB_00290ddf:
      _AMAuthInstallLog(3,"AMAuthInstallFusingCreateProfileName",pcVar8);
      goto LAB_00290dec;
    }
    if (*(long *)(param_1 + 0x10) == 0) {
      pcVar8 = "ap parameters are not set";
      goto LAB_00290ddf;
    }
    iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 4);
    if ((((((iVar1 != 0x3b0e1) && (iVar1 != 0x7f0e1)) && (iVar1 != 0xe50e1)) &&
         ((iVar1 != 0x1440e1 && (iVar1 != 0x1720e1)))) &&
        ((iVar1 != 0x19f0e1 && ((iVar1 != 0x1fe0e1 && (iVar1 != 0x2af0e1)))))) &&
       ((iVar1 != 0x7f50e1 && ((iVar1 != 0x9540e1 && (iVar1 != 0x9210e1)))))) {
LAB_00290cfc:
      lVar9 = 0;
      lVar4 = 0;
LAB_00290cff:
      uVar3 = _CFRetain(*(undefined8 *)(param_1 + 0xa8));
      lVar7 = 0;
      lVar5 = lVar4;
      goto LAB_00290d14;
    }
    if (*(long *)(*(long *)(param_1 + 0x10) + 0x68) == 0) {
      _AMAuthInstallLog(4,"AMAuthInstallFusingCreateProfileName",
                        "hardware model is not set, fusing profile name will not be updated.");
      goto LAB_00290cfc;
    }
    uVar3 = _CFGetAllocator(param_1);
    lVar7 = 0;
    lVar4 = _CFStringCreateMutableCopy(uVar3,0,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68));
    lVar9 = 0;
    uVar3 = 0;
    lVar5 = 0;
    if (lVar4 == 0) goto LAB_00290d14;
    _CFStringLowercase(lVar4,0);
    uVar3 = _CFGetAllocator(param_1);
    lVar9 = _CFArrayCreate(uVar3,&local_48,2,PTR__kCFTypeArrayCallBacks_004411a8);
    if (lVar9 != 0) {
      lVar5 = _CFArrayGetCount(lVar9);
      if (0 < lVar5) {
        lVar5 = 0;
        local_50 = param_1;
        do {
          uVar3 = _CFArrayGetValueAtIndex(lVar9,lVar5);
          uVar6 = _CFStringGetLength(lVar4);
          cVar2 = _CFStringFindWithOptions(lVar4,uVar3,0,uVar6,4,&local_60);
          if (cVar2 != '\0') {
            _CFStringDelete(lVar4,local_60,local_58);
            lVar5 = local_50;
            uVar3 = _CFGetAllocator(local_50);
            lVar7 = _CFStringCreateMutableCopy(uVar3,0,*(undefined8 *)(lVar5 + 0xa8));
            if (lVar7 == 0) goto LAB_00290df9;
            _CFStringAppend(lVar7,&cf__);
            _CFStringAppend(lVar7,lVar4);
            uVar3 = _CFRetain(lVar7);
            lVar5 = lVar4;
            goto LAB_00290d14;
          }
          lVar5 = lVar5 + 1;
          lVar7 = _CFArrayGetCount(lVar9);
          param_1 = local_50;
        } while (lVar5 < lVar7);
      }
      goto LAB_00290cff;
    }
    lVar9 = 0;
  }
LAB_00290df9:
  lVar7 = 0;
  uVar3 = 0;
  lVar5 = lVar4;
LAB_00290d14:
  _SafeRelease(lVar5);
  _SafeRelease(lVar7);
  _SafeRelease(lVar9);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

