// rea decompile_all
// name: _AMAuthInstallMonetCreateReversedMEID
// address: 0x2932a6
// body: available
// range: 0x2932a6-0x29333d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallMonetCreateReversedMEID(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined1 local_37 [6];
  undefined1 local_31;
  
  lVar1 = _CFDataGetLength(param_2);
  uStack_40 = 1;
  lVar3 = 0;
  if ((param_2 != 0) && (lVar1 == 7)) {
    lVar3 = -7;
    puVar4 = &local_31;
    do {
      lVar1 = _CFDataGetBytePtr(param_2);
      *puVar4 = *(undefined1 *)(lVar1 + 7 + lVar3);
      puVar4 = puVar4 + -1;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0);
    lVar1 = _CFDataCreate(param_1,local_37,7);
    lVar3 = 0;
    if (lVar1 == 0) {
      uStack_40 = 2;
    }
    else {
      uVar2 = _CFRetain(lVar1);
      *param_3 = uVar2;
      uStack_40 = 0;
      lVar3 = lVar1;
    }
  }
  _SafeRelease(lVar3);
  return uStack_40;
}

