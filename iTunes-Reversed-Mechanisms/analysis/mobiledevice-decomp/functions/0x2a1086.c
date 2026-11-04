// rea decompile_all
// name: _AMAuthInstallVinylIsLegacyChipId
// address: 0x2a1086
// body: available
// range: 0x2a1086-0x2a1113 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallVinylIsLegacyChipId(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_30;
  
  uStack_30 = 1;
  if (((param_1 == 0) || (*(long *)(param_1 + 0x30) == 0)) ||
     (*(long *)(*(long *)(param_1 + 0x30) + 0xa0) == 0)) {
    lVar3 = 0;
  }
  else {
    uVar1 = _CFGetAllocator(param_1);
    lVar2 = _CFNumberCreate(uVar1,1,&_kAMAuthInstallVinylLegacyChipIdCutoff);
    lVar3 = 0;
    if (lVar2 == 0) {
      uStack_30 = 2;
    }
    else {
      lVar3 = _CFNumberCompare(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0xa0),lVar2,0);
      *(bool *)param_2 = lVar3 == -1;
      uStack_30 = 0;
      lVar3 = lVar2;
    }
  }
  _SafeRelease(lVar3);
  return uStack_30;
}

