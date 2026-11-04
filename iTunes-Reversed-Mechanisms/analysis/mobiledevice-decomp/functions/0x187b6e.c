// rea decompile_all
// name: _Ace3ExternalDFULog
// address: 0x187b6e
// body: available
// range: 0x187b6e-0x187bca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _Ace3ExternalDFULog(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar1 = _CFErrorCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,
                           *(undefined8 *)PTR__kCFErrorDomainPOSIX_00441140,param_3,0);
    *param_2 = uVar1;
  }
  if (*(code **)(param_1 + 0x70) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00187bbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x78),param_4);
    return;
  }
  return;
}

