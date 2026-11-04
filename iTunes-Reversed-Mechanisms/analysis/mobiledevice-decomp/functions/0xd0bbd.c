// rea decompile_all
// name: _copyValueQueryResultUsingSocket
// address: 0xd0bbd
// body: available
// range: 0xd0bbd-0xd0d15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _copyValueQueryResultUsingSocket(__AMRestoreModeDevice*, __CFString const*, int) */

long _copyValueQueryResultUsingSocket
               (__AMRestoreModeDevice *param_1,__CFString *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_1[0x134] == (__AMRestoreModeDevice)0x1) {
    uVar2 = _CFDictionaryCreateMutable
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                       PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    _CFDictionarySetValue(uVar2,&cf_Request,&cf_QueryValue);
    _CFDictionarySetValue(uVar2,&cf_QueryKey,param_2);
    iVar1 = _ramrod_send_message(param_3,uVar2);
    if (iVar1 == 0) {
      lVar3 = _ramrod_receive_message(param_3);
      if (lVar3 == 0) {
        lVar4 = 0;
        _AMRLog(3,&cf_unabletoreceiveresponseto__query,param_2);
      }
      else {
        lVar4 = _CFDictionaryGetValue(lVar3,param_2);
        if (lVar4 == 0) {
          _AMRLog(4,&cf_novaluereturnedfor__,param_2);
        }
        else {
          _CFRetain(lVar4);
          lVar5 = _CFGetTypeID(lVar4);
          lVar6 = _CFStringGetTypeID();
          if (lVar5 == lVar6) {
            _AMRLog(7,&cf_valuequeryfor____returned____,param_2,lVar4);
          }
        }
        _CFRelease(lVar3);
      }
    }
    else {
      lVar4 = 0;
      _AMRLog(3,&cf_unabletosend__query__d,param_2,iVar1);
    }
    _CFRelease(uVar2);
  }
  else {
    lVar4 = 0;
  }
  return lVar4;
}

