// rea decompile_all
// name: __AMSupportPlatformRemoveDirectoryRecursion
// address: 0x6d0e
// body: available
// range: 0x6d0e-0x6ec2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x6ebe to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __AMSupportPlatformRemoveDirectoryRecursion(undefined8 param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  ulong local_4c8 [18];
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar3 = _opendir_INODE64();
  if (lVar3 == 0) {
    piVar5 = ___error();
    *param_2 = *piVar5;
  }
  else {
    lVar4 = _readdir_INODE64(lVar3);
    if (lVar4 != 0) {
      do {
        uVar1 = *(byte *)(lVar4 + 0x15) - 0x2e;
        if (uVar1 == 0) {
          if (*(byte *)(lVar4 + 0x16) != 0) {
            uVar1 = *(byte *)(lVar4 + 0x16) - 0x2e;
            if (uVar1 == 0) {
              uVar1 = (uint)*(byte *)(lVar4 + 0x17);
            }
            goto LAB_00006d7e;
          }
        }
        else {
LAB_00006d7e:
          if (uVar1 != 0) {
            ___bzero(local_438,0x400);
            _snprintf(local_438,0x400,"%s%c%s",param_1,0x2f,lVar4 + 0x15);
            local_4c8[0x10] = 0;
            local_4c8[0x11] = 0;
            local_4c8[0xe] = 0;
            local_4c8[0xf] = 0;
            local_4c8[0xc] = 0;
            local_4c8[0xd] = 0;
            local_4c8[10] = 0;
            local_4c8[0xb] = 0;
            local_4c8[8] = 0;
            local_4c8[9] = 0;
            local_4c8[6] = 0;
            local_4c8[7] = 0;
            local_4c8[4] = 0;
            local_4c8[5] = 0;
            local_4c8[2] = 0;
            local_4c8[3] = 0;
            local_4c8[0] = 0;
            local_4c8[1] = 0;
            iVar2 = _lstat_INODE64(local_438,local_4c8);
            if (iVar2 == 0) {
              if ((local_4c8[0] & 0x400000000000) == 0) {
                iVar2 = _unlink(local_438);
              }
              else {
                iVar2 = __AMSupportPlatformRemoveDirectoryRecursion(local_438,param_2);
                if (iVar2 != 0) goto LAB_00006e93;
                iVar2 = _rmdir(local_438);
              }
              if (iVar2 != 0) goto LAB_00006e78;
            }
          }
        }
        lVar4 = _readdir_INODE64(lVar3);
      } while (lVar4 != 0);
    }
    iVar2 = _closedir(lVar3);
    if (iVar2 == 0) {
      uVar6 = 0;
      goto LAB_00006e9c;
    }
LAB_00006e78:
    piVar5 = ___error();
    *param_2 = *piVar5;
  }
LAB_00006e93:
  uVar6 = 4;
LAB_00006e9c:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

