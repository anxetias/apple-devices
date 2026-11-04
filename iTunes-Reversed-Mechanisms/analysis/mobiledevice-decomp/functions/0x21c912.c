// rea decompile_all
// name: ACFUFTABFile::isValidFileData
// address: 0x21c912
// body: available
// range: 0x21c912-0x21c951 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUFTABFile::isValidFileData(__CFData const*, bool) [clone .cold.3] */

void ACFUFTABFile::isValidFileData(__CFData *param_1,bool param_2)

{
  undefined8 in_RAX;
  undefined4 uVar2;
  undefined8 uVar1;
  
  uVar2 = (undefined4)((ulong)in_RAX >> 0x20);
  uVar1 = ACFULogging::getLogInstance();
  ACFULogging::handleMessage
            (uVar1,2,
             "%s::%s: too many files specified or there are no files. Limit is %d. Num Files: %d\n",
             "ACFUFTABFile","isValidFileData",0x50,CONCAT44(uVar2,*(undefined4 *)param_1));
  return;
}

