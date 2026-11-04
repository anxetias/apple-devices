// rea decompile_all
// name: __DERDecoderGetDataWithTagCallback
// address: 0x1b8097
// body: available
// range: 0x1b8097-0x1b80e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __DERDecoderGetDataWithTagCallback(undefined8 *param_1,uint *param_2)

{
  undefined8 uVar1;
  
  if ((((*(uint *)((long)param_1 + 0xc) == param_2[5]) && (*(uint *)(param_1 + 2) == param_2[6])) &&
      (*(uint *)((long)param_1 + 0x24) == param_2[0xb])) && (param_2[1] <= *param_2)) {
    *(undefined8 *)(param_2 + 8) = param_1[3];
    param_2[10] = *(uint *)(param_1 + 4);
    *(undefined8 *)(param_2 + 2) = *param_1;
    param_2[4] = *(uint *)(param_1 + 1);
    uVar1 = 0;
  }
  else {
    *param_2 = *param_2 + 1;
    uVar1 = 1;
  }
  return uVar1;
}

