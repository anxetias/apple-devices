// rea decompile_all
// name: _copy_decoded_dictionary
// address: 0xfd1b4
// body: available
// range: 0xfd1b4-0xfd2eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _copy_decoded_dictionary(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  undefined8 local_38;
  long lStack_30;
  
  lVar1 = _CFGetTypeID();
  lVar2 = _CFDictionaryGetTypeID();
  if (lVar1 != lVar2) {
    if (_logger == (code *)0x0) {
      return 0;
    }
    pcVar5 = "can\'t decode unexpected type";
LAB_000fd2a0:
    (*_logger)(pcVar5);
    return 0;
  }
  lVar1 = _CFDictionaryCreateMutable
                    (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,1,
                     PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar1 == 0) {
    if (_logger == (code *)0x0) {
      return 0;
    }
    pcVar5 = "failed to allocate decoding dictionary";
    goto LAB_000fd2a0;
  }
  local_38 = 0;
  lStack_30 = 0;
  lVar2 = _CFDictionaryGetValue(param_1,&cf_Content);
  if (lVar2 == 0) {
    if (_logger == (code *)0x0) goto LAB_000fd2d4;
    pcVar5 = "malformed dictionary encoding";
  }
  else {
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFDictionaryGetTypeID();
    if (lVar3 == lVar4) {
      local_38 = CONCAT71(local_38._1_7_,1);
      lStack_30 = lVar1;
      _CFDictionaryApplyFunction(lVar2,__decode_dictionary_applier,&local_38);
      if ((char)local_38 != '\0') {
        return lVar1;
      }
      if (_logger == (code *)0x0) goto LAB_000fd2d4;
      pcVar5 = "failed to decode dictionary content";
    }
    else {
      if (_logger == (code *)0x0) goto LAB_000fd2d4;
      pcVar5 = "can\'t decode unexpected content type";
    }
  }
  (*_logger)(pcVar5);
LAB_000fd2d4:
  _CFRelease(lVar1);
  return 0;
}

