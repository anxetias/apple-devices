// rea decompile_all
// name: __AMDCFURLCreateFromFileSystemPathWithSmarts
// address: 0x14c0f4
// body: available
// range: 0x14c0f4-0x14c2b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x14c2b2 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __AMDCFURLCreateFromFileSystemPathWithSmarts(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  undefined1 local_4d8 [4];
  ushort local_4d4;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined1 local_438 [1032];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  local_448 = 0;
  uStack_440 = 0;
  cVar1 = _CFStringGetCString(param_1,local_438,0x401,0x8000100);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    iVar2 = _lstat_INODE64(local_438,local_4d8);
    if (iVar2 == 0) {
      bVar7 = (local_4d4 & 0xf000) == 0x4000;
      pcVar6 = "regular file";
      if (bVar7) {
        pcVar6 = "directory";
      }
    }
    else {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar4 = _md_log_log;
      piVar3 = ___error();
      __os_log_internal(0,uVar4,2,
                        "stat() failed on path \'%s\' with errno %d. Blindly charging ahead anyways..."
                        ,local_438,*piVar3);
      bVar7 = true;
      pcVar6 = "directory";
    }
    uVar4 = _CFStringGetLength(param_1);
    cVar1 = _CFStringFindWithOptions(param_1,&cf__,0,uVar4,0,&local_448);
    pcVar5 = "Windows";
    if (cVar1 == '\0') {
      pcVar5 = "POSIX";
    }
    uVar4 = __AMDCFURLCreateWithFileSystemPathRelativeToBase
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,param_1,
                       (cVar1 != '\0') * '\x02',bVar7);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,2,"\'%@\' looks like a %s in %s style. retVal \'%@\'",param_1,
                      pcVar6,pcVar5,uVar4);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

