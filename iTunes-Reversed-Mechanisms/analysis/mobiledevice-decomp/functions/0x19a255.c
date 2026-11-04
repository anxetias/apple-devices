// rea decompile_all
// name: _get_rid_for_lun
// address: 0x19a255
// body: available
// range: 0x19a255-0x19a29b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _get_rid_for_lun(uint param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  if (_ace_lookup_complete == '\0') {
    _lookup_updatable_aces();
  }
  uVar1 = 0xe00002c2;
  if ((0 < (int)param_1) && (param_1 <= _num_updatable_aces)) {
    *param_2 = (&_lun_to_rid_lookup)[param_1 - 1];
    uVar1 = 0;
  }
  return uVar1;
}

