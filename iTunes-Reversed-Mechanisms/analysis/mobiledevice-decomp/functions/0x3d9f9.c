// rea decompile_all
// name: __CompareObjects
// address: 0x3d9f9
// body: available
// range: 0x3d9f9-0x3da7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 __CompareObjects(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  
  puVar1 = PTR__objc_retain_004410a8;
  lVar3 = (*(code *)PTR__objc_retain_004410a8)();
  lVar4 = (*(code *)puVar1)(param_2);
  if ((lVar3 != 0) == (lVar4 != 0)) {
    if (lVar4 != 0 && lVar3 != 0) {
      cVar2 = (*(code *)PTR__objc_msgSend_00441098)(lVar3,"isEqual:",lVar4);
      if (cVar2 == '\0') goto LAB_0003da2d;
    }
    uVar5 = 1;
  }
  else {
LAB_0003da2d:
    uVar5 = 0;
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(lVar4);
  (*(code *)puVar1)(lVar3);
  return uVar5;
}

