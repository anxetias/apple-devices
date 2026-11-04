// rea decompile_all
// name: _DEREncoderAddPrivateFromEncoder
// address: 0x24266c
// body: available
// range: 0x24266c-0x24270c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _DEREncoderAddPrivateFromEncoder(long param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = _calloc(1,0x10);
  if (pvVar2 == (void *)0x0) {
    iVar1 = -1;
  }
  else {
    *(undefined4 *)((long)pvVar2 + 0xc) = 0;
    if (param_1 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = __DEREncoderAddDataFromEncoderByEncoding(param_1,pvVar2,0,0x10,1);
      if ((iVar1 == 0) && (iVar1 = 1, param_2 != 0)) {
        iVar1 = __DEREncoderAddDataFromEncoderByEncoding(pvVar2,param_2,3,param_3,1);
      }
    }
  }
  _DEREncoderDestroy(pvVar2);
  return iVar1;
}

