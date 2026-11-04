// rea decompile_all
// name: _parse_serial_string_u64
// address: 0x272dda
// body: available
// range: 0x272dda-0x272eaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00272e2e) */
/* WARNING: Removing unreachable block (ram,0x00272e5e) */
/* WARNING: Removing unreachable block (ram,0x00272e44) */
/* WARNING: Removing unreachable block (ram,0x00272e50) */
/* WARNING: Removing unreachable block (ram,0x00272e3e) */
/* WARNING: Removing unreachable block (ram,0x00272e67) */
/* WARNING: Recovered jumptable eliminated as dead code */

undefined8 _parse_serial_string_u64(long param_1,long param_2,long param_3)

{
  undefined8 uStack_30;
  undefined8 local_20;
  
  uStack_30 = 0x1e;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    local_20 = 0;
    uStack_30 = _parse_serial_string(param_1,param_2,&local_20,8);
    if ((int)uStack_30 == 0) {
      if (_inRestore == '\x01') {
        _printf("Unexpected length of field %s in USB string: 0x%lx bytes\n",param_2,0);
      }
      else {
        _uarpLogError(3,"Unexpected length of field %s in USB string: 0x%lx bytes\n",param_2);
      }
      uStack_30 = 0x27;
    }
  }
  return uStack_30;
}

