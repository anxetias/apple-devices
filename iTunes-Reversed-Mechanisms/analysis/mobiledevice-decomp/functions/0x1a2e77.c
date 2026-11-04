// rea decompile_all
// name: _AMAuthInstallApImg4LocalCreateEncodedVersion
// address: 0x1a2e77
// body: available
// range: 0x1a2e77-0x1a2f0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallApImg4LocalCreateEncodedVersion(undefined4 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_24;
  undefined8 local_20;
  
  local_20 = 0;
  lVar2 = _DEREncoderCreate(0);
  if (lVar2 != 0) {
    iVar1 = _DEREncoderAddUInt32(lVar2,0,2,param_1);
    if (iVar1 == 0) {
      iVar1 = _DEREncoderCreateEncodedBuffer(lVar2,&local_20,&local_24);
      if (iVar1 == 0) {
        uVar3 = _CFDataCreate(0,local_20,local_24);
        goto LAB_001a2ed7;
      }
      _AMAuthInstallApImg4LocalCreateEncodedVersion_cold_2();
    }
    else {
      _AMAuthInstallApImg4LocalCreateEncodedVersion_cold_1();
    }
  }
  uVar3 = 0;
  _SafeRelease(0);
LAB_001a2ed7:
  _SafeFree(local_20);
  _DEREncoderDestroy(lVar2);
  return uVar3;
}

