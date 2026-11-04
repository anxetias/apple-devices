// rea decompile_all
// name: __SortZipEntries
// address: 0xa4810
// body: available
// range: 0xa4810-0xa4923 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xa48ed to 0x2aa8f0 _strcmp (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __SortZipEntries(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  lVar1 = *param_1;
  lVar2 = *param_2;
  iVar5 = 0;
  if (((lVar1 != 0 || lVar2 != 0) && (iVar5 = -1, lVar1 != 0 || lVar2 == 0)) &&
     (iVar5 = 1, lVar2 != 0 || lVar1 == 0)) {
    pcVar3 = *(char **)(lVar1 + 0x48);
    pcVar4 = *(char **)(lVar2 + 0x48);
    iVar5 = __SortLateIfPrefix(pcVar3,pcVar4,"__MACOSX/",9);
    if (iVar5 == 0) {
      pcVar6 = _rindex(pcVar3,0x2f);
      pcVar7 = _rindex(pcVar4,0x2f);
      if (pcVar6 != (char *)0x0) {
        *pcVar6 = '\0';
      }
      if (pcVar7 != (char *)0x0) {
        *pcVar7 = '\0';
      }
      iVar5 = _strcmp(pcVar3,pcVar4);
      if (iVar5 == 0) {
        pcVar9 = pcVar6 + 1;
        if (pcVar6 == (char *)0x0) {
          pcVar9 = pcVar3;
        }
        pcVar8 = pcVar7 + 1;
        if (pcVar7 == (char *)0x0) {
          pcVar8 = pcVar4;
        }
        iVar5 = __SortLateIfPrefix(pcVar9,pcVar8,"._",2);
        if (iVar5 != 0) {
          return iVar5;
        }
      }
      if (pcVar6 != (char *)0x0) {
        *pcVar6 = '/';
      }
      if (pcVar7 != (char *)0x0) {
        *pcVar7 = '/';
      }
      iVar5 = _strcmp(pcVar3,pcVar4);
      return iVar5;
    }
  }
  return iVar5;
}

