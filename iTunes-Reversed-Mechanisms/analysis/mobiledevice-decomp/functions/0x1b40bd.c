// rea decompile_all
// name: _AMAuthInstallSupportCFDataCompare
// address: 0x1b40bd
// body: available
// range: 0x1b40bd-0x1b417b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMAuthInstallSupportCFDataCompare(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  size_t sVar6;
  long lVar7;
  
  if (param_1 == 0 && param_2 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 1;
    if (param_1 == 0 || param_2 != 0) {
      lVar7 = -1;
      if (param_1 != 0 || param_2 == 0) {
        lVar2 = _CFDataGetLength(param_1);
        lVar3 = _CFDataGetLength(param_2);
        if (lVar3 <= lVar2) {
          lVar2 = _CFDataGetLength(param_1);
          lVar3 = _CFDataGetLength(param_2);
          lVar7 = 1;
          if (lVar2 <= lVar3) {
            pvVar4 = (void *)_CFDataGetBytePtr(param_1);
            pvVar5 = (void *)_CFDataGetBytePtr(param_2);
            sVar6 = _CFDataGetLength(param_1);
            iVar1 = _memcmp(pvVar4,pvVar5,sVar6);
            lVar7 = (long)iVar1;
          }
        }
      }
    }
  }
  return lVar7;
}

