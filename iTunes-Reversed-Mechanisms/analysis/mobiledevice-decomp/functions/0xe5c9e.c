// rea decompile_all
// name: _get_directory_size
// address: 0xe5c9e
// body: available
// range: 0xe5c9e-0xe5ea7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xe5ea3 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _get_directory_size(undefined8 param_1,long *param_2,byte param_3)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  long local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  uint local_44c;
  char local_448 [1040];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar3 = _opendir_INODE64();
  if (param_3 < 0x15) {
    ___bzero(local_448,0x401);
    local_468 = 0;
    uStack_460 = 0;
    local_478 = 0;
    uStack_470 = 0;
    local_488 = 0;
    uStack_480 = 0;
    local_498 = 0;
    uStack_490 = 0;
    local_4a8 = 0;
    uStack_4a0 = 0;
    local_4b8 = 0;
    uStack_4b0 = 0;
    local_4c8 = 0;
    uStack_4c0 = 0;
    local_4d8 = 0;
    uStack_4d0 = 0;
    local_4e8 = 0;
    uStack_4e0 = 0;
    if (lVar3 == 0) {
      _AMRLog(4,&cf_Couldn_topendirectory__s,param_1);
    }
    else {
      lVar4 = _readdir_INODE64(lVar3);
      if (lVar4 != 0) {
        local_44c = (uint)(byte)(param_3 + 1);
        do {
          uVar5 = *(byte *)(lVar4 + 0x15) - 0x2e;
          if (uVar5 == 0) {
            if (*(byte *)(lVar4 + 0x16) != 0) {
              uVar5 = *(byte *)(lVar4 + 0x16) - 0x2e;
              if (uVar5 == 0) {
                uVar5 = (uint)*(byte *)(lVar4 + 0x17);
              }
              goto LAB_000e5d8c;
            }
          }
          else {
LAB_000e5d8c:
            if (uVar5 != 0) {
              _snprintf(local_448,0x400,"%s%c%s",param_1,0x2f,lVar4 + 0x15);
              iVar2 = _lstat_INODE64(local_448,&local_4e8);
              if (iVar2 == -1) {
                _AMRLog(4,&cf_Couldnotstat_s,local_448);
                param_2 = (long *)0x0;
              }
              else {
                uVar1 = local_4e8._4_2_ & 0xf000;
                if (uVar1 == 0x4000) {
                  lVar4 = _get_directory_size(local_448,param_2,local_44c);
                  *param_2 = lVar4;
                  uVar1 = local_4e8._4_2_ & 0xf000;
                }
                if ((uVar1 | 0x2000) == 0xa000) {
                  *param_2 = *param_2 + local_488;
                }
              }
            }
          }
          lVar4 = _readdir_INODE64(lVar3);
        } while (lVar4 != 0);
      }
      _closedir(lVar3);
    }
    lVar3 = *param_2;
  }
  else {
    lVar3 = 0;
    _AMRLog(4,&cf_GottoMaxfoldersizerecursiondepth__s,param_1);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

