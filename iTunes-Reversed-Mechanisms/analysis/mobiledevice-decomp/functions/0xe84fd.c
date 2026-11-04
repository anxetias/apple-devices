// rea decompile_all
// name: RamrodHostMessagePlist::write:maxLength:
// address: 0xe84fd
// body: available
// range: 0xe84fd-0xe85b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

long_long RamrodHostMessagePlist::write_maxLength_
                    (ID param_1,SEL param_2,const_char__ param_3,unsigned_long_long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = _objc_alloc(&_OBJC_CLASS___NSData);
  lVar2 = (*(code *)PTR__objc_msgSend_00441098)(uVar1,"initWithBytes:length:",param_3,param_4);
  if (lVar2 == 0) {
    uVar1 = _objc_alloc(&_OBJC_CLASS___NSError);
    uVar3 = (*(code *)PTR__objc_msgSend_00441098)
                      (uVar1,"initWithDomain:code:userInfo:",
                       *(undefined8 *)PTR__NSPOSIXErrorDomain_00441070,0xc,0);
    uVar1 = *(undefined8 *)(param_1 + _streamError);
    *(undefined8 *)(param_1 + _streamError) = uVar3;
    (*(code *)PTR__objc_release_004410a0)(uVar1);
    param_4 = 0xffffffffffffffff;
  }
  else {
    (*(code *)PTR__objc_msgSend_00441098)(*(undefined8 *)(param_1 + _chunks),"addObject:",lVar2);
  }
  (*(code *)PTR__objc_release_004410a0)(lVar2);
  return param_4;
}

