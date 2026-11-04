// rea decompile_all
// name: _AMSupportCreateMergedDictionary
// address: 0x262528
// body: available
// range: 0x262528-0x2627a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2627a3 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMSupportCreateMergedDictionary(undefined8 param_1,long param_2,long param_3,long *param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_40 = 0;
  iVar2 = 1;
  if (((param_2 != 0) && (param_3 != 0)) && (param_4 != (long *)0x0)) {
    lVar3 = _CFDictionaryGetCount(param_3);
    pvVar4 = _malloc(lVar3 * 8);
    iVar2 = 2;
    if (pvVar4 != (void *)0x0) {
      pvVar5 = _malloc(lVar3 * 8);
      if (pvVar5 == (void *)0x0) {
        _free(pvVar4);
      }
      else {
        _CFDictionaryGetKeysAndValues(param_3,pvVar4,pvVar5);
        if (lVar3 < 1) {
          iVar2 = 0;
          lVar7 = 0;
          lVar6 = 0;
        }
        else {
          lVar9 = 0;
          do {
            uVar1 = *(undefined8 *)((long)pvVar4 + lVar9 * 8);
            if (*param_4 == 0) {
              lVar6 = _CFDictionaryCreateMutableCopy(param_1,0,param_2);
              *param_4 = lVar6;
            }
            lVar6 = _CFGetTypeID(*(undefined8 *)((long)pvVar5 + lVar9 * 8));
            lVar7 = _CFDictionaryGetTypeID();
            if (lVar6 == lVar7) {
              lVar7 = _CFDictionaryGetValue(param_2,uVar1);
              if (lVar7 == 0) {
                lVar7 = _CFDictionaryCreateMutable
                                  (param_1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                   PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                if (lVar7 == 0) goto LAB_00262784;
              }
              else {
                _CFRetain(lVar7);
                lVar6 = _CFGetTypeID(lVar7);
                lVar8 = _CFDictionaryGetTypeID();
                if (lVar6 != lVar8) {
                  iVar2 = 8;
                  lVar6 = local_40;
                  goto LAB_00262736;
                }
              }
              iVar2 = _AMSupportCreateMergedDictionary
                                (param_1,lVar7,*(undefined8 *)((long)pvVar5 + lVar9 * 8),&local_40);
              lVar6 = local_40;
              if (iVar2 != 0) goto LAB_00262736;
              _CFDictionarySetValue(*param_4,uVar1,local_40);
            }
            else {
              lVar6 = *param_4;
              if (local_40 != 0) {
                if (lVar6 != 0) {
                  _CFRelease();
                }
                lVar6 = _CFDictionaryCreateMutableCopy(param_1,0,local_40);
                *param_4 = lVar6;
              }
              if (lVar6 == 0) {
LAB_00262784:
                lVar7 = 0;
                iVar2 = 2;
                lVar6 = local_40;
                goto LAB_00262736;
              }
              _CFDictionarySetValue(lVar6,uVar1,*(undefined8 *)((long)pvVar5 + lVar9 * 8));
              lVar7 = 0;
            }
            if (local_40 != 0) {
              _CFRelease();
              local_40 = 0;
            }
            if (lVar7 != 0) {
              _CFRelease(lVar7);
            }
            lVar9 = lVar9 + 1;
          } while (lVar3 != lVar9);
          iVar2 = 0;
          lVar7 = 0;
          lVar6 = local_40;
        }
LAB_00262736:
        _free(pvVar4);
        _free(pvVar5);
        if (lVar6 != 0) {
          _CFRelease(lVar6);
        }
        if (lVar7 != 0) {
          _CFRelease(lVar7);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

