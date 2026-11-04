// rea decompile_all
// name: ACFURestoreHost::copyDataFromFileDictionary
// address: 0x2a6064
// body: available
// range: 0x2a6064-0x2a610a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFURestoreHost::copyDataFromFileDictionary(__CFString const*, __CFDictionary const*,
   ACFURestoreHost::CopyFirmwareFileDictType) */

long ACFURestoreHost::copyDataFromFileDictionary(long param_1,long param_2,char param_3)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  long local_20;
  
  local_20 = 0;
  if (param_1 == 0) {
    uVar2 = ACFULogging::getLogInstance();
    pcVar3 = "%s::%s: key value not provided\n";
  }
  else {
    if (param_2 != 0) {
      lVar1 = _CFDictionaryGetValue(param_2,param_1);
      if (param_3 == '\0') {
        _AMSupportCreateDataFromFileURL
                  (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,&local_20,lVar1);
        return local_20;
      }
      if (lVar1 != 0) {
        _AMSupportSafeRetain(lVar1);
        return lVar1;
      }
      return 0;
    }
    uVar2 = ACFULogging::getLogInstance();
    pcVar3 = "%s::%s: firmware file dictionary not provided\n";
  }
  ACFULogging::handleMessage(uVar2,2,pcVar3,"ACFURestoreHost","copyDataFromFileDictionary");
  return 0;
}

