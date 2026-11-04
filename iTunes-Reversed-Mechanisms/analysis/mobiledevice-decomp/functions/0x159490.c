// rea decompile_all
// name: ___thr_AMRestorableDeviceGetDeviceClass
// address: 0x159490
// body: available
// range: 0x159490-0x15960f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x15960b to 0xdf44a _AMRLog (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableDeviceGetDeviceClass(int *param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long extraout_RDX;
  
  lVar1 = *(long *)(param_1 + 2);
  if (*(int *)(lVar1 + 0x118) != 0) {
    *param_1 = *(int *)(lVar1 + 0x118);
    return;
  }
  lVar4 = ___thr_AMRestorableDeviceGetDeviceMapEntry(*(undefined8 *)(lVar1 + 0x20));
  *param_1 = 0;
  if (lVar4 == 0) {
    *(undefined4 *)(lVar1 + 0x118) = 0;
  }
  else {
    lVar5 = _CFDictionaryGetValue(lVar4,&cf_ProductType);
    lVar4 = _CFDictionaryGetValue(lVar4,&cf_SDKPlatform);
    if ((*param_1 == 0) && (lVar5 != 0)) {
      lVar6 = _CFGetTypeID(lVar5);
      lVar7 = _CFStringGetTypeID();
      if (lVar6 == lVar7) {
        lVar6 = 0;
        do {
          _CFStringFind(lVar5,*(undefined8 *)((long)&DAT_0044a1f8 + lVar6),1);
          if (extraout_RDX != 0) {
            *param_1 = *(int *)((long)&_AMRestorableDeviceClassMap + lVar6);
            _AMRLog(6,&cf_Foundadevicewithaknowndeviceregistrationclass_0x_x);
            break;
          }
          lVar6 = lVar6 + 0x18;
        } while (lVar6 != 0x120);
      }
    }
    iVar3 = *param_1;
    if ((iVar3 == 0) && (lVar4 != 0)) {
      lVar5 = _CFGetTypeID(lVar4);
      lVar6 = _CFStringGetTypeID();
      if (lVar5 == lVar6) {
        lVar5 = 0;
        do {
          cVar2 = _CFEqual(lVar4,*(undefined8 *)((long)&DAT_0044a200 + lVar5));
          if (cVar2 != '\0') {
            *param_1 = *(int *)((long)&_AMRestorableDeviceClassMap + lVar5);
            _AMRLog(6,&cf_Foundadevicewithaknowndeviceregistrationclass_0x_x);
            break;
          }
          lVar5 = lVar5 + 0x18;
        } while (lVar5 != 0x120);
      }
      iVar3 = *param_1;
    }
    *(int *)(lVar1 + 0x118) = iVar3;
    if (iVar3 != 0) {
      return;
    }
  }
  _AMRLog(6,&cf_Foundadevicewithanunknownregistrationclass_);
  return;
}

