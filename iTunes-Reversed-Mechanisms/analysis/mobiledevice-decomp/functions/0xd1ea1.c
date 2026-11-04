// rea decompile_all
// name: _receive_socket_message
// address: 0xd1ea1
// body: available
// range: 0xd1ea1-0xd209d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xd2012 to 0xd2ae2 _enqueue_message (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _receive_socket_message(void*) */

void _receive_socket_message(void *param_1)

{
  long *plVar1;
  __AMRestoreModeDevice *p_Var2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  AMRestoreMuxedDeviceMessage *pAVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  cfstringStruct *pcVar12;
  
  p_Var2 = *(__AMRestoreModeDevice **)((long)param_1 + 8);
  pAVar7 = (AMRestoreMuxedDeviceMessage *)(**(code **)**(undefined8 **)(p_Var2 + 0x70))();
  if (pAVar7 != (AMRestoreMuxedDeviceMessage *)0x0) {
    uVar8 = _CFDictionaryGetValue(*(long *)(pAVar7 + 8),&cf_MsgType);
    lVar9 = _CFStringCompare(uVar8,&cf_RestoreProtocol,0);
    if (lVar9 == 0) {
      lVar9 = _CFDictionaryGetValue(*(long *)(pAVar7 + 8),&cf_Arguments);
      if (lVar9 == 0) {
LAB_000d1fb9:
        pcVar12 = &cf_Badprotocolupgrademessage;
LAB_000d1fc9:
        uVar8 = 3;
        goto LAB_000d1fce;
      }
      lVar10 = _CFGetTypeID(lVar9);
      lVar11 = _CFDictionaryGetTypeID();
      if (lVar10 != lVar11) goto LAB_000d1fb9;
      lVar9 = _CFDictionaryGetValue(lVar9,&cf_RestoreProtocol);
      if (lVar9 == 0) {
LAB_000d1fc2:
        pcVar12 = &cf_Unexpectedprotocolupgradetype;
        goto LAB_000d1fc9;
      }
      lVar10 = _CFGetTypeID(lVar9);
      lVar11 = _CFStringGetTypeID();
      if (lVar10 != lVar11) goto LAB_000d1fc2;
      _CFRetain(lVar9);
      (**(code **)(*(long *)pAVar7 + 8))(pAVar7);
      plVar3 = *(long **)(p_Var2 + 0x70);
      lVar10 = _CFStringCompare(lVar9,&cf_MuxSocket,0);
      if (lVar10 != 0) {
        iVar6 = (**(code **)(*plVar3 + 0x30))(plVar3);
        if (iVar6 == -1) {
          _AMRLog(3,&cf_Socketisclosed);
        }
        else {
          _AMRLog(3,&cf_Unexpectedprotocol__,lVar9);
        }
LAB_000d207b:
        pAVar7 = (AMRestoreMuxedDeviceMessage *)0x0;
        _AMRLog(3,&cf_Errorprocessingclientrequestforprotocolupgrade);
        _CFRelease(lVar9);
        goto LAB_000d2004;
      }
      _AMRLog(4,&cf_Deviceaskedforlegacyprotocol);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      if (plVar3 == (long *)0x0) goto LAB_000d207b;
      plVar1 = plVar3 + 1;
      *(long **)(p_Var2 + 0x70) = plVar3;
      LOCK();
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar3 + 0x48))(plVar3);
      }
      pAVar7 = (AMRestoreMuxedDeviceMessage *)(**(code **)*plVar3)(plVar3);
      _CFRelease(lVar9);
      if (pAVar7 == (AMRestoreMuxedDeviceMessage *)0x0) goto LAB_000d2001;
    }
    else {
      pcVar12 = &cf_Firstmessageisnotaprotocolupgrade_assumingMuxsocket;
      uVar8 = 7;
LAB_000d1fce:
      _AMRLog(uVar8,pcVar12);
    }
    puVar4 = *(undefined8 **)(p_Var2 + 0x70);
    do {
      cVar5 = _restore_message_is_final(*(__CFDictionary **)(pAVar7 + 8));
      if (cVar5 != '\0') goto LAB_000d2004;
      _enqueue_message(p_Var2,pAVar7);
      pAVar7 = (AMRestoreMuxedDeviceMessage *)(**(code **)*puVar4)(puVar4);
    } while (pAVar7 != (AMRestoreMuxedDeviceMessage *)0x0);
  }
LAB_000d2001:
  pAVar7 = (AMRestoreMuxedDeviceMessage *)0x0;
LAB_000d2004:
  _enqueue_message(p_Var2,pAVar7);
  return;
}

