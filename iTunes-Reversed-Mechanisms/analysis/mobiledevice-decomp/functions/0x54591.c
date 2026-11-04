// rea decompile_all
// name: _PrepareH4
// address: 0x54591
// body: available
// range: 0x54591-0x545fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x545fa to 0x2aa008 ___bzero (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _PrepareH4(long param_1,int param_2,char *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  if ("System/Library/Frameworks/DiskArbitration.framework/Versions/A/DiskArbitration" <= param_3 ||
      param_2 == 0) {
    ___bzero(lVar1,0x80000);
    return;
  }
  if (param_3 != (char *)0x0) {
    pcVar3 = (char *)0x0;
    do {
      lVar2 = *(long *)(pcVar3 + param_4);
      iVar4 = 0;
      do {
        *(undefined4 *)
         (lVar1 + (ulong)((uint)((ulong)(lVar2 * -0x42e1ca5843000000) >> 0x2f) + iVar4 & 0x1ffff) *
                  4) = 0;
        iVar4 = iVar4 + 8;
      } while (iVar4 != 0x20);
      pcVar3 = pcVar3 + 1;
    } while (pcVar3 != param_3);
  }
  return;
}

