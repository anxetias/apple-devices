// rea decompile_all
// name: -[NSError(FileExistsCheck)_isFileExistsError]
// address: 0x23af80
// body: available
// range: 0x23af80-0x23aff8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __NSError_FileExistsCheck__isFileExistsError_(undefined8 param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  
  puVar1 = PTR__objc_msgSend_00441098;
  uVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"domain");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  cVar2 = (*(code *)puVar1)(uVar3,"isEqualToString:",*(undefined8 *)PTR__NSPOSIXErrorDomain_00441070
                           );
  if (cVar2 == '\0') {
    bVar5 = false;
  }
  else {
    lVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"code");
    bVar5 = lVar4 == 0x11;
  }
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  return bVar5;
}

