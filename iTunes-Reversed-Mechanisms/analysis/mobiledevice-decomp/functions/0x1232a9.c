// rea decompile_all
// name: PersonalizedImage::dealloc
// address: 0x1232a9
// body: available
// range: 0x1232a9-0x1233e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void PersonalizedImage::dealloc(ID param_1,SEL param_2)

{
  undefined *puVar1;
  objc_super local_28;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    _AMDeviceUnmountImageOnHost();
  }
  if (*(long *)(param_1 + 8) != 0) {
    _CFRelease();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    (*(code *)PTR__objc_release_004410a0)();
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(*(undefined8 *)(param_1 + 0x18));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x20));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x28));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x30));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x38));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x40));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x48));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x50));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x58));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x60));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x68));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x70));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x78));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x80));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x88));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x90));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x98));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0xa0));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0xa8));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0xb8));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0xc0));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 200));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0xd0));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0xd8));
  local_28.super_class = &objc::class_t::PersonalizedImage;
  local_28.receiver = param_1;
  _objc_msgSendSuper2(&local_28,"dealloc");
  return;
}

