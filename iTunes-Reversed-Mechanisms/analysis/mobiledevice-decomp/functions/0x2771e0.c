// rea decompile_all
// name: _AMAuthInstallApImg3IsFinalized
// address: 0x2771e0
// body: available
// range: 0x2771e0-0x27722f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallApImg3IsFinalized(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = 0;
  iVar1 = _AMAuthInstallSupportCreateDataFromFileURL(param_1,&local_20,param_2);
  if (iVar1 == 0) {
    uVar3 = _CFDataGetBytePtr(local_20);
    iVar2 = _tss_image_is_finalized(uVar3);
    *(bool *)param_3 = iVar2 == 0;
  }
  _SafeRelease(local_20);
  return iVar1;
}

