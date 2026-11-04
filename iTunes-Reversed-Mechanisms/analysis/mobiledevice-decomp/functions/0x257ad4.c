// rea decompile_all
// name: SERestoreInfo::SERestoreInfoBase::getTSSResponseTicketTag
// address: 0x257ad4
// body: available
// range: 0x257ad4-0x257b16 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::SERestoreInfoBase::getTSSResponseTicketTag(unsigned int) */

undefined8 SERestoreInfo::SERestoreInfoBase::getTSSResponseTicketTag(uint param_1)

{
  undefined8 *puVar1;
  
  puVar1 = &_kSETagResponseTicket;
  if ((int)param_1 < 200) {
    if ((param_1 == 100) || (param_1 == 0x73)) goto LAB_00257b12;
  }
  else if ((param_1 == 200) || ((param_1 == 0xd2 || (param_1 == 0x20211)))) goto LAB_00257b12;
  puVar1 = &_kSETagResponseTicketEC384;
LAB_00257b12:
  return *puVar1;
}

