// rea decompile_all
// name: __detachPairedGizmo
// address: 0x130958
// body: available
// range: 0x130958-0x130b97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __detachPairedGizmo(long param_1,int param_2,long param_3,long param_4,undefined8 param_5,
                        undefined8 param_6,long param_7,undefined4 param_8)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    if (param_2 == 6) {
      if ((param_3 != 0) &&
         (cVar2 = _CFDictionaryContainsKey(*(undefined8 *)(param_1 + 0xc0),param_3), cVar2 != '\0'))
      {
        uVar3 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 0xc0),param_3);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,2,"Paired Device (unselected) \'%@\' detached.",uVar3);
        param_8 = 6;
        param_7 = uVar3;
        if ((param_4 != 0) && (*(char *)(param_4 + 0x79) == '\x01')) {
          if (*(code **)(param_4 + 0x80) == (code *)0x0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,0x10,"Callback is NULL while callbacks are enabled.");
          }
          else {
            (**(code **)(param_4 + 0x80))(&param_7,*(undefined8 *)(param_4 + 0x88));
          }
        }
        _CFDictionaryRemoveValue(*(undefined8 *)(param_1 + 0xc0),param_3);
      }
    }
    else {
      lVar1 = *(long *)(param_1 + 0xb8);
      *(undefined8 *)(param_1 + 0xb8) = 0;
      if (lVar1 != 0) {
        *(undefined1 *)(lVar1 + 0x94) = 0;
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,2,"Paired Device \'%@\' detached.",lVar1);
        param_8 = 2;
        param_7 = lVar1;
        if ((param_4 != 0) && (*(char *)(param_4 + 0x79) == '\x01')) {
          if (*(code **)(param_4 + 0x80) == (code *)0x0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,0x10,"Callback is NULL while callbacks are enabled.");
          }
          else {
            (**(code **)(param_4 + 0x80))(&param_7,*(undefined8 *)(param_4 + 0x88));
          }
        }
        _CFRelease(lVar1);
      }
    }
  }
  return;
}

