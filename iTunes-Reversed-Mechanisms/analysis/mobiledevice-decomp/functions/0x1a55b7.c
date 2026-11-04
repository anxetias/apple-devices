// rea decompile_all
// name: __AMAuthInstallCopyPsiMeasurementAndVersion
// address: 0x1a55b7
// body: available
// range: 0x1a55b7-0x1a5714 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1a5710 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__AMAuthInstallCopyPsiMeasurementAndVersion
          (undefined8 param_1,long param_2,ulong param_3,long *param_4,long *param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  int local_54;
  uint local_50;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_4 == (long *)0x0) {
    __AMAuthInstallCopyPsiMeasurementAndVersion_cold_2();
  }
  else if (param_5 != (long *)0x0) {
    if (((param_3 < 0x50) || (*(int *)(param_2 + 4) != 0x5548696c)) ||
       (iVar1 = *(int *)(param_2 + 0xc), iVar1 + 1U < 2)) {
      pcVar5 = "PSI Image does not contain recognizable PSI header";
LAB_001a5616:
      _AMAuthInstallLog(3,"_AMAuthInstallCopyPsiMeasurementAndVersion",pcVar5);
      uVar6 = 10;
    }
    else if ((*(byte *)(param_2 + 10) & 1) == 0) {
      _AMAuthInstallLog(3,"_AMAuthInstallCopyPsiMeasurementAndVersion","missing SN indicator");
      uVar6 = 1;
    }
    else {
      uVar2 = *(uint *)(param_2 + 0x14);
      if ((uVar2 & 0x3f) != 0) {
        pcVar5 = "GPuK is not properly aligned for partial digest";
        goto LAB_001a5616;
      }
      local_54 = *(int *)(param_2 + 0x28) - uVar2;
      local_50 = uVar2;
      __SHA1Partial(param_2,uVar2);
      lVar3 = _CFStringCreateWithFormat(param_1,0,&cf_0x_08x,iVar1);
      uVar6 = 2;
      if (lVar3 != 0) {
        lVar4 = _CFDataCreate(param_1,&local_54,0x1c);
        if (lVar4 == 0) {
          _CFRelease(lVar3);
        }
        else {
          *param_5 = lVar3;
          *param_4 = lVar4;
          uVar6 = 0;
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
      return uVar6;
    }
    goto LAB_001a5710;
  }
  __AMAuthInstallCopyPsiMeasurementAndVersion_cold_1();
LAB_001a5710:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

