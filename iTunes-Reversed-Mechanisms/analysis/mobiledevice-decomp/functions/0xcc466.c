// rea decompile_all
// name: _make_internal_message
// address: 0xcc466
// body: available
// range: 0xcc466-0xcc51d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _make_internal_message(__AMRestoreModeDevice*, __CFDictionary const*) */

undefined8 * _make_internal_message(__AMRestoreModeDevice *param_1,__CFDictionary *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  
  plVar1 = operator_new(0x20);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x18);
  *plVar1 = (long)&PTR____cxa_pure_virtual_004459a8;
  *(undefined4 *)(plVar1 + 1) = 1;
  lVar2 = _CFRetain(param_1);
  plVar1[2] = lVar2;
  lVar2 = _CFRetain(uVar4);
  plVar1[3] = lVar2;
  *plVar1 = (long)&PTR_ReceiveMessage_00445a90;
  puVar3 = operator_new(0x20);
  *puVar3 = &PTR__AMRestoreMuxedDeviceMessage_00445980;
  puVar3[3] = 0;
  LOCK();
  *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
  UNLOCK();
  puVar3[2] = plVar1;
  uVar4 = _CFRetain(param_2);
  plVar5 = plVar1 + 1;
  puVar3[1] = uVar4;
  *puVar3 = &PTR__AMRestoreMuxedInternalMessage_00445af0;
  LOCK();
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)(*plVar1 + 0x48))(plVar1);
  }
  return puVar3;
}

