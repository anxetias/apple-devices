// rea decompile_all
// name: _copy_decoded_error
// address: 0xfcf44
// body: available
// range: 0xfcf44-0xfd1b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _copy_decoded_error(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  undefined8 local_28;
  
  local_28 = 0;
  if (param_1 == 0) {
    if (_logger == (code *)0x0) {
      return 0;
    }
    pcVar5 = "can\'t decode NULL dictionary";
  }
  else {
    lVar1 = _CFGetTypeID();
    lVar2 = _CFDictionaryGetTypeID();
    if (lVar1 == lVar2) {
      lVar1 = _CFDictionaryGetValue(param_1,&cf_Content);
      if (lVar1 == 0) {
        if (_logger == (code *)0x0) {
          return 0;
        }
        pcVar5 = "malformed error encoded";
      }
      else {
        lVar2 = _CFGetTypeID(lVar1);
        lVar3 = _CFDictionaryGetTypeID();
        if (lVar2 == lVar3) {
          lVar2 = _CFDictionaryGetValue(lVar1,&cf_Code);
          if (lVar2 == 0) {
            if (_logger == (code *)0x0) {
              return 0;
            }
            pcVar5 = "encoded error is missing code";
          }
          else {
            lVar3 = _CFGetTypeID(lVar2);
            lVar4 = _CFNumberGetTypeID();
            if (lVar3 == lVar4) {
              _CFNumberGetValue(lVar2,10,&local_28);
              lVar2 = _CFDictionaryGetValue(lVar1,&cf_Domain);
              if (lVar2 == 0) {
                if (_logger == (code *)0x0) {
                  return 0;
                }
                pcVar5 = "encoded error is missing domain";
              }
              else {
                lVar3 = _CFGetTypeID(lVar2);
                lVar4 = _CFStringGetTypeID();
                if (lVar3 == lVar4) {
                  lVar1 = _CFDictionaryGetValue(lVar1,&cf_UserInfo);
                  if (lVar1 == 0) {
                    lVar1 = 0;
                  }
                  else {
                    lVar3 = _CFGetTypeID(lVar1);
                    lVar4 = _CFDictionaryGetTypeID();
                    if (lVar3 != lVar4) {
                      if (_logger == (code *)0x0) {
                        return 0;
                      }
                      pcVar5 = "can\'t decode unexpected type for user info";
                      goto LAB_000fd19c;
                    }
                    lVar1 = _copy_decoded_dictionary(lVar1);
                  }
                  lVar2 = _CFErrorCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,lVar2,
                                         local_28,lVar1);
                  if ((lVar2 == 0) && (_logger != (code *)0x0)) {
                    (*_logger)("failed to create error from encoded data");
                  }
                  if (lVar1 != 0) {
                    _CFRelease(lVar1);
                    return lVar2;
                  }
                  return lVar2;
                }
                if (_logger == (code *)0x0) {
                  return 0;
                }
                pcVar5 = "can\'t decode unexpected content type for domain";
              }
            }
            else {
              if (_logger == (code *)0x0) {
                return 0;
              }
              pcVar5 = "can\'t decode unexpected content type for error code";
            }
          }
        }
        else {
          if (_logger == (code *)0x0) {
            return 0;
          }
          pcVar5 = "unexpected type was decoded";
        }
      }
    }
    else {
      if (_logger == (code *)0x0) {
        return 0;
      }
      pcVar5 = "can\'t decode unexpected type";
    }
  }
LAB_000fd19c:
  (*_logger)(pcVar5);
  return 0;
}

