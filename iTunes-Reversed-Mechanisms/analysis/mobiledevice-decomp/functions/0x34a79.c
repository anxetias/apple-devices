// rea decompile_all
// name: _PSProbeCopyBSDSerialPath
// address: 0x34a79
// body: available
// range: 0x34a79-0x34afc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _PSProbeCopyBSDSerialPath(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar2 = (*(code *)PTR__objc_retain_004410a8)();
  uVar3 = __bsdSerialForDockChannel(uVar2,0);
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  if (lVar4 == 0) {
    uVar3 = __bsdSerialForUART(uVar2);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  }
  else {
    uVar3 = (*(code *)PTR__objc_retain_004410a8)(lVar4);
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(lVar4);
  uVar5 = __getBSDSerialPath(uVar3);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(uVar3);
  (*(code *)puVar1)(uVar2);
  return uVar5;
}

