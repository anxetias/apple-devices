// rea decompile_all
// name: _Ace3ExternalDFURestoreInfoOfferFirmware
// address: 0x188196
// body: available
// range: 0x188196-0x188267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x188229 to 0x2a97b6 _CFRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_Ace3ExternalDFURestoreInfoOfferFirmware(void *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if (param_1 != (void *)0x0) {
    if (*(long *)((long)param_1 + 0x60) == 0) {
      pcVar3 = "No available UARP Context";
      uVar2 = 6;
    }
    else {
      lVar1 = _CFDictionaryGetValue(param_2,&cf_ExternalDFUFirmware);
      if (lVar1 == 0) {
        pcVar3 = "Firmware Data is not available in options dict";
        uVar2 = 5;
      }
      else {
        *(long *)((long)param_1 + 8) = lVar1;
        if (*(code **)((long)param_1 + 0x70) != (code *)0x0) {
          (**(code **)((long)param_1 + 0x70))
                    (*(undefined8 *)((long)param_1 + 0x78),"Offer Superbinary.");
        }
        _dispatch_async_f((dispatch_queue_t)**(undefined8 **)((long)param_1 + 0x60),param_1,
                          _Ace3ExternalDFURestoreInfoOfferFirmwareHandler);
        _dispatch_semaphore_wait(*(dispatch_semaphore_t *)((long)param_1 + 0x30),0xffffffffffffffff)
        ;
        if (*(long *)((long)param_1 + 0x20) != 0) {
          uVar2 = _CFDictionaryCreateCopy(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8);
          uVar2 = _CFRetain(uVar2);
          return uVar2;
        }
        pcVar3 = "Failed to receive TssRequest";
        uVar2 = 7;
      }
    }
    _Ace3ExternalDFULog(param_1,param_3,uVar2,pcVar3);
  }
  return 0;
}

