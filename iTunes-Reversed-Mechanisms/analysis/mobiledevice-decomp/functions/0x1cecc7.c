// rea decompile_all
// name: _PrepareH6
// address: 0x1cecc7
// body: available
// range: 0x1cecc7-0x1ced37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1cecf4 to 0x2aa008 ___bzero (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _PrepareH6(ulong *param_1,int param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1[7];
  if (param_3 <= *param_1 >> 6 && param_2 != 0) {
    if (param_3 != 0) {
      uVar2 = param_1[3];
      uVar3 = param_1[2];
      uVar4 = 0;
      do {
        *(undefined2 *)
         (uVar1 + ((*(ulong *)(param_4 + uVar4) & uVar2) * 0x1fe35a7bd3579bd3 >>
                   ((byte)(int)uVar3 & 0x3f) & 0xffffffff) * 2) = 0;
        uVar4 = uVar4 + 1;
      } while (param_3 != uVar4);
    }
    return;
  }
  ___bzero(uVar1,*param_1 * 2);
  return;
}

