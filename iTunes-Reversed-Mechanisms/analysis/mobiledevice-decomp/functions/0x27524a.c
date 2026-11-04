// rea decompile_all
// name: _AMAuthInstallApCreatePersonalizedResponse
// address: 0x27524a
// body: available
// range: 0x27524a-0x27559b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallApCreatePersonalizedResponse(long param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  undefined8 local_50;
  undefined8 *local_48;
  long local_40;
  char local_32;
  char local_31;
  
  local_48 = param_3;
  cVar1 = _CFDictionaryContainsKey(param_2,&cf_Ap_LocalPolicy);
  local_40 = 0;
  local_50 = 0;
  local_31 = '\0';
  lVar5 = 0;
  iVar3 = 1;
  if (((param_1 == 0) || (param_2 == 0)) || (local_48 == (undefined8 *)0x0)) goto LAB_002754bb;
  iVar2 = _AMAuthInstallApSupportsLocalSigning(param_1,&local_32);
  if ((iVar2 != 0) ||
     ((iVar3 = _AMAuthInstallApSupportsGlobalSigning(param_1,&local_31), iVar3 != 0xd &&
      (iVar3 != 0)))) {
LAB_002754b8:
    lVar5 = 0;
    goto LAB_002754bb;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
    bVar9 = false;
LAB_0027531b:
    if ((local_32 == '\0') || (bVar9)) goto LAB_00275336;
    if (*(char *)(param_1 + 0x1f9) != '\0') goto LAB_00275357;
LAB_00275365:
    iVar3 = _AMAuthInstallApImg4LocalCreateSignedManifest(param_1,param_2,0,0,0,&local_40);
    if (iVar3 != 0) {
      pcVar8 = "hacktivated";
      if (*(char *)(param_1 + 0x1f9) == '\0') {
        pcVar8 = "local";
      }
      pcVar7 = "failed to create a %s Img4 ticket";
LAB_00275513:
      lVar5 = 0;
      _AMAuthInstallLog(3,"_AMAuthInstallApCreatePersonalizedResponseInternal",pcVar7,pcVar8);
      goto LAB_002754bb;
    }
    if (local_40 == 0) {
      pcVar8 = "ticketData is NULL";
LAB_0027553a:
      _AMAuthInstallLog(3,"_AMAuthInstallApCreatePersonalizedResponseInternal",pcVar8);
    }
    else {
      uVar4 = _CFGetAllocator(param_1);
      lVar5 = _CFDictionaryCreateMutable
                        (uVar4,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      if (lVar5 != 0) {
        _CFDictionaryAddValue(lVar5,*(undefined8 *)(param_1 + 0x58),local_40);
        uVar4 = _CFRetain(lVar5);
        *local_48 = uVar4;
        iVar3 = 0;
        goto LAB_002754bb;
      }
    }
  }
  else {
    bVar9 = *(char *)(lVar5 + 0x4e) != '\0';
    if (local_32 == '\0' || !bVar9) goto LAB_0027531b;
    _AMAuthInstallLog(6,"_AMAuthInstallApCreatePersonalizedResponseInternal",
                      "Forcing server signing\n");
    bVar9 = true;
LAB_00275336:
    if ((cVar1 != '\0') && (*(char *)(param_1 + 0x1f9) != '\0')) {
      lVar5 = *(long *)(param_1 + 0x10);
LAB_00275357:
      *(undefined4 *)(lVar5 + 0x44) = 1;
      *(undefined4 *)(lVar5 + 0x70) = 0x180;
      goto LAB_00275365;
    }
    if (local_31 == '\0' || bVar9) {
      uVar4 = _CFGetAllocator(param_1);
      iVar3 = _AMAuthInstallApRemoveInfoDict(uVar4,param_2,&local_50);
      if (iVar3 != 0) {
        lVar5 = 0;
        _AMAuthInstallLog(3,"_AMAuthInstallApCreatePersonalizedResponseInternal",
                          "could not remove info dicts from request");
        goto LAB_002754bb;
      }
      iVar3 = _AMAuthInstallRequestSendSync(param_1,local_50,local_48);
      if (iVar3 == 0) {
        iVar3 = 0;
        goto LAB_002754b8;
      }
      pcVar8 = (char *)_AMAuthInstallGetLocalizedStatusString(param_1,iVar3);
      pcVar7 = "server request error: %@";
      goto LAB_00275513;
    }
    lVar6 = _CFRetain(*(undefined8 *)(param_1 + 0x28));
    local_40 = lVar6;
    if (lVar6 == 0) {
      pcVar8 = "global ticketData is NULL";
      goto LAB_0027553a;
    }
    uVar4 = _CFGetAllocator(param_1);
    lVar5 = _CFDictionaryCreateMutable
                      (uVar4,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar5 != 0) {
      _CFDictionaryAddValue(lVar5,*(undefined8 *)(param_1 + 0x58),lVar6);
      uVar4 = _CFRetain(lVar5);
      *local_48 = uVar4;
      _AMAuthInstallLog(6,"_AMAuthInstallApCreatePersonalizedResponseInternal",
                        "Using global signing");
      iVar3 = 0;
      goto LAB_002754bb;
    }
  }
  lVar5 = 0;
  iVar3 = 2;
LAB_002754bb:
  _SafeRelease(lVar5);
  _SafeRelease(local_40);
  _SafeRelease(local_50);
  return iVar3;
}

