// rea decompile_all
// name: _AMSupportCopyHexStringFromData
// address: 0x3676
// body: available
// range: 0x3676-0x37ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x37a7 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMSupportCopyHexStringFromData(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  void *local_38;
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  local_38 = (void *)0x0;
  if (param_2 == 0) {
    _AMSupportCopyHexStringFromData_cold_6();
    uVar4 = 0;
    goto LAB_0000373b;
  }
  local_30 = 0;
  lVar2 = _CFDataGetTypeID();
  lVar3 = _CFGetTypeID(param_2);
  if (lVar2 == lVar3) {
    lVar2 = _CFDataGetBytePtr(param_2);
    if (lVar2 == 0) {
      _AMSupportCopyHexStringFromData_cold_5();
      goto LAB_000037a3;
    }
    lVar3 = _CFDataGetLength(param_2);
    if (lVar3 == 0) {
      _AMSupportCopyHexStringFromData_cold_4();
      goto LAB_000037a3;
    }
    iVar1 = _AMSupportCommonCopyHexStringFromData(lVar2,lVar3,&local_38,&local_30);
    if (iVar1 == 0) {
      if (local_38 == (void *)0x0) {
        _AMSupportCopyHexStringFromData_cold_3();
      }
      else {
        if (local_30 != 0) {
          uVar4 = _CFStringCreateWithCString(param_1,local_38,0x8000100);
          goto LAB_0000372d;
        }
        _AMSupportCopyHexStringFromData_cold_2();
      }
      goto LAB_000037a3;
    }
    uVar4 = 0;
    _AMSupportLogInternal
              (3,"AMSupportCopyHexStringFromData","AMSupportCommonCopyHexStringFromData failed %d",
               iVar1);
  }
  else {
    _AMSupportCopyHexStringFromData_cold_1();
LAB_000037a3:
    uVar4 = 0;
  }
LAB_0000372d:
  if (local_38 != (void *)0x0) {
    _free(local_38);
  }
LAB_0000373b:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

