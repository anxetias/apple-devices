// rea decompile_all
// name: ___getMGGetStringAnswerSymbolLoc_block_invoke
// address: 0x101ad8
// body: available
// range: 0x101ad8-0x101bae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00101ba5) */

void ___getMGGetStringAnswerSymbolLoc_block_invoke(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = _libMobileGestaltLibraryCore();
  puVar2 = PTR__objc_msgSend_00441098;
  if (lVar3 == 0) {
    uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                      (&_OBJC_CLASS___NSAssertionHandler,"currentHandler");
    uVar5 = (*(code *)puVar2)(&_OBJC_CLASS___NSString,"stringWithUTF8String:",
                              "void *libMobileGestaltLibrary(void)");
    (*(code *)puVar2)(uVar4,"handleFailureInFunction:file:lineNumber:description:",uVar5,
                      &cf_MobileGestaltSupport_m,0x13,&cf__s,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar4 = _dlsym(lVar3,"MGGetStringAnswer");
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar4;
  _getMGGetStringAnswerSymbolLoc_ptr =
       *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18);
  return;
}

