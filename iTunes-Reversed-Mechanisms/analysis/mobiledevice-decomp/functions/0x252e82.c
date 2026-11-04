// rea decompile_all
// name: SERestoreInfo::P73BaseRestoreInfo::getTagsInBI
// address: 0x252e82
// body: available
// range: 0x252e82-0x252ec6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x252ec0 to 0x2aa038 ___cxa_guard_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SERestoreInfo::P73BaseRestoreInfo::getTagsInBI() const [clone .cold.1] */

void SERestoreInfo::P73BaseRestoreInfo::getTagsInBI(void)

{
  int iVar1;
  
  iVar1 = ___cxa_guard_acquire(&getTagsInBI()::_tagsInBI);
  if (iVar1 != 0) {
    __tagsInBI = &cf_SE_ChipID;
    _DAT_004a68e8 = &cf_SE_UpdatePayload;
    ___cxa_guard_release(&getTagsInBI()::_tagsInBI);
    return;
  }
  return;
}

