// rea decompile_all
// name: SERestoreInfo::IcefallRestoreInfo::IcefallRestoreInfo
// address: 0x258eaa
// body: available
// range: 0x258eaa-0x258f1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::IcefallRestoreInfo::IcefallRestoreInfo(__CFDictionary const*,
   std::shared_ptr<SERestoreInfo::SEDeviceInfo const>) */

void __thiscall
SERestoreInfo::IcefallRestoreInfo::IcefallRestoreInfo
          (IcefallRestoreInfo *this,undefined8 param_1,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 local_28;
  long *local_20;
  
  local_28 = *param_3;
  local_20 = (long *)param_3[1];
  if (local_20 != (long *)0x0) {
    LOCK();
    local_20[1] = local_20[1] + 1;
    UNLOCK();
  }
  SERestoreInfoBase::SERestoreInfoBase((SERestoreInfoBase *)this,param_1,&local_28);
  if (local_20 != (long *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_20 + 0x10))(local_20);
      std::__shared_weak_count::__release_weak();
    }
  }
  *(undefined ***)this = &PTR__IcefallRestoreInfo_0044f298;
  return;
}

