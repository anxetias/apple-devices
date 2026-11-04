// rea decompile_all
// name: _UARPSuperBinaryAddPayloadDataLarge
// address: 0x17a18e
// body: available
// range: 0x17a18e-0x17a1fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_UARPSuperBinaryAddPayloadDataLarge
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4,uint param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    if (param_5 == 0) {
      return 0;
    }
    uVar3 = 0xffff;
    if (param_5 < 0xffff) {
      uVar3 = param_5;
    }
    uVar1 = _UARPSuperBinaryAddPayloadData(param_1,param_2,param_3,uVar2 + param_4,uVar3);
    uVar2 = (ulong)((int)uVar2 + uVar3);
    param_5 = param_5 - uVar3;
  } while ((int)uVar1 == 0);
  return uVar1;
}

