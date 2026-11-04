// rea decompile_all
// name: _AMAuthInstallApImg3WriteSignatureStrippedImage3
// address: 0x27713a
// body: available
// range: 0x27713a-0x2771bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallApImg3WriteSignatureStrippedImage3(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_30;
  undefined8 local_28;
  
  local_30 = 0;
  local_28 = 0;
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  iVar2 = _AMAuthInstallSupportCreateDataFromFileURL(uVar1,&local_30,param_1);
  if (iVar2 == 0) {
    iVar2 = _AMAuthInstallApImg3CreateSignatureStrippedImage3(uVar1,local_30,&local_28);
    if (iVar2 == 0) {
      iVar2 = _AMAuthInstallSupportWriteDataToFileURL(uVar1,local_28,param_2,1);
    }
  }
  _SafeRelease(local_30);
  _SafeRelease(local_28);
  return iVar2;
}

