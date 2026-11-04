// rea decompile_all
// name: _makeDirInDst
// address: 0xaf8c3
// body: available
// range: 0xaf8c3-0xaf960 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xaf95c to 0x2aa374 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _makeDirInDst(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  int *piVar5;
  char *pcVar6;
  
  lVar3 = _CFDictionaryGetValue(*(undefined8 *)(param_3 + 8),&cf_DIRS);
  if (lVar3 != 0 && *(char *)(param_3 + 0x58) == '\0') {
    cVar1 = _CFDictionaryContainsKey(lVar3,param_1);
    if (cVar1 == '\0') {
      pvVar4 = (void *)_createPathForString(param_1,*(undefined8 *)(param_3 + 0x48));
      iVar2 = _mkdir_recursive(pvVar4);
      if (iVar2 != 0) {
        piVar5 = ___error();
        pcVar6 = _strerror(*piVar5);
        _dmlog("makeDirInDst",0xc1,&cf_mkdir_recursivefailedfor_s__s,pvVar4,pcVar6);
        _set_error(param_3,0);
      }
      if (pvVar4 != (void *)0x0) {
        _free(pvVar4);
        return;
      }
    }
  }
  return;
}

