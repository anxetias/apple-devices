// rea decompile_all
// name: _count_directory
// address: 0x152fb6
// body: available
// range: 0x152fb6-0x1531a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1531a4 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _count_directory(undefined8 param_1,long *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined1 local_4d8 [4];
  ushort local_4d4;
  long local_478;
  char local_448 [1040];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar4 = _opendir_INODE64();
  if (lVar4 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar3 = 0;
    __os_log_internal(0,_md_log_log,1,"Couldn\'t open directory: %s",param_1);
  }
  else {
    uVar3 = 0;
LAB_00152ff9:
    lVar5 = _readdir_INODE64(lVar4);
    if (lVar5 != 0) {
      uVar6 = *(byte *)(lVar5 + 0x15) - 0x2e;
      if (uVar6 == 0) goto LAB_001530c0;
      goto LAB_00153017;
    }
    *param_2 = *param_2 + 1;
    _closedir(lVar4);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_001530c0:
  if (*(byte *)(lVar5 + 0x16) != 0) {
    uVar6 = *(byte *)(lVar5 + 0x16) - 0x2e;
    if (uVar6 == 0) {
      uVar6 = (uint)*(byte *)(lVar5 + 0x17);
    }
LAB_00153017:
    if (uVar6 != 0) {
      _snprintf(local_448,0x400,"%s%c%s",param_1,0x2f,lVar5 + 0x15);
      iVar2 = _lstat_INODE64(local_448,local_4d8);
      if (iVar2 == -1) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,1,"Could not stat %s",local_448);
        uVar3 = 0xe800000a;
      }
      else {
        uVar1 = local_4d4 & 0xf000;
        if (uVar1 == 0x4000) {
          uVar3 = _count_directory(local_448,param_2);
          uVar1 = local_4d4 & 0xf000;
        }
        if ((uVar1 | 0x2000) == 0xa000) {
          *param_2 = *param_2 + 1;
          param_2[1] = local_478 + param_2[1];
        }
      }
    }
  }
  goto LAB_00152ff9;
}

