// rea decompile_all
// name: SERestoreInfo::IcefallRestoreInfo::getImagePropertyTag
// address: 0x252f64
// body: available
// range: 0x252f64-0x252fdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::IcefallRestoreInfo::getImagePropertyTag() const */

undefined8 __thiscall
SERestoreInfo::IcefallRestoreInfo::getImagePropertyTag(IcefallRestoreInfo *this)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)(this + 0x10);
  plVar3 = *(long **)(this + 0x18);
  if (plVar3 == (long *)0x0) {
    if (*(char *)(lVar2 + 10) == '\0') {
      puVar4 = &_kSETagMeasurementProdCMAC;
    }
    else {
      puVar4 = &_kSETagMeasurementDevCMAC;
    }
    uVar5 = *puVar4;
  }
  else {
    LOCK();
    plVar3[1] = plVar3[1] + 1;
    UNLOCK();
    if (*(char *)(lVar2 + 10) == '\0') {
      puVar4 = &_kSETagMeasurementProdCMAC;
    }
    else {
      puVar4 = &_kSETagMeasurementDevCMAC;
    }
    uVar5 = *puVar4;
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
  return uVar5;
}

