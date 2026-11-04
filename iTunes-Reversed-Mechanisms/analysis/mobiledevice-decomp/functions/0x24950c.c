// rea decompile_all
// name: _RoseUpdaterGetTags
// address: 0x24950c
// body: available
// range: 0x24950c-0x2495d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _RoseUpdaterGetTags(__CFDictionary *param_1,_func_void_void_ptr_char_ptr *param_2,void *param_3
                        ,undefined8 *param_4)

{
  int iVar1;
  ACFULogging *this;
  long lVar2;
  undefined8 uVar3;
  ACFURestoreHost *local_30;
  
  this = (ACFULogging *)ACFULogging::getLogInstance();
  iVar1 = ACFULogging::initLog(this,param_1,param_2,param_3);
  if (iVar1 == 0) {
    RoseRestoreHost::create((RoseRestoreHost *)&local_30,param_1,(__CFString *)&cf_RoseRestoreInfo);
    if (local_30 != (ACFURestoreHost *)0x0) {
      lVar2 = (*(code *)**(undefined8 **)local_30)(local_30);
      if (lVar2 == 0) {
        uVar3 = ACFULogging::getLogInstance();
        ACFULogging::handleMessage
                  (uVar3,2,"%s::%s: failed to get tags\n","RoseRestoreInfo","RoseUpdaterGetTags");
        uVar3 = ACFURestoreHost::getError(local_30);
        *param_4 = uVar3;
      }
      (**(code **)(*(long *)local_30 + 0x18))(local_30);
      return lVar2;
    }
    _RoseUpdaterGetTags_cold_2(param_4);
  }
  else {
    _RoseUpdaterGetTags_cold_1(iVar1,param_4);
  }
  return 0;
}

