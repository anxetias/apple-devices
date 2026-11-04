// rea decompile_all
// name: _UARPLayer2AssetSetBytesAtOffset2
// address: 0x182392
// body: available
// range: 0x182392-0x1823f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_UARPLayer2AssetSetBytesAtOffset2
          (long param_1,long param_2,long param_3,undefined8 param_4,undefined2 param_5,
          undefined4 param_6)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x28);
  }
  if (*(code **)(param_3 + 0xb0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001823c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_3 + 0xb0))
                      (*(undefined8 *)(param_1 + 0x220),uVar1,*(undefined8 *)(param_3 + 0x2c0),
                       param_4,param_5);
    return uVar1;
  }
  if (*(code **)(param_3 + 0x118) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001823eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_3 + 0x118))
                      (*(undefined8 *)(param_1 + 0x220),*(undefined8 *)(param_3 + 0x2c0),param_4,
                       param_5,param_6);
    return uVar1;
  }
  return 0xe;
}

