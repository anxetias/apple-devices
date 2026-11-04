// rea decompile_all
// name: __thr_AMRResourceManagerInit
// address: 0x174832
// body: available
// range: 0x174832-0x17493b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x17490a to 0x16f561 _AMRSafeLogAndRelease (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thr_AMRResourceManagerInit(void)

{
  undefined8 uVar1;
  long lVar2;
  dispatch_semaphore_t pdVar3;
  cfstringStruct *pcVar4;
  
  _gResourceData = _calloc(1,0x20);
  if (_gResourceData == (undefined8 *)0x0) {
    pcVar4 = &cf_Failedtoallocate_AMRResourceManagerData;
  }
  else {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar2 = _CFDictionaryCreateMutable
                      (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    _gResourceData[1] = lVar2;
    if (lVar2 == 0) {
      pcVar4 = &cf_Failedtoallocateresourcetocountdict;
    }
    else {
      lVar2 = _CFDictionaryCreateMutable
                        (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      _gResourceData[2] = lVar2;
      if (lVar2 == 0) {
        pcVar4 = &cf_Failedtoallocatedownloadresourcecountdict;
      }
      else {
        lVar2 = _CFDictionaryCreateMutable
                          (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        _gResourceData[3] = lVar2;
        if (lVar2 == 0) {
          pcVar4 = &cf_Failedtoallocatedownloadtolocationdict;
        }
        else {
          pdVar3 = _dispatch_semaphore_create(1);
          *_gResourceData = pdVar3;
          if (pdVar3 == (dispatch_semaphore_t)0x0) {
            pcVar4 = &cf_Failedtoallocatelockforresourcemanager;
          }
          else {
            _didInitSuccessfully = 1;
            pcVar4 = (cfstringStruct *)0x0;
          }
        }
      }
    }
  }
  _AMRSafeLogAndRelease(3,pcVar4);
  return;
}

