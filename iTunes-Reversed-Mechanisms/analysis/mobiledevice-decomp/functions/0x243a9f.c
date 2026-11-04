// rea decompile_all
// name: _Img4EncodeSequence
// address: 0x243a9f
// body: available
// range: 0x243a9f-0x243b49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _Img4EncodeSequence(long param_1,undefined4 param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if (param_4 == 0 || (param_3 == 0 || param_1 == 0)) {
    iVar1 = 0x65;
  }
  else {
    lVar3 = _DEREncoderCreate(0);
    if (lVar3 != 0) {
      iVar1 = _DEREncoderAddData(lVar3,0,0x10,param_1,param_2,1);
      if (iVar1 == 0) {
        iVar2 = _DEREncoderCreateEncodedBuffer(lVar3,param_3,param_4);
        iVar1 = 100;
        if (iVar2 != 0) {
          iVar1 = iVar2;
        }
      }
      goto LAB_00243b14;
    }
    iVar1 = 0x66;
  }
  lVar3 = 0;
LAB_00243b14:
  _DEREncoderDestroy(lVar3);
  return iVar1;
}

