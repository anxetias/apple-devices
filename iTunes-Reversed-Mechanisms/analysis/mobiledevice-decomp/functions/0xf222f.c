// rea decompile_all
// name: __pushAndPopFromDict
// address: 0xf222f
// body: available
// range: 0xf222f-0xf22e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __pushAndPopFromDict
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
              undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  cVar2 = _CFDictionaryContainsKey(param_2,param_3);
  if (cVar2 == '\0') {
    iVar5 = 0;
  }
  else {
    lVar1 = *param_4;
    *param_4 = lVar1 + 1;
    iVar5 = 0;
    _AMRLog(6,&cf_Sending__todevice___ldof_ld_,param_3,lVar1 + 1,param_5);
    uVar4 = _CFDictionaryGetValue(param_2,param_3);
    iVar3 = __pushFWToiBoot(param_1,uVar4,param_6);
    if (iVar3 == 0) {
      _CFDictionaryRemoveValue(param_2,param_3);
    }
    else {
      _AMRLog(3,&cf__pushFWToiBootfailedwith_d,iVar3);
      iVar5 = iVar3;
    }
  }
  return iVar5;
}

