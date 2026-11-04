// rea decompile_all
// name: __DLEnumerateContentsOfDirectoryOnComputer
// address: 0x45a7
// body: available
// range: 0x45a7-0x4752 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x474e to 0xee55 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __DLEnumerateContentsOfDirectoryOnComputer
              (undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
              undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long local_460;
  long local_458;
  undefined1 local_450 [21];
  short local_43b;
  char local_439;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_00015070;
  iVar1 = __DLResolveAndValidatePath();
  if (iVar1 == 0) {
    lVar2 = _opendir_INODE64(0);
    if (lVar2 == 0) {
      iVar1 = _DLStatusFromOSStatus(0xffffffff,param_5);
    }
    else {
      local_460 = 0;
      local_458 = lVar2;
      iVar1 = _readdir_r_INODE64(lVar2,local_450);
      if (iVar1 == 0) {
        do {
          iVar1 = 0;
          if (local_460 == 0) goto LAB_00004642;
          if ((local_43b != 0x2e) && (local_439 != '\0' || local_43b != 0x2e2e)) {
            lVar2 = _CFStringCreateWithFileSystemRepresentation(0,&local_43b);
            iVar1 = (*param_3)(param_2,lVar2,param_4,param_5);
            if (lVar2 != 0) {
              _CFRelease(lVar2);
            }
            if (iVar1 != 0) goto LAB_00004642;
          }
          local_460 = 0;
          iVar1 = _readdir_r_INODE64(local_458,local_450,&local_460);
        } while (iVar1 == 0);
      }
      iVar1 = _DLStatusFromOSStatus(0xffffffff,param_5);
LAB_00004642:
      _closedir(local_458);
    }
  }
  _free((void *)0x0);
  if (*(long *)PTR____stack_chk_guard_00015070 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar1;
}

