// rea decompile_all
// name: ACFURestoreHost::createNum64Num32FromData
// address: 0x215f2a
// body: available
// range: 0x215f2a-0x215f62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x215f5e to 0x216916 ACFULogging::handleMessage (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFURestoreHost::createNum64Num32FromData(__CFData const*, __CFNumber const**) [clone .cold.1] */

void ACFURestoreHost::createNum64Num32FromData(__CFData *param_1,__CFNumber **param_2)

{
  undefined8 uVar1;
  
  uVar1 = ACFULogging::getLogInstance();
  ACFULogging::handleMessage
            (uVar1,2,"%s::%s: data length %ld is not within range\n","ACFURestoreHost",
             "createNum64Num32FromData",param_1);
  return;
}

