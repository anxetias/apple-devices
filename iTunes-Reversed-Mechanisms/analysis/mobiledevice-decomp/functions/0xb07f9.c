// rea decompile_all
// name: _deleteEntityInNewDir
// address: 0xb07f9
// body: available
// range: 0xb07f9-0xb08a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb0887 to 0xae4ee _set_error (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xb0893 to 0x2aa374 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _deleteEntityInNewDir(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar3 = (char *)_createPathForString(param_1,*(undefined8 *)(param_3 + 0x38));
  if (pcVar3 == (char *)0x0) {
    _deleteEntityInNewDir_cold_1(param_3 + 0x38);
  }
  else {
    cVar1 = _verbose();
    if (cVar1 != '\0') {
      _dmlog("deleteEntityInNewDir",0x4c1,&cf_deletingFILE__s,pcVar3);
    }
    iVar2 = _unlink(pcVar3);
    if (iVar2 == 0) {
      _free(pcVar3);
      return;
    }
    piVar4 = ___error();
    pcVar5 = _strerror(*piVar4);
    _dmlog("deleteEntityInNewDir",0x4c3,&cf_unlinkfailedfor_s__s,pcVar3,pcVar5);
    _free(pcVar3);
  }
  _set_error(param_3,0);
  return;
}

