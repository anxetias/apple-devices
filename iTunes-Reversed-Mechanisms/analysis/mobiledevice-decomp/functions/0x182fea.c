// rea decompile_all
// name: _uarpPlatformAssetRescinded
// address: 0x182fea
// body: available
// range: 0x182fea-0x18305d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x183059 to 0x182a71 _uarpPlatformAssetRescind (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _uarpPlatformAssetRescinded(long param_1,long param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x238);
  if (param_3 == 0xffff) {
    lVar2 = lVar3;
    if (lVar3 == 0) goto LAB_00183056;
    do {
      if ((*(int *)(lVar2 + 0x130) == 0) && (*(long *)(lVar2 + 0x2b8) == param_2)) {
        *(undefined1 *)(lVar2 + 0x48) = 1;
      }
      plVar1 = (long *)(lVar2 + 0x2c8);
      lVar2 = *plVar1;
    } while (*plVar1 != 0);
  }
  for (; lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x2c8)) {
    if (((*(int *)(lVar3 + 0x130) == 0) && (*(long *)(lVar3 + 0x2b8) == param_2)) &&
       (*(short *)(lVar3 + 0x2c) == (short)param_3)) goto LAB_00183058;
  }
  if ((short)param_3 != -1) {
    return;
  }
LAB_00183056:
  lVar3 = 0;
LAB_00183058:
  _uarpPlatformAssetRescind(param_1,param_2,lVar3);
  return;
}

