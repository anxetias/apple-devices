// rea decompile_all
// name: _copy_image
// address: 0x119866
// body: available
// range: 0x119866-0x119d66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x119d62 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _copy_image(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  char *pcVar8;
  undefined8 extraout_RDX;
  undefined4 uVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 in_stack_fffffffffffffad8;
  undefined4 uVar12;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
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
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_460;
  long local_458;
  long local_450;
  char local_448 [1040];
  long local_38;
  
  uVar12 = (undefined4)((ulong)in_stack_fffffffffffffad8 >> 0x20);
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_450 = 0;
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
  local_4f8 = 0;
  uStack_4f0 = 0;
  local_508 = 0;
  uStack_500 = 0;
  local_518 = 0;
  uStack_510 = 0;
  iVar3 = _AMDeviceConnect();
  if (iVar3 != 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar10 = _md_log_log;
    uVar5 = _AMDErrorString(iVar3);
    bVar1 = false;
    __os_log_internal(0,uVar10,0x10,"AMDeviceConnect failed: 0x%08x (%s)",iVar3,uVar5);
    iVar4 = iVar3;
    goto LAB_00119c3e;
  }
  local_460 = param_4;
  iVar4 = _AMDeviceStartSession(param_1);
  if (iVar4 != 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar10 = _md_log_log;
    uVar5 = _AMDErrorString(iVar4);
    bVar1 = false;
    __os_log_internal(0,uVar10,0x10,"AMDeviceStartSession failed: 0x%08x (%s)",iVar4,uVar5);
    goto LAB_00119c3e;
  }
  iVar4 = _AMDeviceSecureStartService(param_1,&cf_com_apple_afc,0,&local_450);
  if (iVar4 == 0) {
    if (local_450 == 0) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar9 = *(undefined4 *)(local_450 + 0x10);
    }
    lVar6 = _AFCConnectionCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,uVar9,0,0,0);
    if (lVar6 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      iVar4 = 0;
      __os_log_internal(0,_md_log_log,0x10,"AFCConnectionCreate failed.");
    }
    else {
      if (local_450 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined8 *)(local_450 + 0x18);
      }
      _AFCConnectionSetSecureContext(lVar6,uVar10);
      local_458 = lVar6;
      iVar4 = _AFCDirectoryCreate(lVar6,"PublicStaging");
      if (iVar4 == 0) {
        cVar2 = _CFStringGetFileSystemRepresentation(param_2,local_448,0x400);
        if (cVar2 == '\0') {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,"Failed to convert string.");
        }
        else {
          iVar4 = _stat_INODE64(local_448,&local_518);
          if (iVar4 != -1) {
            iVar4 = _AMDeviceCopyFile(&local_488,param_3,local_460,local_458,local_448,
                                      "PublicStaging/staging.dimage",CONCAT44(uVar12,1));
            if (iVar4 != 0) {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              pcVar8 = "AMDeviceCopyFile failed (%s): %d";
              pcVar11 = local_448;
              goto LAB_00119ae6;
            }
            iVar4 = 0;
            goto LAB_00119c2f;
          }
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470,extraout_RDX,local_458);
          }
          uVar10 = _md_log_log;
          piVar7 = ___error();
          iVar4 = *piVar7;
          piVar7 = ___error();
          pcVar11 = _strerror(*piVar7);
          __os_log_internal(0,uVar10,0x10,"stat failed for %s : %d (%s)",local_448,iVar4,pcVar11);
        }
        iVar4 = -0x17fffffd;
      }
      else {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar8 = "AFCDirectoryCreate failed (%s): %d";
        pcVar11 = "PublicStaging";
LAB_00119ae6:
        __os_log_internal(0,_md_log_log,0x10,pcVar8,pcVar11,iVar4);
        iVar4 = -0x17ffff0f;
      }
LAB_00119c2f:
      _AFCConnectionClose(local_458);
    }
  }
  else {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar10 = _md_log_log;
    uVar5 = _AMDErrorString(iVar4);
    __os_log_internal(0,uVar10,0x10,"AMDeviceSecureStartService (%@) failed: 0x%08x (%s)",
                      &cf_com_apple_afc,iVar4,uVar5);
  }
  bVar1 = true;
LAB_00119c3e:
  if (local_450 != 0) {
    _CFRelease();
  }
  local_450 = 0;
  if (bVar1) {
    _AMDeviceStopSession(param_1);
  }
  if (iVar3 == 0) {
    _AMDeviceDisconnect(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

