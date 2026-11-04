// rea decompile_all
// name: _AMAuthInstallCryptoRegisterCertFromPEMBuffer
// address: 0x28fa47
// body: available
// range: 0x28fa47-0x28fac6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallCryptoRegisterCertFromPEMBuffer
              (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long local_38;
  
  local_38 = 0;
  uVar3 = _CFGetAllocator();
  iVar2 = _AMAuthInstallCryptoCreateDataFromPEMBuffer(uVar3,param_3,param_4,&local_38);
  lVar1 = local_38;
  if (iVar2 == 0) {
    if (local_38 == 0) {
      iVar2 = 0xe;
    }
    else {
      _CFDictionarySetValue(*(undefined8 *)(param_1 + 0x1a0),param_2,local_38);
      iVar2 = 0;
    }
  }
  _SafeRelease(lVar1);
  return iVar2;
}

