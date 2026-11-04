// rea decompile_all
// name: RoseRestoreHost::createRequest
// address: 0x246e66
// body: available
// range: 0x246e66-0x246f08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RoseRestoreHost::createRequest(std::shared_ptr<ACFUFirmware>, ACFURestoreHost::Demotion const&)
    */

long __thiscall
RoseRestoreHost::createRequest(RoseRestoreHost *this,undefined8 *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 local_30;
  long *local_28;
  
  if (*(char *)(param_3 + 0x11) == '\0') {
    local_30 = *param_2;
    local_28 = (long *)param_2[1];
    if (local_28 != (long *)0x0) {
      LOCK();
      local_28[1] = local_28[1] + 1;
      UNLOCK();
    }
    lVar3 = ACFURestoreHost::createRequest((ACFURestoreHost *)this,&local_30,param_3);
    if (local_28 != (long *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (lVar3 != 0) {
      if (*(char *)(param_3 + 0x10) != '\x01') {
        return lVar3;
      }
      _CFDictionaryRemoveValue(lVar3,&cf_Rap_RestoreRTKitOS);
      return lVar3;
    }
    createRequest();
  }
  else {
    createRequest();
  }
  return 0;
}

