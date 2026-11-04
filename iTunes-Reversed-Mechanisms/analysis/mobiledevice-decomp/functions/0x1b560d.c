// rea decompile_all
// name: _AMAuthInstallUpdaterCreateLocalResponse
// address: 0x1b560d
// body: available
// range: 0x1b560d-0x1b5712 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallUpdaterCreateLocalResponse(long param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  cfstringStruct *pcVar2;
  undefined1 auVar3 [16];
  undefined8 local_30;
  
  local_30 = 0;
  if (param_1 == 0) {
    _AMAuthInstallUpdaterCreateLocalResponse_cold_2(param_4);
    return local_30;
  }
  if (param_2 == 0) {
    _AMAuthInstallUpdaterCreateLocalResponse_cold_1(param_4);
    return local_30;
  }
  if (*(long *)(param_2 + 0x10) != 0) {
    auVar3 = _CFDictionaryGetCount();
    if (auVar3._0_8_ == 0) {
      iVar1 = _AMAuthInstallUpdaterEmptyTicket(param_1,param_2,auVar3._8_8_,&local_30);
      if (iVar1 == 0) {
        return local_30;
      }
      pcVar2 = &cf__s_failedtocreateemptyticket;
      goto LAB_001b56e2;
    }
  }
  if ((*(code **)(param_2 + 0x48) == (code *)0x0) || (*(long *)(param_2 + 0x28) == 0)) {
    pcVar2 = &cf__s_Localsigningfunctionsarenotimplemented;
    iVar1 = 0xd;
  }
  else {
    if (param_3 == 0) {
      param_3 = *(long *)(param_2 + 0x10);
    }
    iVar1 = (**(code **)(param_2 + 0x48))(param_1,param_2,param_3,&local_30);
    if (iVar1 == 0) {
      return local_30;
    }
    pcVar2 = &cf__s_failedtocreatelocalmanifest;
  }
LAB_001b56e2:
  _AMSupportCreateErrorInternal
            (param_4,&cf_AuthInstallErrorDomain,iVar1,0,pcVar2,
             "AMAuthInstallUpdaterCreateLocalResponse");
  return local_30;
}

