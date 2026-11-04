// rea decompile_all
// name: _createDataFromFile
// address: 0xdd689
// body: available
// range: 0xdd689-0xdd71a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _createDataFromFile(__CFString const*, __CFData const**) */

undefined4 _createDataFromFile(__CFString *param_1,__CFData **param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  __CFData *local_30;
  
  local_30 = (__CFData *)0x0;
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar3 = _CFURLCreateWithString(uVar1,param_1,0);
  if (lVar3 == 0) {
    uVar2 = 0x12;
  }
  else {
    uVar2 = _AMAuthInstallSupportCreateDataFromMappedFileURL(uVar1,&local_30,lVar3);
    if (local_30 == (__CFData *)0x0) {
      _AMRLog(3,&cf_AMAuthInstallSupportCreateDataFromMappedFileURLfailedwith__d,uVar2);
    }
    else {
      *param_2 = local_30;
    }
    _CFRelease(lVar3);
  }
  return uVar2;
}

