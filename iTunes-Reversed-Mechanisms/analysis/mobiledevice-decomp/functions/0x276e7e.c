// rea decompile_all
// name: _AMAuthInstallApImg3CopyPersonalizedData
// address: 0x276e7e
// body: available
// range: 0x276e7e-0x27709a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallApImg3CopyPersonalizedData
              (long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
              undefined8 *param_6,undefined1 param_7)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  undefined8 *puVar6;
  long local_68;
  undefined8 *local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_48 = 0;
  local_38 = 0;
  local_58 = 0;
  local_60 = param_6;
  local_50 = param_5;
  local_40 = param_2;
  _SavageSafeRetain(param_4);
  _SavageSafeRetain(param_5);
  iVar1 = 1;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) goto LAB_00277054;
  if (param_4 == 0) {
    uVar2 = _CFGetAllocator(param_1);
    iVar1 = _AMAuthInstallApImg3CreateMeasurementsFromURL(uVar2,local_40,&local_68,param_7);
    param_4 = local_68;
    if (iVar1 != 0) {
      param_4 = 0;
      goto LAB_00277054;
    }
  }
  if (param_3 == 0) {
    uVar2 = _CFGetAllocator(param_1);
    param_3 = _AMAuthInstallApCopyImageTag(uVar2,local_40);
    if (param_3 != 0) goto LAB_00276f0d;
  }
  else {
LAB_00276f0d:
    if ((param_5 == 0) &&
       ((iVar1 = _AMAuthInstallApImg3CreateServerRequestDictionary
                           (param_1,param_3,param_4,0,&local_48), iVar1 != 0 ||
        (iVar1 = _AMAuthInstallRequestSendSync(param_1,local_48,&local_50), iVar1 != 0))))
    goto LAB_00277054;
    uVar2 = _CFGetAllocator(param_1);
    iVar1 = _AMAuthInstallPlatformCreateDataFromFileURL(uVar2,&local_38,local_40);
    if (iVar1 != 0) goto LAB_00277054;
    lVar3 = _CFDictionaryGetValue(local_50,param_3);
    if (lVar3 == 0) {
      pcVar5 = "response missing entry \"%@\"";
LAB_0027702a:
      _AMAuthInstallLog(3,"AMAuthInstallApImg3CopyPersonalizedData",pcVar5,param_3);
      puVar6 = &local_38;
    }
    else {
      lVar4 = _CFDictionaryGetValue(lVar3,&cf_Blob);
      if (lVar4 == 0) {
        pcVar5 = "response missing personalization data for \"%@\"";
        goto LAB_0027702a;
      }
      lVar3 = _CFDictionaryGetValue(lVar3,&cf_PartialDigest);
      if (lVar3 == 0) {
        pcVar5 = "response missing partial digest for \"%@\"";
        goto LAB_0027702a;
      }
      puVar6 = &local_58;
      iVar1 = _AMAuthInstallApImg3CreatePersonalizedData(param_1,local_38,lVar4,lVar3,puVar6);
      if (iVar1 != 0) goto LAB_00277054;
    }
    uVar2 = _CFRetain(*puVar6);
    *local_60 = uVar2;
  }
  iVar1 = 0;
LAB_00277054:
  _SafeRelease(local_48);
  _SafeRelease(param_4);
  _SafeRelease(local_50);
  _SafeRelease(local_38);
  _SafeRelease(local_58);
  return iVar1;
}

