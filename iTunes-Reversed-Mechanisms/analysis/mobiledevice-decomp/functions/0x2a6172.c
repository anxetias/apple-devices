// rea decompile_all
// name: _DERImg4Decode
// address: 0x2a6172
// body: available
// range: 0x2a6172-0x2a621d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x002a61bc) */
/* WARNING: Removing unreachable block (ram,0x002a61c8) */
/* WARNING: Removing unreachable block (ram,0x002a61d2) */
/* WARNING: Removing unreachable block (ram,0x002a61d7) */
/* WARNING: Removing unreachable block (ram,0x002a61f8) */

undefined8 _DERImg4Decode(long param_1,long param_2)

{
  undefined8 uStack_40;
  
  uStack_40 = 6;
  if (((param_1 != 0) && (param_2 != 0)) && (uStack_40 = _DERDecodeItem(), (int)uStack_40 == 0)) {
    uStack_40 = 2;
  }
  return uStack_40;
}

