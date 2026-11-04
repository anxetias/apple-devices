// rea decompile_all
// name: __AMAuthInstallPlatformRemoveDirectoryRecursion
// address: 0x1b1b19
// body: available
// range: 0x1b1b19-0x1b1c69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b1c65 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __AMAuthInstallPlatformRemoveDirectoryRecursion(undefined8 param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 local_4d0 [5];
  byte local_4cb;
  int *local_440;
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar2 = _opendir_INODE64();
  if (lVar2 == 0) {
    piVar4 = ___error();
    *param_2 = *piVar4;
  }
  else {
    local_440 = param_2;
    lVar3 = _readdir_INODE64(lVar2);
    if (lVar3 != 0) {
      do {
        uVar6 = *(byte *)(lVar3 + 0x15) - 0x2e;
        if (uVar6 == 0) {
          if (*(byte *)(lVar3 + 0x16) != 0) {
            uVar6 = *(byte *)(lVar3 + 0x16) - 0x2e;
            if (uVar6 == 0) {
              uVar6 = (uint)*(byte *)(lVar3 + 0x17);
            }
            goto LAB_001b1b88;
          }
        }
        else {
LAB_001b1b88:
          if (uVar6 != 0) {
            _snprintf(local_438,0x400,"%s%c%s",param_1,0x2f,lVar3 + 0x15);
            iVar1 = _lstat_INODE64(local_438,local_4d0);
            if (iVar1 == 0) {
              if ((local_4cb & 0x40) == 0) {
                iVar1 = _unlink(local_438);
              }
              else {
                iVar1 = __AMAuthInstallPlatformRemoveDirectoryRecursion(local_438,local_440);
                if (iVar1 != 0) goto LAB_001b1c3a;
                iVar1 = _rmdir(local_438);
              }
              if (iVar1 != 0) goto LAB_001b1c1f;
            }
          }
        }
        lVar3 = _readdir_INODE64(lVar2);
      } while (lVar3 != 0);
    }
    iVar1 = _closedir(lVar2);
    if (iVar1 == 0) {
      uVar5 = 0;
      goto LAB_001b1c43;
    }
LAB_001b1c1f:
    piVar4 = ___error();
    *local_440 = *piVar4;
  }
LAB_001b1c3a:
  uVar5 = 4;
LAB_001b1c43:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

