// rea decompile_all
// name: _read_string_to_terminator
// address: 0xadb08
// body: available
// range: 0xadb08-0xadb6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xadb6b to 0xb5166 _read_string_to_terminator.cold.1 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _read_string_to_terminator(long *param_1,byte param_2,long param_3,ulong param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  
  lVar5 = param_1[2];
  if (param_1[1] <= lVar5) {
                    /* WARNING: Subroutine does not return */
    _read_string_to_terminator_cold_1();
  }
  if (param_4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = 1;
    while( true ) {
      lVar2 = *param_1;
      cVar1 = *(char *)(lVar2 + lVar5);
      param_1[2] = lVar5 + 1;
      if ((cVar1 == '\n') || ((cVar1 == '\t' & param_2) != 0)) break;
      *(char *)(param_3 + -1 + uVar4) = cVar1;
      lVar5 = param_1[2];
      if (param_1[1] <= lVar5) {
        return 0;
      }
      bVar6 = param_4 <= uVar4;
      uVar4 = uVar4 + 1;
      if (bVar6) {
        return 0;
      }
    }
    *(undefined1 *)(param_3 + -1 + uVar4) = 0;
    uVar3 = CONCAT71((int7)((ulong)lVar2 >> 8),1);
  }
  return uVar3;
}

