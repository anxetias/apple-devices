// rea decompile_all
// name: _createSiblingInPath
// address: 0x14b2f7
// body: available
// range: 0x14b2f7-0x14b493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x14b47a to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * _createSiblingInPath(char *param_1,undefined8 param_2)

{
  uint uVar1;
  char *pcVar2;
  size_t sVar3;
  char *pcVar4;
  char local_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  pcVar2 = _strdup(param_1);
  sVar3 = _strlen(pcVar2);
  if (pcVar2[sVar3 - 1] == '/') {
    pcVar2[sVar3 - 1] = '\0';
  }
  pcVar4 = _rindex(pcVar2,0x2f);
  if (pcVar4 == (char *)0x0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar4 = (char *)0x0;
    __os_log_internal(0,_md_log_log,0x10,"can\'t find slash in: %s",pcVar2);
  }
  else {
    *pcVar4 = '\0';
    uVar1 = _snprintf(local_428,0x400,"%s/%s",pcVar2,param_2);
    if (uVar1 < 0x400) {
      pcVar4 = _strdup(local_428);
    }
    else {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar4 = (char *)0x0;
      __os_log_internal(0,_md_log_log,0x10,"path too long: %s/%s",pcVar2,param_2);
    }
  }
  _free(pcVar2);
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  __os_log_internal(0,_md_log_log,1,"returning: %s",pcVar4);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return pcVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

