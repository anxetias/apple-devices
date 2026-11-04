// rea decompile_all
// name: PSIORegistryEntry::initWithIORegistryEntry:freeWhenDone:
// address: 0x324ef
// body: available
// range: 0x324ef-0x32568 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID PSIORegistryEntry::initWithIORegistryEntry_freeWhenDone_
             (ID param_1,SEL param_2,unsigned_int param_3,char param_4)

{
  ID IVar1;
  ID IVar2;
  ID local_30;
  class_t *local_28;
  
  local_28 = &objc::class_t::PSIORegistryEntry;
  local_30 = param_1;
  IVar1 = NSObject::init((ID)&local_30,"init");
  if (IVar1 != 0) {
    if (param_3 == 0) {
      IVar2 = 0;
      goto LAB_00032552;
    }
    *(unsigned_int *)(IVar1 + 8) = param_3;
    if (param_4 == '\0') {
      _IOObjectRetain(param_3);
    }
  }
  IVar2 = (*(code *)PTR__objc_retain_004410a8)(IVar1);
LAB_00032552:
  (*(code *)PTR__objc_release_004410a0)(IVar1);
  return IVar2;
}

