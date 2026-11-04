// rea decompile_all
// name: _nuke_path
// address: 0x1515b9
// body: available
// range: 0x1515b9-0x151846 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x15182d to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _nuke_path(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  byte *local_460;
  long local_458;
  undefined8 local_450;
  undefined1 local_448 [1040];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_458 = 0;
  local_450 = param_2;
  cVar2 = __AMDCFURLGetCStringForFileSystemPath(param_2,local_448);
  if (cVar2 == '\0') {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    iVar3 = 0;
    __os_log_internal(0,_md_log_log,0x10,"Failed to convert \'%@\' to C string",local_450);
  }
  else {
    iVar3 = _AFCDirectoryOpen(param_1,local_448,&local_458);
    if (iVar3 == 0) {
      uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      do {
        iVar3 = _AFCDirectoryRead(param_1,local_458,&local_460);
        if ((iVar3 != 0) || (local_460 == (byte *)0x0)) goto LAB_00151624;
        uVar4 = *local_460 - 0x2e;
        if (uVar4 == 0) {
          if (local_460[1] != 0) {
            uVar4 = local_460[1] - 0x2e;
            if (uVar4 == 0) {
              uVar4 = (uint)local_460[2];
            }
            goto LAB_001516b8;
          }
LAB_0015172d:
          iVar3 = 0;
        }
        else {
LAB_001516b8:
          if (uVar4 == 0) goto LAB_0015172d;
          lVar5 = _CFStringCreateWithCString(uVar1,local_460,0x8000100);
          if (lVar5 == 0) {
            iVar3 = 1;
            break;
          }
          iVar3 = 1;
          lVar6 = _CFURLCreateCopyAppendingPathComponent(uVar1,local_450,lVar5,1);
          if (lVar6 != 0) {
            iVar3 = _nuke_path(param_1,lVar6);
            _CFRelease(lVar6);
          }
          _CFRelease(lVar5);
        }
      } while (iVar3 == 0);
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Failed on file \'%s\', child of \'%@\'.",local_460,
                        local_450);
    }
    else {
LAB_00151624:
      iVar3 = _AFCRemovePath(param_1,local_448);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,"AFCRemovePath of \'%s\' returned %d",local_448,iVar3);
      }
    }
  }
  if (local_458 != 0) {
    _AFCDirectoryClose(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

