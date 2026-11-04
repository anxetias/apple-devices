// rea decompile_all
// name: _PrepareH54
// address: 0x548b0
// body: available
// range: 0x548b0-0x5491d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x54919 to 0x2aa008 ___bzero (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _PrepareH54(long param_1,int param_2,ulong param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  if (0x8000 < param_3 || param_2 == 0) {
    ___bzero(lVar1,0x400000);
    return;
  }
  if (param_3 != 0) {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(param_4 + uVar3);
      iVar4 = 0;
      do {
        *(undefined4 *)
         (lVar1 + (ulong)((uint)((ulong)(lVar2 * 0x35a7bd1e35a7bd00) >> 0x2c) + iVar4 & 0xfffff) * 4
         ) = 0;
        iVar4 = iVar4 + 8;
      } while (iVar4 != 0x20);
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_3);
  }
  return;
}

