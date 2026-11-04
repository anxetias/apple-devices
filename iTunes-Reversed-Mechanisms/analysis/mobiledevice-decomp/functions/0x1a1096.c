// rea decompile_all
// name: __WriteStreamIntoFile
// address: 0x1a1096
// body: available
// range: 0x1a1096-0x1a1130 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __WriteStreamIntoFile(FILE *param_1,FILE *param_2)

{
  int iVar1;
  void *pvVar2;
  size_t sVar3;
  size_t sVar4;
  
  pvVar2 = _malloc(0x100000);
  if (pvVar2 == (void *)0x0) {
    __WriteStreamIntoFile_cold_2();
    iVar1 = 2;
  }
  else {
    do {
      sVar3 = _fread(pvVar2,1,0x100000,param_2);
      if (sVar3 == 0) {
        iVar1 = _ferror(param_2);
        iVar1 = (uint)(iVar1 != 0) << 2;
        goto LAB_001a1110;
      }
      sVar4 = _fwrite(pvVar2,1,sVar3,param_1);
    } while (sVar4 == sVar3);
    __WriteStreamIntoFile_cold_1();
    iVar1 = 4;
  }
LAB_001a1110:
  _free(pvVar2);
  return iVar1;
}

