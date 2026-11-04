// rea decompile_all
// name: _ccrng_schedule_tree_read
// address: 0xd69d
// body: available
// range: 0xd69d-0xd705 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _ccrng_schedule_tree_read(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  uVar3 = 3;
  uVar2 = 3;
  if (*(char *)(puVar1 + 1) == '\0') {
    uVar2 = (**(code **)*puVar1)(puVar1);
    *(bool *)(puVar1 + 1) = uVar2 == 3;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (*(char *)(puVar1 + 1) == '\0') {
    uVar3 = (**(code **)*puVar1)(puVar1);
    *(bool *)(puVar1 + 1) = uVar3 == 3;
  }
  if (uVar3 < uVar2) {
    uVar3 = uVar2;
  }
  return uVar3;
}

