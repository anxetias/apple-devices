// rea decompile_all
// name: AMRestoreMuxedDeviceRamrodChannel::ReceiveMessage
// address: 0xca3a2
// body: available
// range: 0xca3a2-0xca438 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* AMRestoreMuxedDeviceRamrodChannel::ReceiveMessage() */

undefined8 * __thiscall
AMRestoreMuxedDeviceRamrodChannel::ReceiveMessage(AMRestoreMuxedDeviceRamrodChannel *this)

{
  AMRestoreMuxedDeviceRamrodChannel *pAVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (*(int *)(this + 0x20) < 0) {
    puVar4 = (undefined8 *)0x0;
    _AMRLog(3,&cf_Internalinconsistency_socketisclosed);
  }
  else {
    lVar3 = _ramrod_receive_message();
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = operator_new(0x20);
      LOCK();
      pAVar1 = this + 0x28;
      lVar2 = *(long *)pAVar1;
      *(long *)pAVar1 = *(long *)pAVar1 + 1;
      UNLOCK();
      *puVar4 = &PTR__AMRestoreMuxedDeviceMessage_00445980;
      puVar4[3] = lVar2;
      LOCK();
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      UNLOCK();
      puVar4[2] = this;
      uVar5 = _CFRetain(lVar3);
      puVar4[1] = uVar5;
      *puVar4 = &PTR__AMRestoreMuxedInternalMessage_00445a68;
      _CFRelease(lVar3);
    }
  }
  return puVar4;
}

