// rea decompile_all
// name: _AMAuthInstallApImg4LocalCreateEncodedData
// address: 0x1a2f0c
// body: available
// range: 0x1a2f0c-0x1a2fbd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallApImg4LocalCreateEncodedData(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_2c;
  undefined8 local_28;
  
  local_28 = 0;
  lVar3 = _DEREncoderCreate(0);
  if (lVar3 != 0) {
    uVar4 = _CFDataGetBytePtr(param_1);
    uVar1 = _CFDataGetLength(param_1);
    iVar2 = _DEREncoderAddData(lVar3,0,4,uVar4,uVar1,0);
    if (iVar2 == 0) {
      iVar2 = _DEREncoderCreateEncodedBuffer(lVar3,&local_28,&local_2c);
      if (iVar2 == 0) {
        uVar4 = _CFDataCreate(0,local_28,local_2c);
        goto LAB_001a2f87;
      }
      _AMAuthInstallApImg4LocalCreateEncodedData_cold_2();
    }
    else {
      _AMAuthInstallApImg4LocalCreateEncodedData_cold_1();
    }
  }
  uVar4 = 0;
  _SafeRelease(0);
LAB_001a2f87:
  _SafeFree(local_28);
  _DEREncoderDestroy(lVar3);
  return uVar4;
}

