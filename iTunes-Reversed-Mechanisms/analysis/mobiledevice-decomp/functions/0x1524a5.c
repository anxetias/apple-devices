// rea decompile_all
// name: _make_path
// address: 0x1524a5
// body: available
// range: 0x1524a5-0x1528a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1527f6 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _make_path(undefined8 param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 local_448 [1040];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (_make_path_staticRootURL == 0) {
    _make_path_staticRootURL =
         __AMDCFURLCreateWithFileSystemPathRelativeToBase
                   (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,&cf__,0,1);
  }
  lVar5 = _make_path_staticRootURL;
  lVar4 = _CFURLCopyFileSystemPath(_make_path_staticRootURL,0);
  if (lVar4 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Could not get fs path for \'%@\'.",lVar5);
  }
  else {
    uVar9 = 0;
    lVar5 = _CFURLCopyFileSystemPath(param_2,0);
    if (lVar5 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Could not get fs path for \'%@\'.",param_2);
      _CFRelease(lVar4);
    }
    else {
      cVar1 = _CFEqual(lVar4,lVar5);
      _CFRelease(lVar4);
      _CFRelease(lVar5);
      if (cVar1 != '\0') goto LAB_00152611;
    }
  }
  puVar6 = (undefined1 *)
           _CFURLCreateCopyDeletingLastPathComponent
                     (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,param_2);
  if (puVar6 == (undefined1 *)0x0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"CFURLCreateCopyDeletingLastPathComponent(%@) failed.",
                      param_2);
    uVar9 = 0xe8000001;
    goto LAB_00152611;
  }
  lVar5 = _CFURLGetString(param_2);
  if (lVar5 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
LAB_00152745:
    __os_log_internal(0,_md_log_log,0x10,"CFURLGetString(%@) failed.",param_2);
LAB_001527eb:
    uVar9 = 0xe8000001;
  }
  else {
    lVar4 = _CFURLGetString(puVar6);
    if (lVar4 == 0) {
      param_2 = puVar6;
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      goto LAB_00152745;
    }
    lVar4 = _CFStringGetLength(lVar4);
    lVar5 = _CFStringGetLength(lVar5);
    if (lVar5 <= lVar4) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar7 = "Parent URL %@ is longer than %@.";
      puVar8 = puVar6;
LAB_001527e4:
      __os_log_internal(0,_md_log_log,0x10,pcVar7,puVar8,param_2);
      goto LAB_001527eb;
    }
    iVar2 = _make_path(param_1,puVar6);
    if (iVar2 != 0) {
      _pretty_afc_error("make_path","Could not create path",iVar2);
      goto LAB_001527eb;
    }
    cVar1 = __AMDCFURLGetCStringForFileSystemPath(param_2,local_448);
    uVar9 = 0xe8000001;
    if (cVar1 != '\0') {
      uVar3 = _AFCDirectoryCreate(param_1,local_448);
      uVar9 = 0;
      if (uVar3 != 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        if (uVar3 < 0x19) {
          param_2 = *(undefined1 **)(&_afcErrors + (ulong)uVar3 * 0x10);
        }
        else {
          param_2 = (undefined1 *)0x0;
        }
        pcVar7 = "Couldn\'t create %s on device: %s";
        puVar8 = local_448;
        goto LAB_001527e4;
      }
    }
  }
  _CFRelease(puVar6);
LAB_00152611:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

