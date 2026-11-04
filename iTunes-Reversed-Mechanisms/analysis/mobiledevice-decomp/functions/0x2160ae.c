// rea decompile_all
// name: ACFUError::getCFError
// address: 0x2160ae
// body: available
// range: 0x2160ae-0x21621f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUError::getCFError() */

long __thiscall ACFUError::getCFError(ACFUError *this)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  char *this_00;
  
  if (**(long **)(this + 8) == (*(long **)(this + 8))[1]) {
    uVar2 = ACFULogging::getLogInstance();
    ACFULogging::handleMessage
              (uVar2,4,"%s::%s: Looks like there is no error present; Nothing to be done here.\n",
               "ACFUError","getCFError");
    return 0;
  }
  uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar1 = _CFDictionaryCreateMutable
                    (uVar2,2,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  lVar5 = *(long *)(*(long *)(this + 8) + 8);
  if ((*(byte *)(lVar5 + -0x28) & 1) == 0) {
    lVar5 = lVar5 + -0x27;
  }
  else {
    lVar5 = *(long *)(lVar5 + -0x18);
  }
  lVar5 = _CFStringCreateWithCString(uVar2,lVar5,0x8000100);
  if (lVar5 == 0) {
    this_00 = "%s::%s: failed to create CFString for error object\n";
  }
  else {
    _CFDictionaryAddValue(lVar1,*(undefined8 *)PTR__kCFErrorDescriptionKey_00441138,lVar5);
    lVar4 = *(long *)(*(long *)(this + 8) + 8);
    if (*(long *)(lVar4 + -8) != 0) {
      uVar3 = ACFULogging::getLogInstance();
      ACFULogging::handleMessage
                (uVar3,3,"%s::%s: Populating underlying error\n","ACFUError","getCFError");
      _CFDictionaryAddValue
                (lVar1,*(undefined8 *)PTR__kCFErrorUnderlyingErrorKey_00441150,
                 *(undefined8 *)(*(long *)(*(long *)(this + 8) + 8) + -8));
      lVar4 = *(long *)(*(long *)(this + 8) + 8);
    }
    lVar4 = _CFErrorCreate(uVar2,*(undefined8 *)this,*(undefined8 *)(lVar4 + -0x10),lVar1);
    if (lVar4 != 0) goto LAB_002161e0;
    this_00 = "%s::%s: failed to create CFError object\n";
  }
  getCFError((ACFUError *)this_00);
  lVar4 = 0;
LAB_002161e0:
  if (lVar1 != 0) {
    _CFRelease(lVar1);
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  return lVar4;
}

