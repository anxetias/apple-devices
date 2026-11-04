// rea decompile_all
// name: __AMAuthInstallLocalPolicyCreateServerRequestBase
// address: 0x2918ac
// body: available
// range: 0x2918ac-0x291abb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__AMAuthInstallLocalPolicyCreateServerRequestBase(long param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = 1;
  if ((((param_1 == 0) || (uVar2 = _CFGetAllocator(), *(long *)(param_1 + 0x10) == 0)) ||
      (cVar1 = _AMAuthInstallApIsImg4(param_1), param_2 == 0)) ||
     ((cVar1 == '\0' || (lVar3 = _CFDataGetLength(param_2), lVar3 != 0x30)))) {
    uVar4 = 0;
    uVar5 = 0;
    uVar2 = 0;
  }
  else {
    uVar4 = _CFDictionaryCreateMutable
                      (uVar2,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    uVar5 = _CFDataCreate(uVar2,&_kLocalPolicyDigestSHA384,0x30);
    _CFDictionarySetValue(uVar4,&cf_Digest);
    uVar6 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
    _CFDictionarySetValue(uVar4,&cf_Trusted,uVar6);
    uVar2 = _CFDictionaryCreateMutable
                      (uVar2,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    _CFDictionarySetValue(uVar2,&cf__ApImg4Ticket,uVar6);
    __CFDictionarySetInteger32(uVar2,&cf_ApChipID,*(undefined4 *)(*(long *)(param_1 + 0x10) + 8));
    __CFDictionarySetInteger32(uVar2,&cf_ApBoardID,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0xc))
    ;
    __CFDictionarySetInteger64(uVar2,&cf_ApECID,**(undefined8 **)(param_1 + 0x10));
    __CFDictionarySetBoolean
              (uVar2,&cf_ApProductionMode,*(undefined1 *)(*(long *)(param_1 + 0x10) + 0x14));
    __CFDictionarySetInteger32
              (uVar2,&cf_ApSecurityDomain,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x10));
    __CFDictionarySetBoolean
              (uVar2,&cf_ApSecurityMode,*(undefined1 *)(*(long *)(param_1 + 0x10) + 0x48));
    _CFDictionarySetValue(uVar2,&cf_Ap_LocalPolicy,uVar4);
    _CFDictionarySetValue(uVar2,&cf_Ap_NextStageIM4MHash,param_2);
    if (param_3 != (undefined8 *)0x0) {
      uVar6 = _CFRetain(uVar2);
      *param_3 = uVar6;
    }
    uVar6 = 0;
  }
  _SafeRelease(uVar2);
  _SafeRelease(uVar5);
  _SafeRelease(uVar4);
  return uVar6;
}

