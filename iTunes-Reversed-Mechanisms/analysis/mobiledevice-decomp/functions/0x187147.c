// rea decompile_all
// name: _UarpRestoreLayer3PersonalizedFirmware
// address: 0x187147
// body: available
// range: 0x187147-0x187237 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x187233 to 0x186987 _UarpRestoreLayer3LogErrorInternal (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _UarpRestoreLayer3PersonalizedFirmware
               (long param_1,void *param_2,uint param_3,undefined4 param_4)

{
  FILE *pFVar1;
  size_t sVar2;
  ulong uVar3;
  
  uVar3 = (ulong)param_3;
  if (((param_3 != 0) && (param_2 != (void *)0x0)) && (*(char **)(param_1 + 0xf8) != (char *)0x0)) {
    pFVar1 = _fopen(*(char **)(param_1 + 0xf8),"w+");
    if (pFVar1 == (FILE *)0x0) {
      _UarpRestoreLayer3LogErrorInternal(param_1);
      return;
    }
    sVar2 = _fwrite(param_2,1,uVar3,pFVar1);
    if (sVar2 != uVar3) {
      _UarpRestoreLayer3LogErrorInternal(param_1);
    }
    _fflush(pFVar1);
    _fclose(pFVar1);
  }
  if (*(code **)(param_1 + 0xb0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00187201. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0xb0))(param_1,param_2,uVar3,param_4);
    return;
  }
  return;
}

