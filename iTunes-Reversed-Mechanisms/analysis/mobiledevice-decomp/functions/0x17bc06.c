// rea decompile_all
// name: _fRestoreUARPApplyStagedAssetsResponse
// address: 0x17bc06
// body: available
// range: 0x17bc06-0x17bc86 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_fRestoreUARPApplyStagedAssetsResponse
          (long param_1,undefined8 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0x1e;
  }
  else {
    uVar1 = 0;
    _CoreUARPRestoreLogDebug
              (param_1,1,"UARP Restore: Apply Staged Assets; status <0x%04x>, flags <0x%04x>",
               param_4,param_3);
    if (*(code **)(param_1 + 0x18) == (code *)0x0) {
      uVar1 = 0;
      _CoreUARPRestoreLogError
                (param_1,1,"UARP Restore: %s: fLayer3ApplyStatus is NULL",
                 "CoreUARPRestoreAssetApplyStatus");
    }
    else {
      (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x798),param_4,param_3);
    }
  }
  return uVar1;
}

