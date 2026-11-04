// rea decompile_all
// name: _fRestoreUARPStagedFirmwareVersionResponse
// address: 0x17bf29
// body: available
// range: 0x17bf29-0x17bf62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _fRestoreUARPStagedFirmwareVersionResponse(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_1 != 0) {
    if (param_3 == (undefined4 *)0x0) {
      uVar1 = 0;
      uVar2 = 0;
      uVar3 = 0;
      uVar4 = 0;
    }
    else {
      uVar1 = *param_3;
      uVar2 = param_3[1];
      uVar3 = param_3[2];
      uVar4 = param_3[3];
    }
    *(undefined4 *)(param_1 + 0x7d8) = uVar1;
    *(undefined4 *)(param_1 + 0x7dc) = uVar2;
    *(undefined4 *)(param_1 + 0x7e0) = uVar3;
    *(undefined4 *)(param_1 + 0x7e4) = uVar4;
    if (*(code **)(param_1 + 0x48) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0017bf5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x798),6);
      return;
    }
  }
  return;
}

