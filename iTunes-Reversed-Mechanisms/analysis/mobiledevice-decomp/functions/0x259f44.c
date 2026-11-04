// rea decompile_all
// name: SERestoreInfo::getValueFromCFDict
// address: 0x259f44
// body: available
// range: 0x259f44-0x25a026 inclusive
// range: 0x25a02c-0x25a0de inclusive
// range: 0x25a0e1-0x25a12b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x25a022 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x25a0da to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x25a127 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::getValueFromCFDict(__CFDictionary const*, __CFString const*, unsigned long, void*,
   unsigned int) */

void SERestoreInfo::getValueFromCFDict
               (__CFDictionary *param_1,__CFString *param_2,ulong param_3,void *param_4,uint param_5
               )

{
  ulong uVar1;
  SEException *pSVar2;
  runtime_error *this;
  char cVar3;
  undefined8 *puVar4;
  bool bVar5;
  uint uVar7;
  long local_50 [3];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  void *pvVar6;
  
  if ((((param_1 != (__CFDictionary *)0x0) && (param_2 != (__CFString *)0x0)) &&
      (param_4 != (void *)0x0)) && (param_5 != 0)) {
    local_50[0] = 0;
    pvVar6 = param_4;
    uVar7 = param_5;
    cVar3 = _CFDictionaryGetValueIfPresent();
    if ((cVar3 != '\0') && (local_50[0] != 0)) {
      uVar1 = _CFGetTypeID();
      if (uVar1 == param_3) {
        uVar1 = _CFNumberGetTypeID();
        bVar5 = param_5 < 4 || uVar1 != param_3;
        pvVar6 = (void *)CONCAT71((int7)((ulong)pvVar6 >> 8),bVar5);
        if (bVar5) {
          uVar1 = _CFBooleanGetTypeID();
          if (uVar1 == param_3) {
            cVar3 = _CFBooleanGetValue(local_50[0]);
            *(bool *)param_4 = cVar3 != '\0';
          }
          else {
            uVar1 = _CFDataGetTypeID();
            if (uVar1 != param_3) {
              pSVar2 = (SEException *)___cxa_allocate_exception(0x48);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                        (&local_38,"missing key ");
              SEException::SEException
                        (pSVar2,(string *)&local_38,2,(__CFString *)&cf_SEUpdaterErrorDomain);
                    /* WARNING: Subroutine does not return */
              ___cxa_throw(pSVar2,&SEException::typeinfo,SEException::~SEException);
            }
            getValueFromCFDict((__CFDictionary *)local_50,(__CFString *)(ulong)param_5,
                               (ulong)param_4,pvVar6,uVar7);
          }
        }
        else {
          cVar3 = _CFNumberGetValue(local_50[0],3,param_4);
          if (cVar3 == '\0') {
            pSVar2 = (SEException *)___cxa_allocate_exception(0x48);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                      (&local_38,"Cannot read CFNumber ");
            SEException::SEException
                      (pSVar2,(string *)&local_38,2,(__CFString *)&cf_SEUpdaterErrorDomain);
                    /* WARNING: Subroutine does not return */
            ___cxa_throw(pSVar2,&SEException::typeinfo,SEException::~SEException);
          }
        }
      }
    }
    return;
  }
  this = (runtime_error *)___cxa_allocate_exception(0x10);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (local_50,"Assertion: ");
  puVar4 = (undefined8 *)std::string::append((char *)local_50);
  local_28 = puVar4[2];
  local_38 = *puVar4;
  uStack_30 = puVar4[1];
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  std::runtime_error::runtime_error(this,(string *)&local_38);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(this,PTR_typeinfo_00441260,PTR__runtime_error_00441248);
}

