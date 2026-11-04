// rea decompile_all
// name: _AMDGetPairingRecordDirectoryPath
// address: 0x1338ed
// body: available
// range: 0x1338ed-0x133a00 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1339fc to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AMDGetPairingRecordDirectoryPath(void)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  char local_38 [24];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_004412b8;
  if (_AMDGetPairingRecordDirectoryPath_directory == 0) {
    builtin_strncpy(local_38,"/var/db/lockdown/",0x12);
    ___strlcpy_chk(&_AMDGetPairingRecordDirectoryPath_lockdowndir,local_38,0x401,0x401);
    iVar2 = _lchmod(&_AMDGetPairingRecordDirectoryPath_lockdowndir,0x1c1);
    if (iVar2 == -1) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar1 = _md_log_log;
      piVar3 = ___error();
      iVar2 = *piVar3;
      piVar3 = ___error();
      pcVar4 = _strerror(*piVar3);
      __os_log_internal(0,uVar1,0x10,"Could not chmod %s: %d %s",
                        &_AMDGetPairingRecordDirectoryPath_lockdowndir,iVar2,pcVar4);
    }
    _AMDGetPairingRecordDirectoryPath_directory =
         _CFStringCreateWithCString
                   (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,
                    &_AMDGetPairingRecordDirectoryPath_lockdowndir,0x8000100);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

