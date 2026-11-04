// rea decompile_all
// name: std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>::operator=[abi:ne190102]
// address: 0x2476b6
// body: available
// range: 0x2476b6-0x2476ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject
   const>::operator=[abi:ne190102](std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject const>&&) */

shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const> * __thiscall
std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>::operator=[abi_ne190102_
          (shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const> *this,shared_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar4 = *(undefined4 *)param_1;
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined4 *)(param_1 + 8);
  uVar7 = *(undefined4 *)(param_1 + 0xc);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  plVar3 = *(long **)(this + 8);
  *(undefined4 *)this = uVar4;
  *(undefined4 *)(this + 4) = uVar5;
  *(undefined4 *)(this + 8) = uVar6;
  *(undefined4 *)(this + 0xc) = uVar7;
  if (plVar3 != (long *)0x0) {
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
  return this;
}

