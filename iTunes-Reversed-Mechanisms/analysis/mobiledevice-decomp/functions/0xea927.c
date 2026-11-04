// rea decompile_all
// name: __deviceDisconnected
// address: 0xea927
// body: available
// range: 0xea927-0xeaa3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __deviceDisconnected(long param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_38;
  
  iVar2 = _IOIteratorNext(param_2);
  puVar1 = PTR__objc_msgSend_00441098;
  while (iVar2 != 0) {
    local_38 = 0;
    _IORegistryEntryGetRegistryEntryID(iVar2,&local_38);
    _AMRLog(7,&cf_devicedisconnected_isDFU__d__registryID__llx,*(undefined1 *)(param_1 + 4),local_38
           );
    uVar3 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithUnsignedLongLong:",local_38);
    lVar4 = (*(code *)puVar1)(__registryIDToDevice,"objectForKeyedSubscript:",uVar3);
    if (lVar4 == 0) {
      _AMRLog(5,&cf_anunknowndevicewasdisconnected_);
    }
    else {
      (**(code **)(param_3 + 0x10 + (ulong)(*(char *)(param_1 + 4) == '\0') * 8))
                (lVar4,*(undefined8 *)(param_3 + 0x30));
      (*(code *)puVar1)(__registryIDToDevice,"setObject:forKeyedSubscript:",0,uVar3);
    }
    _IOObjectRelease(iVar2);
    iVar2 = _IOIteratorNext(param_2);
  }
  return;
}

