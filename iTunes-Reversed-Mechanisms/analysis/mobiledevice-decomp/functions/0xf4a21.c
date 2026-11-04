// rea decompile_all
// name: __AMRRegexExists
// address: 0xf4a21
// body: available
// range: 0xf4a21-0xf4ab8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 __AMRRegexExists(undefined8 param_1,undefined8 param_2,code *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  iVar1 = _regcomp(&local_48,param_2,3);
  if (iVar1 == 0) {
    local_58 = 0;
    uStack_50 = 0;
    iVar1 = _regexec(&local_48,param_1,1,&local_58,0);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else if (iVar1 == 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      (*param_3)(3,&cf_regexmatchingfailedfor__s___d,param_2,iVar1);
    }
    _regfree(&local_48);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

