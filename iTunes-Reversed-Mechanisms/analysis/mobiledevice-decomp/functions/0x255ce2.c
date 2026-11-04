// rea decompile_all
// name: SERestoreInfo::SEFirmwareBase::updateMeasurementDict
// address: 0x255ce2
// body: available
// range: 0x255ce2-0x255e0e inclusive
// range: 0x255e11-0x255e5e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x255e0a to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x255e5a to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::SEFirmwareBase::updateMeasurementDict(__CFDictionary*,
   std::shared_ptr<SERestoreInfo::SEDeviceInfo const>) const */

void __thiscall
SERestoreInfo::SEFirmwareBase::updateMeasurementDict
          (SEFirmwareBase *this,undefined8 param_1,long *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  SEException *pSVar5;
  int iVar6;
  int iVar7;
  long *local_60;
  long *local_58;
  __CFError *local_50;
  __CFError *local_48;
  uint local_34;
  
  iVar6 = (int)((ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10)) >> 5);
  if (iVar6 != 0) {
    local_34 = 0;
    iVar7 = 0;
    do {
      get((int)&local_60);
      plVar1 = local_60;
      if ((long *)*param_3 == (long *)0x0) {
LAB_00255d6e:
        local_50 = (__CFError *)0x0;
        uVar4 = (**(code **)(*local_60 + 0x10))(local_60,param_1,&local_50);
        if (local_50 != (__CFError *)0x0) {
          pSVar5 = (SEException *)___cxa_allocate_exception(0x48);
          SEException::SEException(pSVar5,local_50);
                    /* WARNING: Subroutine does not return */
          ___cxa_throw(pSVar5,&SEException::typeinfo,SEException::~SEException);
        }
        local_34 = (uint)CONCAT71((int7)((ulong)uVar4 >> 8),1);
      }
      else {
        (**(code **)(*(long *)*param_3 + 0x10))(&local_50);
        cVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,&local_50);
        if (local_50 != (__CFError *)0x0) {
          local_48 = local_50;
          operator_delete(local_50);
        }
        if (cVar3 != '\0') goto LAB_00255d6e;
      }
      if (local_58 != (long *)0x0) {
        LOCK();
        plVar1 = local_58 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*local_58 + 0x10))(local_58);
          std::__shared_weak_count::__release_weak();
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar6 != iVar7);
    if ((local_34 & 1) != 0) {
      return;
    }
  }
  pSVar5 = (SEException *)___cxa_allocate_exception(0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (&local_50,"Cannot found any matched delivery object");
  SEException::SEException(pSVar5,(string *)&local_50,0x18,(__CFString *)&cf_SEUpdaterErrorDomain);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(pSVar5,&SEException::typeinfo,SEException::~SEException);
}

