// rea decompile_all
// name: _AMDeviceTransferApplication
// address: 0x153d71
// body: available
// range: 0x153d71-0x1544d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x15449d to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMDeviceTransferApplication
          (int param_1,cfstringStruct *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  char *pcVar9;
  cfstringStruct *pcVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 local_9e0 [48];
  long local_9b0;
  undefined1 local_950 [4];
  ushort local_94c;
  undefined8 local_920;
  undefined1 local_8c0 [32];
  cfstringStruct *local_8a0;
  long local_898;
  long local_890;
  undefined8 local_888;
  undefined8 local_880;
  long local_878;
  long local_870;
  undefined4 local_864;
  long local_860;
  undefined1 local_858 [1040];
  undefined1 local_448 [1040];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  __os_log_internal(0,_md_log_log,1,"ENTRY");
  local_8a0 = param_2;
  if (param_1 == -1 || param_2 == (cfstringStruct *)0x0) {
    uVar12 = 0xe8000007;
LAB_00153fc6:
    lVar6 = 0;
  }
  else {
    cVar3 = _CFStringGetCString(param_2,local_858,0x401,0x8000100);
    if (cVar3 == '\0') {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar9 = "Could not convert package string \'%@\' to path.";
LAB_00153fae:
      __os_log_internal(0,_md_log_log,0x10,pcVar9,param_2);
      uVar12 = 0xe8000001;
      goto LAB_00153fc6;
    }
    lVar6 = __AMDCFURLCreateFromFileSystemPathWithSmarts(param_2);
    if (lVar6 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar9 = "_AMDCFURLCreateFromFileSystemPathWithSmarts failed on \'%@\'";
      goto LAB_00153fae;
    }
    local_860 = _CFURLCopyLastPathComponent(lVar6);
    if (local_860 != 0) {
      uVar13 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      local_888 = param_4;
      local_870 = lVar6;
      lVar6 = __AMDCFURLCreateWithFileSystemPathRelativeToBase(uVar13,&cf_PublicStaging,0,1);
      uVar12 = 0xe8000001;
      if (lVar6 == 0) {
        lVar8 = 0;
        lVar11 = 0;
        lVar6 = local_870;
        lVar14 = local_860;
        goto LAB_00154111;
      }
      local_880 = param_5;
      local_878 = lVar6;
      lVar6 = _CFURLCreateCopyAppendingPathComponent(uVar13,lVar6,local_860,1);
      if (lVar6 == 0) {
        lVar8 = 0;
        lVar11 = local_878;
        lVar6 = local_870;
        lVar14 = local_860;
        goto LAB_00154111;
      }
      local_890 = lVar6;
      cVar3 = __AMDCFURLGetCStringForFileSystemPath(lVar6,local_448);
      uVar2 = local_880;
      uVar12 = local_888;
      if (cVar3 == '\0') {
LAB_00153feb:
        uVar13 = 0xe8000001;
      }
      else {
        _fire_callback_3230(local_888,local_880,0,&cf_PreflightingTransfer);
        _preflight_transfer(local_858,local_950,local_8c0);
        _fire_callback_3230(uVar12,uVar2,10,&cf_TransferringPackage);
        local_864 = 0;
        lVar6 = _AFCConnectionCreate(uVar13,param_1,0,0);
        if (lVar6 == 0) {
          _pretty_afc_error("transfer_package","Could not open AFC connection",1);
          goto LAB_00153feb;
        }
        local_864 = 0;
        iVar4 = _afc_stat(lVar6,".",local_9e0);
        lVar8 = local_890;
        if ((iVar4 == 0) && (local_9b0 != 0)) {
          local_864 = 1;
LAB_00154045:
          local_898 = _CFURLCreateCopyDeletingLastPathComponent(uVar13,local_890);
          uVar5 = _make_path(lVar6,local_898);
          if (uVar5 == 0) {
            uVar5 = _nuke_path(lVar6,lVar8);
            if ((uVar5 & 0xfffffff7) == 0) {
              iVar4 = _lstat_INODE64(local_858,local_950);
              if (iVar4 == -1) {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                uVar12 = _md_log_log;
                piVar7 = ___error();
                pcVar9 = _strerror(*piVar7);
                __os_log_internal(0,uVar12,1,"Could not stat %s: %s",local_858,pcVar9);
              }
              else {
                local_94c = local_94c & 0xf000;
                if (local_94c == 0xa000) {
                  uVar5 = _copy_symlink(lVar6,local_858,local_448);
                }
                else if (local_94c == 0x8000) {
                  uVar5 = _copy_touch_file(local_8c0,local_888,local_880,lVar6,local_858,local_448,
                                           local_920,0);
                }
                else if (local_94c == 0x4000) {
                  uVar5 = _copy_directory(local_8c0,local_888,local_880,lVar6,local_858,local_448);
                }
                else {
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  __os_log_internal(0,_md_log_log,1,"Don\'t know how to copy this type of file: %s",
                                    local_858);
                }
                if (uVar5 == 0) {
                  uVar13 = 0;
                  bVar1 = true;
                  goto LAB_001540b7;
                }
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                if (uVar5 < 0x19) {
                  uVar12 = *(undefined8 *)(&_afcErrors + (ulong)uVar5 * 0x10);
                }
                else {
                  uVar12 = 0;
                }
                __os_log_internal(0,_md_log_log,1,"Could not copy %s to %s on the device: %s",
                                  local_858,local_448,uVar12);
              }
              bVar1 = false;
              uVar13 = 0xe8000001;
              goto LAB_001540b7;
            }
            pcVar9 = "Could not remove existing path";
          }
          else {
            pcVar9 = "Could not create path";
          }
          _pretty_afc_error("transfer_package",pcVar9,uVar5);
          uVar13 = 0xe8000001;
          bVar1 = false;
        }
        else {
          if (iVar4 == 0) goto LAB_00154045;
          _pretty_afc_error("transfer_package","Could not check for mtime",iVar4);
          uVar13 = 0xe8000001;
          bVar1 = false;
          local_898 = 0;
        }
LAB_001540b7:
        iVar4 = _AFCConnectionClose(lVar6);
        if (iVar4 != 0) {
          _pretty_afc_error("transfer_package","Could not close AFC connection",iVar4);
        }
        if (local_898 != 0) {
          _CFRelease();
        }
        uVar12 = 0;
        lVar8 = local_890;
        lVar11 = local_878;
        lVar6 = local_870;
        lVar14 = local_860;
        if (bVar1) goto LAB_00154111;
      }
      uVar12 = uVar13;
      lVar8 = local_890;
      _pretty_afc_error("AMDeviceTransferApplication","Could not copy package to device via AFC",
                        uVar12);
      lVar11 = local_878;
      lVar6 = local_870;
      lVar14 = local_860;
      goto LAB_00154111;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Could not get last path component from url \'%@\'.",lVar6)
    ;
    uVar12 = 0xe8000001;
  }
  lVar8 = 0;
  lVar11 = 0;
  lVar14 = 0;
LAB_00154111:
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  pcVar10 = &cf_NULL;
  if (local_8a0 != (cfstringStruct *)0x0) {
    pcVar10 = local_8a0;
  }
  __os_log_internal(0,_md_log_log,2,"returned 0x%x transferring package \'%@\'.",uVar12,pcVar10);
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (lVar14 != 0) {
    _CFRelease(lVar14);
  }
  if (lVar11 != 0) {
    _CFRelease(lVar11);
  }
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar12;
}

