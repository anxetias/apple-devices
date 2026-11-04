// rea decompile_all
// name: _handleAttestationMessage
// address: 0xd6043
// body: available
// range: 0xd6043-0xd634b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xd6347 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleAttestationMessage(AMRestoreMuxedDeviceMessage*) */

undefined8 _handleAttestationMessage(AMRestoreMuxedDeviceMessage *param_1)

{
  __AMRestoreModeDevice *p_Var1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_b8;
  __AMRestoreModeDevice *local_b0;
  undefined8 local_a8;
  char local_9a [34];
  long *local_78;
  undefined **local_68;
  long *local_60;
  __AMRestoreModeDevice **local_58;
  undefined8 *local_50;
  undefined ***local_48;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar3 = *(long *)(param_1 + 0x10);
  local_b8 = lVar3;
  lVar2 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_RestoreAttestationState);
  if (lVar2 == 0) {
    _AMRLog(3,&cf_Unabletoreadrestoreattestationstatefromdevice);
LAB_000d6109:
    uVar6 = 10;
    goto LAB_000d6325;
  }
  p_Var1 = *(__AMRestoreModeDevice **)(lVar3 + 0x10);
  local_b0 = p_Var1;
  lVar3 = _CFStringCompare(lVar2,&cf_RestoreShouldAttest,0);
  if (lVar3 == 0) {
    uVar5 = _CFDictionaryCreateMutable
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                       PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    local_a8 = *(undefined8 *)PTR__kCFBooleanFalse_00441108;
    local_50 = &local_a8;
    local_68 = &PTR____func_004462c0;
    local_60 = &local_b8;
    local_58 = &local_b0;
    local_48 = &local_68;
    __AMRestoreModeDevice::with_amai_locked(p_Var1,&local_68);
    if (local_48 == &local_68) {
      lVar3 = 0x20;
LAB_000d62de:
      (**(code **)((long)*local_48 + lVar3))();
    }
    else {
      lVar3 = 0x28;
      if (local_48 != (undefined ***)0x0) goto LAB_000d62de;
    }
    _CFDictionarySetValue(uVar5,&cf_RestoreShouldAttest,local_a8);
    (**(code **)(*(long *)param_1 + 0x10))(param_1,uVar5);
    _CFRelease(uVar5);
  }
  else {
    lVar3 = _CFStringCompare(lVar2,&cf_AttestationIssued,0);
    if (lVar3 != 0) {
      lVar3 = _CFStringCompare(lVar2,&cf_AttestationError,0);
      if (lVar3 == 0) {
        uVar5 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_Error);
        if (*(long *)(p_Var1 + 0x1b8) != 0) {
          lVar3 = _CFGetTypeID(uVar5);
          lVar2 = _CFErrorGetTypeID();
          if (lVar3 == lVar2) {
            _CFDictionarySetValue(*(undefined8 *)(p_Var1 + 0x1b8),&cf_AttestationError,uVar5);
          }
        }
        uVar6 = 0;
        _AMRLog(3,&cf_Errorgeneratingrestoreattestationcertificate___,uVar5);
        goto LAB_000d6325;
      }
      _AMRLog(3,&cf_Unexpectedattestationstate__,lVar2);
      goto LAB_000d6109;
    }
    local_a8 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_Certificates);
    local_9a[1] = 0;
    lVar3 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_AttestationUseSCRT);
    if (lVar3 == *(long *)PTR__kCFBooleanTrue_00441110) {
      local_9a[1] = 1;
    }
    local_9a[0] = '\0';
    plVar4 = operator_new(0x30);
    *plVar4 = (long)&PTR____func_00446340;
    plVar4[1] = (long)local_9a;
    plVar4[2] = (long)&local_b8;
    plVar4[3] = (long)&local_b0;
    plVar4[4] = (long)(local_9a + 1);
    plVar4[5] = (long)&local_a8;
    local_78 = plVar4;
    __AMRestoreModeDevice::with_amai_locked(p_Var1);
    (**(code **)(*plVar4 + 0x28))(plVar4);
    if (local_9a[0] == '\x01') {
      _AMRLog(6,&cf_RestorecertificateauthenticatedDFUattestation);
    }
    else {
      _AMRLog(3,&cf_RestorecertificatedoesnotattesttoDFUrestore);
    }
  }
  uVar6 = 0;
LAB_000d6325:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

