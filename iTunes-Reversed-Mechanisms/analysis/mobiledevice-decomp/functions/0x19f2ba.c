// rea decompile_all
// name: _AMAuthInstallBasebandSetVinylData
// address: 0x19f2ba
// body: available
// range: 0x19f2ba-0x19f3dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool _AMAuthInstallBasebandSetVinylData
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  bool bVar3;
  
  bVar3 = true;
  if (param_1 != 0) {
    bVar3 = *(long *)(param_1 + 0x30) == 0;
    if (!bVar3) {
      _SafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x78));
      uVar2 = _CFRetain(param_2);
      lVar1 = *(long *)(param_1 + 0x30);
      *(undefined8 *)(lVar1 + 0x78) = uVar2;
      _SafeRelease(*(undefined8 *)(lVar1 + 0x80));
      uVar2 = _CFRetain(param_3);
      lVar1 = *(long *)(param_1 + 0x30);
      *(undefined8 *)(lVar1 + 0x80) = uVar2;
      _SafeRelease(*(undefined8 *)(lVar1 + 0x88));
      uVar2 = _CFRetain(param_4);
      lVar1 = *(long *)(param_1 + 0x30);
      *(undefined8 *)(lVar1 + 0x88) = uVar2;
      _SafeRelease(*(undefined8 *)(lVar1 + 0x90));
      uVar2 = _CFRetain(param_5);
      lVar1 = *(long *)(param_1 + 0x30);
      *(undefined8 *)(lVar1 + 0x90) = uVar2;
      _SafeRelease(*(undefined8 *)(lVar1 + 0x98));
      uVar2 = _CFRetain(param_6);
      lVar1 = *(long *)(param_1 + 0x30);
      *(undefined8 *)(lVar1 + 0x98) = uVar2;
      _SafeRelease(*(undefined8 *)(lVar1 + 0xa0));
      uVar2 = _CFRetain(param_7);
      lVar1 = *(long *)(param_1 + 0x30);
      *(undefined8 *)(lVar1 + 0xa0) = uVar2;
      _SafeRelease(*(undefined8 *)(lVar1 + 0xa8));
      uVar2 = _CFRetain(param_8);
      *(undefined8 *)(*(long *)(param_1 + 0x30) + 0xa8) = uVar2;
    }
  }
  return bVar3;
}

