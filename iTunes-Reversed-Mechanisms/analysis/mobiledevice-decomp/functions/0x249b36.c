// rea decompile_all
// name: std::shared_ptr<RTKitFirmware>::operator=[abi:ne190102]<RTKitFirmware,std::default_delete<RTKitFirmware>,0>
// address: 0x249b36
// body: available
// range: 0x249b36-0x249bb8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::shared_ptr<RTKitFirmware>&
   std::shared_ptr<RTKitFirmware>::operator=[abi:ne190102]<RTKitFirmware,
   std::default_delete<RTKitFirmware>, 0>(std::unique_ptr<RTKitFirmware,
   std::default_delete<RTKitFirmware> >&&) */

shared_ptr * __thiscall
std::shared_ptr<RTKitFirmware>::
operator=[abi_ne190102_<RTKitFirmware,std::default_delete<RTKitFirmware>,0>
          (shared_ptr<RTKitFirmware> *this,unique_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  lVar2 = *(long *)param_1;
  if (lVar2 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = operator_new(0x20);
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR____shared_ptr_pointer_0044ed48;
    puVar4[3] = lVar2;
  }
  *(undefined8 *)param_1 = 0;
  *(long *)this = lVar2;
  plVar3 = *(long **)(this + 8);
  *(undefined8 **)(this + 8) = puVar4;
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

