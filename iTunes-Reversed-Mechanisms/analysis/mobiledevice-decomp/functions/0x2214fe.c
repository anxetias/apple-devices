// rea decompile_all
// name: _DERImg4DecodeManifestCommon
// address: 0x2214fe
// body: available
// range: 0x2214fe-0x22159b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _DERImg4DecodeManifestCommon
              (long *param_1,ulong param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1 == (long *)0x0) {
    return 6;
  }
  if (param_4 == 0) {
    return 6;
  }
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    if (0xffff < param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    iVar2 = _DERParseSequenceToObject(param_1,param_2 & 0xffff,param_3,param_4,0xc0,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = _DERImg4DecodeTagCompare(param_4,param_5);
    if (iVar2 != 0) {
      return 2;
    }
    iVar2 = _DERParseInteger(param_4 + 0x10);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  return 0;
}

