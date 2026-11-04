// rea decompile_all
// name: _create_cmd_filename
// address: 0xb5189
// body: available
// range: 0xb5189-0xb522e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb522a to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _create_cmd_filename(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_428 [1032];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar2 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    cVar1 = _CFStringGetCString(param_2,local_428,0x400,0x8000100);
    if (cVar1 == '\0') {
      uVar2 = 0;
      _dmlog("create_cmd_filename",0x4e4,&cf_unabletogetcstringfromcfstring);
    }
    else {
      uVar2 = _create_path_str(param_1,"com.apple.deltainstallcommands.",local_428);
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_20) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

