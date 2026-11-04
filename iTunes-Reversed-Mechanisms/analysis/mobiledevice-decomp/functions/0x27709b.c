// rea decompile_all
// name: _AMAuthInstallApImg3CreateSignatureStrippedImage3
// address: 0x27709b
// body: available
// range: 0x27709b-0x277139 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallApImg3CreateSignatureStrippedImage3
          (undefined8 param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 local_30;
  
  uStack_40 = 1;
  lVar2 = 0;
  if ((param_2 != 0) && (param_3 != (undefined8 *)0x0)) {
    lVar2 = _CFDataCreateMutableCopy(param_1,0,param_2);
    if (lVar2 == 0) {
      uStack_40 = 2;
      lVar2 = 0;
    }
    else {
      local_30 = _CFDataGetLength(lVar2);
      uVar3 = _CFDataGetBytePtr(lVar2);
      iVar1 = _tss_strip_img3_signature(uVar3,&local_30);
      if (iVar1 == 0) {
        _CFDataSetLength(lVar2,local_30);
        uVar3 = _CFRetain(lVar2);
        *param_3 = uVar3;
        uStack_40 = 0;
      }
      else {
        uStack_40 = 9;
      }
    }
  }
  _SafeRelease(lVar2);
  return uStack_40;
}

