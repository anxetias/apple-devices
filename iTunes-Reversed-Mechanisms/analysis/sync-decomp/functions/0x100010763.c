// rea decompile_all
// name: DataClassFilter::initWithDataClassName:entityNames:criteria:
// address: 0x100010763
// body: available
// range: 0x100010763-0x1000107e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x28 bytes */

ID DataClassFilter::initWithDataClassName_entityNames_criteria_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  ID local_38;
  class_t *local_30;
  
  local_30 = &objc::class_t::DataClassFilter;
  local_38 = param_1;
  IVar2 = NSObject::init((ID)&local_38,"init");
  if (IVar2 != 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"copy");
    *(undefined8 *)(IVar2 + 8) = uVar3;
    puVar1 = PTR__objc_retain_100020220;
    uVar3 = (*(code *)PTR__objc_retain_100020220)(param_4);
    *(undefined8 *)(IVar2 + 0x10) = uVar3;
    uVar3 = (*(code *)puVar1)(param_5);
    *(undefined8 *)(IVar2 + 0x18) = uVar3;
  }
  return IVar2;
}

