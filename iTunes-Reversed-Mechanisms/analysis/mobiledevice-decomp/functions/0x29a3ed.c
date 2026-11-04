// rea decompile_all
// name: _AMAuthInstallProvisioningRequestInfoPlist
// address: 0x29a3ed
// body: available
// range: 0x29a3ed-0x29a5f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallProvisioningRequestInfoPlist(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  long local_40;
  long local_38;
  
  local_38 = 0;
  iVar2 = 1;
  if (param_1 == 0) {
    lVar6 = 0;
    goto LAB_0029a553;
  }
  lVar6 = 0;
  if ((param_2 == (long *)0x0) || (*(long *)(param_1 + 0x30) == 0)) goto LAB_0029a553;
  if (*(long *)(param_1 + 0x138) == 0) {
    iVar2 = _AMAuthInstallProvisioningSendRequest(param_1,&cf_100,&local_38);
    iVar1 = 0;
    if (iVar2 == 0) goto LAB_0029a44b;
    pcVar7 = "AMAuthInstallProvisioningSendRequest failed";
    lVar6 = 0;
  }
  else {
    local_38 = _CFRetain();
    iVar1 = 99;
LAB_0029a44b:
    iVar2 = iVar1;
    if (local_38 == 0) {
      pcVar7 = "responseDict is NULL";
      lVar6 = 0;
    }
    else {
      lVar3 = _CFDictionaryGetValue(local_38,&cf_MEID);
      lVar4 = _CFDictionaryGetValue(local_38,&cf_IMEI);
      iVar2 = 0x11;
      if (lVar3 == 0 && lVar4 == 0) {
        pcVar7 = "both imei and meid are NULL, provisioning failed.";
      }
      else {
        if ((*(long *)(*(long *)(param_1 + 0x30) + 0x30) == 0) ||
           (local_40 = _CFDictionaryGetValue(local_38,&cf_IMEI2), local_40 != 0)) {
          uVar5 = _CFGetAllocator(param_1);
          lVar6 = _CFDictionaryCreateMutable
                            (uVar5,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                             PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          if (lVar6 == 0) {
            iVar2 = 2;
            lVar6 = 0;
            goto LAB_0029a553;
          }
          if (lVar3 != 0) {
            _CFDictionarySetValue(lVar6,&cf_MEID,lVar3);
          }
          if (lVar4 != 0) {
            _CFDictionarySetValue(lVar6,&cf_IMEI,lVar4);
          }
          if (local_40 != 0) {
            _CFDictionarySetValue(lVar6,&cf_IMEI2);
          }
          uVar5 = _CFGetAllocator(param_1);
          lVar3 = _CFPropertyListCreateXMLData(uVar5,lVar6);
          *param_2 = lVar3;
          iVar2 = 0;
          if (lVar3 != 0) goto LAB_0029a553;
          iVar2 = 3;
          pcVar7 = "CFPropertyListCreateXMLData failed.";
          goto LAB_0029a5cd;
        }
        pcVar7 = "imei2 is NULL. provisioning failed.";
      }
      lVar6 = 0;
    }
  }
LAB_0029a5cd:
  _AMAuthInstallLog(3,"AMAuthInstallProvisioningRequestInfoPlist",pcVar7);
LAB_0029a553:
  _SafeRelease(0);
  _SafeRelease(local_38);
  _SafeRelease(lVar6);
  return iVar2;
}

