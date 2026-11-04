// rea decompile_all
// name: AMRLocalUSBInterface::initWithService:
// address: 0xf369a
// body: available
// range: 0xf369a-0xf36f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x14 bytes */

ID AMRLocalUSBInterface::initWithService_(ID param_1,SEL param_2,unsigned_int param_3)

{
  ID IVar1;
  long lVar2;
  objc_super local_28;
  
  local_28.super_class = &objc::class_t::AMRLocalUSBInterface;
  local_28.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_28,"init");
  if (IVar1 != 0) {
    lVar2 = __getInterfaceInterfaceForService(param_3);
    *(long *)(IVar1 + 8) = lVar2;
    if (lVar2 != 0) {
      return IVar1;
    }
    (*(code *)PTR__objc_release_004410a0)(IVar1);
  }
  return 0;
}

