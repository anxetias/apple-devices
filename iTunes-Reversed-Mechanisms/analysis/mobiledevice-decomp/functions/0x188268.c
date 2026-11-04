// rea decompile_all
// name: _Ace3ExternalDFURestoreInfoOfferFirmwareHandler
// address: 0x188268
// body: available
// range: 0x188268-0x1882cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _Ace3ExternalDFURestoreInfoOfferFirmwareHandler(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 8) != 0)) {
    uVar3 = _CFDataGetBytePtr();
    uVar4 = _CFDataGetLength(*(undefined8 *)(param_1 + 8));
    lVar1 = *(long *)(param_1 + 0x60);
    *(undefined1 *)(*(long *)(lVar1 + 0x28) + 0x7a0) = 0;
    iVar2 = _UarpRestoreStageFirmwareDataBuffer(lVar1,uVar3,uVar4);
    if ((iVar2 != 0) && (*(code **)(param_1 + 0x70) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x001882c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x70))
                (*(undefined8 *)(param_1 + 0x78),"UARP Restore: Failed to offer superbinary");
      return;
    }
  }
  return;
}

