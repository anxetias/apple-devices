// rea decompile_all
// name: _UARPLayer2StagedFirmwareVersion2
// address: 0x181d1e
// body: available
// range: 0x181d1e-0x181d8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _UARPLayer2StagedFirmwareVersion2(long param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(code **)(param_1 + 0xe8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00181d45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_1 + 0xe8))(*(undefined8 *)(param_1 + 0x220),param_2,param_3);
    return uVar2;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x208);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = _uarpTagStructPack32(param_2);
      UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x208);
    }
                    /* WARNING: Could not recover jumptable at 0x00181d8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x220),uVar1,param_3);
    return uVar2;
  }
  *param_3 = 0xffffffff;
  param_3[1] = 0xffffffff;
  param_3[2] = 0xffffffff;
  param_3[3] = 0xffffffff;
  return 0;
}

