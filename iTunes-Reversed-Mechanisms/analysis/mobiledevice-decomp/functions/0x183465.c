// rea decompile_all
// name: _uarpPlatformAssetApproveOfferVersion
// address: 0x183465
// body: available
// range: 0x183465-0x1834d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _uarpPlatformAssetApproveOfferVersion(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  if ((*(short *)(param_2 + 0x2e) == 1) && (*(char *)(param_1 + 0x20) != '\0')) {
    iVar1 = _uarpVersionCompare(param_1 + 0x8a,param_2 + 0x34);
    if (iVar1 == 2) {
      uVar2 = 0x3b;
    }
    else if (iVar1 == 0) {
      uVar2 = 0x3c;
    }
    else {
      iVar1 = _uarpVersionCompare(param_1 + 0x9a,param_2 + 0x34);
      uVar3 = 0x3e;
      if (iVar1 != 0) {
        uVar3 = 0;
      }
      uVar2 = 0x3d;
      if (iVar1 != 2) {
        uVar2 = uVar3;
      }
    }
  }
  return uVar2;
}

