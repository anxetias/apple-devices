// rea decompile_all
// name: SERestoreInfo::IcefallRestoreInfo::getImageTag
// address: 0x252fdc
// body: available
// range: 0x252fdc-0x253042 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x25303c to 0x2aa038 ___cxa_guard_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SERestoreInfo::IcefallRestoreInfo::getImageTag() const [clone .cold.1] */

void SERestoreInfo::IcefallRestoreInfo::getImageTag(void)

{
  int iVar1;
  
  iVar1 = ___cxa_guard_acquire(&getImageTag()::_imageTags);
  if (iVar1 != 0) {
    __imageTags = &cf_SE_Bootloader;
    _DAT_004a6908 = &cf_SE_Firmware;
    _DAT_004a6910 = &cf_SE_MigrationOS;
    _DAT_004a6918 = &cf_SE_OS;
    ___cxa_guard_release(&getImageTag()::_imageTags);
    return;
  }
  return;
}

