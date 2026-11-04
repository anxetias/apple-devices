// rea decompile_all
// name: _AMSupportDebugWriteObject
// address: 0x62fa
// body: available
// range: 0x62fa-0x64fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64f6 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMSupportDebugWriteObject
              (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar3 = 0;
  local_40 = 0;
  local_48 = 0;
  iVar1 = 1;
  if (param_2 == 0) goto LAB_000064bb;
  lVar3 = _CFGetTypeID(param_3);
  lVar4 = _CFDataGetTypeID();
  if (lVar3 == lVar4) {
    lVar3 = _CFRetain(param_3);
    if (lVar3 == 0) {
      iVar1 = 0;
      lVar3 = 0;
      goto LAB_000064bb;
    }
    pcVar6 = "";
LAB_000063c4:
    lVar4 = _CFStringCreateWithFormat(param_1,0,&cf____s,param_4,pcVar6);
    if (lVar4 == 0) {
      iVar1 = 2;
    }
    else {
      iVar1 = _AMSupportCopyURLWithAppendedComponent(param_1,param_2,lVar4,0,&local_48);
      _CFRelease(lVar4);
      if (iVar1 == 0) {
        iVar2 = _AMSupportWriteDataToFileURL(param_1,lVar3,local_48,0);
        _AMSupportLogInternal(8,"AMSupportDebugWriteObject","debug object written: %@",local_48);
        iVar1 = 0;
        if (iVar2 != 0) {
          iVar1 = iVar2;
        }
      }
    }
  }
  else {
    lVar3 = _CFGetTypeID(param_3);
    lVar4 = _CFDictionaryGetTypeID();
    if (lVar3 == lVar4) {
LAB_0000639f:
      lVar3 = _CFPropertyListCreateData(param_1,param_3,100,0,&local_40);
      if (lVar3 != 0) {
        pcVar6 = ".plist";
        goto LAB_000063c4;
      }
      pcVar6 = "failed to create debugData: %@";
      iVar1 = 3;
      uVar5 = 3;
      param_3 = local_40;
    }
    else {
      lVar3 = _CFGetTypeID(param_3);
      lVar4 = _CFArrayGetTypeID();
      if (lVar3 == lVar4) goto LAB_0000639f;
      _AMSupportLogInternal(3,"AMSupportDebugWriteObject","can\'t prepare data for output to file");
      pcVar6 = "%@";
      uVar5 = 8;
    }
    lVar3 = 0;
    _AMSupportLogInternal(uVar5,"AMSupportDebugWriteObject",pcVar6,param_3);
  }
LAB_000064bb:
  _AMSupportSafeRelease(lVar3);
  _AMSupportSafeRelease(local_48);
  _AMSupportSafeRelease(local_40);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar1;
}

