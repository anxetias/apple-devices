// rea decompile_all
// name: _handleUpdaterOutputRequest
// address: 0xd9d6d
// body: available
// range: 0xd9d6d-0xda145 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xda141 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleUpdaterOutputRequest(AMRestoreMuxedDeviceMessage*) */

undefined8 _handleUpdaterOutputRequest(AMRestoreMuxedDeviceMessage *param_1)

{
  __AMRestoreModeDevice *p_Var1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  int local_c7c;
  undefined8 local_c78;
  undefined8 uStack_c70;
  undefined8 local_c68;
  undefined5 uStack_c60;
  undefined3 uStack_c5b;
  undefined5 uStack_c58;
  uchar local_c48 [1040];
  char local_838 [1024];
  undefined4 local_438;
  undefined1 local_434;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar9 = *(long *)(param_1 + 0x10);
  p_Var1 = *(__AMRestoreModeDevice **)(lVar9 + 0x10);
  lVar4 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_DataPort);
  if (lVar4 == 0) {
    _AMRLog(3,&cf_noportprovidedinrootdatarequestmessage);
    uVar10 = 10;
    goto LAB_000da111;
  }
  ___bzero(&local_438,0x400);
  ___bzero(local_838,0x400);
  ___bzero(local_c48 + 0x10,0x400);
  local_c78 = (ulong)local_c78._4_4_ << 0x20;
  _CFNumberGetValue(lVar4,9,&local_c78);
  local_c7c = _AMRestoreModeDeviceConnectToPortInternal(p_Var1,(ushort)local_c78,0.0,1);
  if (local_c7c < 0) {
    uVar10 = 2;
    goto LAB_000da111;
  }
  _AMRestoreModeDeviceProgressAsync(p_Var1,0x35,-1,(__CFString *)0x0);
  lVar4 = _BOMCopierNew();
  if (lVar4 == 0) {
    uVar10 = 0xf;
    goto LAB_000da111;
  }
  uVar10 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  uVar5 = _CFNumberCreate(uVar10,9,&local_c7c);
  lVar7 = 0;
  lVar6 = _CFDictionaryCreateMutable
                    (uVar10,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar6 == 0) {
    uVar10 = 0x12;
    lVar8 = 0;
  }
  else {
    _CFDictionarySetValue(lVar6,&cf_inputFD,uVar5);
    _CFDictionarySetValue(lVar6,&cf_extractCPIO,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
    _CFRelease(uVar5);
    uVar5 = _CFDictionaryGetValue(*(undefined8 *)(lVar9 + 0x18),&cf_BasebandUpdaterOutputPath);
    lVar7 = _CFURLCreateStringByAddingPercentEscapes(uVar10,uVar5,0,0,0x8000100);
    if (lVar7 == 0) {
      local_434 = 0;
      local_438 = 0x706d742f;
      lVar8 = 0;
LAB_000d9f95:
      lVar9 = _CFDictionaryGetValue(*(undefined8 *)(lVar9 + 0x18),&cf_UUID);
      if (lVar9 == 0) {
        local_c48[0] = '\0';
        local_c48[1] = '\0';
        local_c48[2] = '\0';
        local_c48[3] = '\0';
        local_c48[4] = '\0';
        local_c48[5] = '\0';
        local_c48[6] = '\0';
        local_c48[7] = '\0';
        local_c48[8] = '\0';
        local_c48[9] = '\0';
        local_c48[10] = '\0';
        local_c48[0xb] = '\0';
        local_c48[0xc] = '\0';
        local_c48[0xd] = '\0';
        local_c48[0xe] = '\0';
        local_c48[0xf] = '\0';
        _uuid_generate(local_c48);
        local_c68 = 0;
        uStack_c60 = 0;
        local_c78 = 0;
        uStack_c70 = 0;
        uStack_c5b = 0;
        uStack_c58 = 0;
        _uuid_unparse(local_c48,(char *)&local_c78);
        _snprintf(local_838,0x400,"%s",&local_c78);
      }
      else {
        cVar2 = _CFStringGetCString(lVar9,local_838,0x400,0x8000100);
        if (cVar2 == '\0') goto LAB_000d9fcb;
      }
      uVar10 = 0;
      _snprintf((char *)(local_c48 + 0x10),0x400,"%s/updater_output-%s",&local_438,local_838);
      iVar3 = _BOMCopierCopyWithOptions(lVar4,0,local_c48 + 0x10,lVar6);
      if (iVar3 == 0) {
        _AMRLog(3,&cf_Wroteupdateroutputto_s,local_c48 + 0x10);
      }
      else {
        uVar10 = 0xf;
      }
    }
    else {
      lVar8 = _CFURLCreateWithString(uVar10,lVar7,0);
      if (lVar8 == 0) {
        lVar8 = 0;
        _AMRLog(3,&cf_Value____foroption____couldnotbeconvertedtoCFURL,lVar7,
                &cf_BasebandUpdaterOutputPath);
        uVar10 = 1;
      }
      else {
        cVar2 = _CFURLGetFileSystemRepresentation(lVar8,1,&local_438,0x400);
        if (cVar2 != '\0') goto LAB_000d9f95;
        _AMRLog(3,&cf_CouldnotconvertURL____topath,lVar8);
LAB_000d9fcb:
        uVar10 = 0x1f;
      }
    }
    _CFRelease(lVar6);
  }
  _BOMCopierFree(lVar4);
  if (local_c7c != -1) {
    _close(local_c7c);
  }
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  if (lVar7 != 0) {
    _CFRelease(lVar7);
  }
LAB_000da111:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar10;
}

