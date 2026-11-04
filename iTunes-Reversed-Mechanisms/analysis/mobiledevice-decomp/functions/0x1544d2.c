// rea decompile_all
// name: _copy_directory
// address: 0x1544d2
// body: available
// range: 0x1544d2-0x15488b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x154887 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _copy_directory(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 local_920 [4];
  ushort local_91c;
  undefined8 local_8f0;
  undefined8 local_890;
  undefined8 local_888;
  undefined8 local_880;
  undefined8 local_878;
  long local_870;
  undefined8 local_868;
  uint local_85c;
  char local_858 [1040];
  char local_448 [1040];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_878 = param_5;
  _fire_transfer_callback(param_2,param_3,param_1,param_5);
  local_890 = param_6;
  uVar2 = _AFCDirectoryCreate(param_4,param_6);
  if (uVar2 == 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
    local_888 = param_3;
    local_880 = param_2;
    local_868 = param_4;
    lVar6 = _opendir_INODE64(local_878);
    if (lVar6 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,1,"Couldn\'t open directory");
      uVar2 = 0xe8000001;
    }
    else {
      uVar5 = 0;
      local_870 = param_1;
      uVar2 = 0;
LAB_001545a0:
      lVar7 = _readdir_INODE64(lVar6);
      if ((uVar2 == 0) && (lVar7 != 0)) {
        uVar3 = *(byte *)(lVar7 + 0x15) - 0x2e;
        if (uVar3 == 0) goto LAB_001546e4;
        goto LAB_001545ca;
      }
      _closedir(lVar6);
    }
  }
  else {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    if (uVar2 < 0x19) {
      uVar8 = *(undefined8 *)(&_afcErrors + (ulong)uVar2 * 0x10);
    }
    else {
      uVar8 = 0;
    }
    __os_log_internal(0,_md_log_log,1,"Couldn\'t create %s on device: %s",local_858,uVar8);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
LAB_001546e4:
  uVar2 = 0;
  if (*(byte *)(lVar7 + 0x16) != 0) {
    uVar3 = *(byte *)(lVar7 + 0x16) - 0x2e;
    if (uVar3 == 0) {
      uVar3 = (uint)*(byte *)(lVar7 + 0x17);
    }
LAB_001545ca:
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = 0;
      local_85c = uVar5;
      _snprintf(local_448,0x400,"%s%c%s",local_878,0x2f,lVar7 + 0x15);
      _snprintf(local_858,0x400,"%s%c%s",local_890,0x2f,lVar7 + 0x15);
      iVar4 = _lstat_INODE64(local_448,local_920);
      if (iVar4 == -1) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,1,"Could not stat %s",local_448);
        _closedir(lVar6);
        uVar2 = 0xe8000001;
      }
      uVar1 = local_91c & 0xf000;
      if (uVar1 == 0xa000) {
        uVar5 = _copy_symlink(local_868,local_448,local_858);
      }
      else if (uVar1 == 0x8000) {
        uVar5 = _copy_touch_file(local_870,local_880,local_888,local_868,local_448,local_858,
                                 local_8f0,0);
      }
      else if (uVar1 == 0x4000) {
        uVar5 = _copy_directory(local_870,local_880,local_888,local_868,local_448,local_858);
      }
      else {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar5 = local_85c;
        __os_log_internal(0,_md_log_log,1,"Don\'t know how to copy this type of file: %s",local_448)
        ;
      }
      if (uVar5 != 0) {
        uVar2 = uVar5;
      }
    }
  }
  goto LAB_001545a0;
}

