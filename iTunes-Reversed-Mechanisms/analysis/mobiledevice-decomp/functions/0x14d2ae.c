// rea decompile_all
// name: __AMDeviceTransferAndInstallUsingSZConduit
// address: 0x14d2ae
// body: available
// range: 0x14d2ae-0x14d73c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x14d738 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
__AMDeviceTransferAndInstallUsingSZConduit
          (long param_1,long param_2,long param_3,long param_4,long param_5,uint param_6,
          undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  char *pcVar7;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined8 local_888;
  undefined8 local_880;
  undefined8 *local_878;
  undefined1 *local_870;
  undefined8 local_868;
  ulong uStack_860;
  long local_858;
  long local_850;
  long local_848;
  uint local_83c;
  undefined1 local_838 [1024];
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_848 = param_5;
  ___bzero(local_438,0x400);
  ___bzero(local_838,0x400);
  local_898 = 0;
  uStack_890 = 0;
  local_8a8 = 0;
  uStack_8a0 = 0;
  if (param_1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar7 = "device is NULL.";
  }
  else if (param_2 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar7 = "packageURL is NULL.";
  }
  else {
    if (param_3 != 0) {
      local_83c = param_6;
      local_858 = _CFURLCopyLastPathComponent(param_2);
      uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      local_850 = _CFStringCreateWithFormat(uVar1,0,&cf____c__,param_3,0x2f);
      cVar4 = _CFStringGetFileSystemRepresentation(local_850,local_838,0x400);
      if (cVar4 == '\0') {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar7 = "Failed to convert dest path to C string";
LAB_0014d4c0:
        lVar6 = 0;
        __os_log_internal(0,_md_log_log,0x10,pcVar7);
        uVar5 = 0xe8000001;
      }
      else {
        cVar4 = _CFURLGetFileSystemRepresentation(param_2,1,local_438,0x400);
        if (cVar4 == '\0') {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar7 = "Failed to convert source url to C string";
          goto LAB_0014d4c0;
        }
        if (param_4 == 0) {
          lVar6 = _CFDictionaryCreateMutable
                            (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                             PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        }
        else {
          lVar6 = _CFDictionaryCreateMutableCopy(uVar1,0,param_4);
        }
        lVar2 = local_848;
        if (lVar6 == 0) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          lVar6 = 0;
          __os_log_internal(0,_md_log_log,0x10,"Failed to create options dictionary");
          uVar5 = 0xe8000003;
        }
        else {
          if (local_848 == 0) {
            pcVar7 = "";
          }
          else {
            _CFDictionarySetValue
                      (lVar6,&cf_InstallTransferredDirectory,
                       *(undefined8 *)PTR__kCFBooleanTrue_00441110);
            _CFDictionarySetValue(lVar6,&cf_InstallOptionsDictionary,lVar2);
            pcVar7 = " and install";
          }
          uVar3 = local_83c;
          local_868 = 0;
          local_888 = param_7;
          local_880 = param_8;
          local_878 = &local_8a8;
          uStack_860 = (ulong)(byte)local_83c << 8 ^ 0x100;
          local_870 = local_438;
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,2,
                            "Calling SZConduitSendPathWithPreflight to transfer%s %s to device path %s"
                            ,pcVar7,local_438,local_838);
          uVar5 = _SZConduitSendPathWithPreflight
                            (param_1,local_438,local_838,uVar3 & 0xff,lVar6,
                             __SZConduitPreflightCallback,__SZConduitTransferProgressCallback,
                             __SZConduitInstallProgressCallback,&local_888);
        }
      }
      if (local_858 != 0) {
        _CFRelease();
      }
      if (local_850 != 0) {
        _CFRelease();
      }
      if (lVar6 != 0) {
        _CFRelease(lVar6);
      }
      goto LAB_0014d450;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar7 = "stagingPath is NULL.";
  }
  __os_log_internal(0,_md_log_log,0x10,pcVar7);
  uVar5 = 0xe8000007;
LAB_0014d450:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

