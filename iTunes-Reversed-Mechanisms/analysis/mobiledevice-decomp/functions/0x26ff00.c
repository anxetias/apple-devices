// rea decompile_all
// name: ___isPlatformOrVariantPlatformVersionAtLeast.cold.2
// address: 0x26ff00
// body: available
// range: 0x26ff00-0x26ff1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x26ff1b to 0x2aa002 ___assert_rtn (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___isPlatformOrVariantPlatformVersionAtLeast_cold_2(void)

{
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("__isPlatformOrVariantPlatformVersionAtLeast","os_version_check.c",0x135,
                "Platform2 == PLATFORM_MACOS && \"unexpected platform\"");
}

