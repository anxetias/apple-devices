// rea decompile_all
// name: ___thr_AMRestorableDeviceIsInDeviceClass
// address: 0x164a4f
// body: available
// range: 0x164a4f-0x164a91 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableDeviceIsInDeviceClass(long param_1)

{
  uint uVar1;
  uint local_30 [2];
  undefined8 local_28;
  
  local_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(uint *)(param_1 + 4);
  local_30[0] = 0;
  ___thr_AMRestorableDeviceGetDeviceClass(local_30);
  *(bool *)param_1 = (local_30[0] & ~uVar1) == 0;
  return;
}

