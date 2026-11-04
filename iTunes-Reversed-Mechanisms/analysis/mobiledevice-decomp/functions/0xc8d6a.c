// rea decompile_all
// name: __AMRTADDeviceCopyNonceWithTag
// address: 0xc8d6a
// body: available
// range: 0xc8d6a-0xc8e82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMRTADDeviceCopyNonceWithTag(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  undefined8 local_30;
  
  *param_3 = 0;
  iVar2 = _libDFU_deviceNonceString(*(undefined8 *)(param_1 + 0x90));
  if (iVar2 == 0) {
    local_30 = 0;
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    sVar3 = _strlen((char *)0x0);
    lVar4 = _CFStringCreateWithBytes(uVar1,0,sVar3,0x8000100,0);
    if (lVar4 == 0) {
      _AMRLog(3,&cf_nonceconversionfailure);
      iVar2 = 0x1f;
    }
    else {
      iVar2 = _copyKeyValuePairsFromIBootString(lVar4,&local_30);
      if (iVar2 == 0) {
        lVar5 = _CFDictionaryGetValue(local_30,param_2);
        *param_3 = lVar5;
        if (lVar5 == 0) {
          _AMRLog(7,&cf___tagnotfound,param_2);
          iVar2 = 6;
        }
        else {
          _CFRetain(lVar5);
          iVar2 = 0;
        }
        _CFRelease(local_30);
      }
      _CFRelease(lVar4);
    }
  }
  else {
    _AMRLog(3,&cf_libDFU_deviceNonceStringreturned_d,iVar2);
    iVar2 = 0x3b;
  }
  return iVar2;
}

