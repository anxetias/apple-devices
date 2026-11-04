// rea decompile_all
// name: _AMSupportCopySetValueAtTypedKeypath
// address: 0x2614ce
// body: available
// range: 0x2614ce-0x261913 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x26190f to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMSupportCopySetValueAtTypedKeypath(long param_1,long param_2,long param_3,long *param_4)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uStack_60;
  undefined4 local_44;
  long local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_40 = 0;
  uStack_60 = 1;
  if (((param_1 == 0) || (param_4 == (long *)0x0)) || (*param_4 == 0)) goto LAB_0026186a;
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar4 = _CFStringCreateArrayBySeparatingStrings(uVar1,param_1,&cf__);
  if (lVar4 == 0) {
    uStack_60 = 2;
    goto LAB_0026186a;
  }
  lVar5 = _CFArrayGetCount(lVar4);
  if (lVar5 < 1) {
    uStack_60 = 2;
  }
  else {
    lVar5 = _CFArrayGetCount(lVar4);
    if (lVar5 < 4) {
      if ((param_2 != 0) || (lVar5 = _CFArrayGetCount(lVar4), 1 < lVar5)) {
        lVar5 = _CFArrayGetCount(lVar4);
        if (lVar5 == 1) {
          uVar6 = 0;
LAB_002615b5:
          uVar6 = _CFArrayGetValueAtIndex(lVar4,uVar6);
        }
        else {
          lVar5 = _CFArrayGetCount(lVar4);
          if (lVar5 == 2) {
            param_2 = _CFArrayGetValueAtIndex(lVar4,0);
            uVar6 = 1;
            goto LAB_002615b5;
          }
          lVar5 = _CFArrayGetCount(lVar4);
          if (lVar5 == 3) {
            param_2 = _CFArrayGetValueAtIndex(lVar4,0);
            uVar6 = _CFArrayGetValueAtIndex(lVar4,2);
            param_3 = _CFArrayGetValueAtIndex(lVar4,1);
          }
          else {
            param_2 = 0;
            uVar6 = 0;
          }
        }
        if (param_3 == 0) {
          pcVar7 = "No default type, nor one specified in argument";
LAB_002618bb:
          _AMSupportLogInternal(3,"AMSupportCopySetValueAtTypedKeypath",pcVar7);
          uStack_60 = 1;
          goto LAB_00261854;
        }
        lVar5 = _CFStringCompare(param_3,&cf_sint32,1);
        if (lVar5 == 0) {
          local_44 = 0;
          cVar2 = _AMSupportCFStringToUInt32(uVar6);
          if (cVar2 == '\0') {
            pcVar7 = "Failed to convert argument to uint32";
          }
          else {
            local_40 = _CFNumberCreate(uVar1,3,&local_44);
            if (local_40 != 0) goto LAB_00261840;
            pcVar7 = "tmpResult (Number) is NULL";
          }
LAB_0026178a:
          _AMSupportLogInternal(3,"AMSupportCopySetValueAtTypedKeypath",pcVar7);
          uStack_60 = 99;
        }
        else {
          lVar5 = _CFStringCompare(param_3,&cf_data,1);
          if (lVar5 == 0) {
            iVar3 = _AMSupportCopyDataFromHexString(uVar1,uVar6,&local_40);
            if ((iVar3 != 0) || (local_40 == 0)) {
              pcVar7 = "Failed to parse hex encoded data.";
              goto LAB_002618bb;
            }
          }
          else {
            lVar5 = _CFStringCompare(param_3,&cf_bool,1);
            if (lVar5 == 0) {
              lVar5 = _CFStringCompare(uVar6,&cf_yes,1);
              if (((lVar5 == 0) || (lVar5 = _CFStringCompare(uVar6,&cf_true,1), lVar5 == 0)) ||
                 (lVar5 = _CFStringCompare(uVar6,&cf_1,0), lVar5 == 0)) {
                local_40 = *(long *)PTR__kCFBooleanTrue_00441110;
              }
              else {
                lVar5 = _CFStringCompare(uVar6,&cf_no,1);
                if (((lVar5 != 0) && (lVar5 = _CFStringCompare(uVar6,&cf_false,1), lVar5 != 0)) &&
                   (lVar5 = _CFStringCompare(uVar6,&cf_0,0), lVar5 != 0)) {
                  pcVar7 = "Unrecognized Boolean value. (yes/no, true/false, 1/0)";
                  goto LAB_0026178a;
                }
                local_40 = *(long *)PTR__kCFBooleanFalse_00441108;
              }
            }
            else {
              lVar5 = _CFStringCompare(param_3,&cf_string,1);
              if (lVar5 == 0) {
                local_40 = _CFRetain(uVar6);
              }
              else {
                lVar5 = _CFStringCompare(param_3,&cf_url,1);
                if (lVar5 != 0) {
                  pcVar7 = "Unrecognized data type.";
                  goto LAB_0026178a;
                }
                local_40 = _AMSupportCreateURLFromString(uVar1,uVar6);
                if (local_40 == 0) {
                  pcVar7 = "Failed to parse URL.";
                  goto LAB_002618bb;
                }
              }
            }
          }
LAB_00261840:
          lVar5 = _AMSupportCopySetValueForKeyPathInDict(uVar1,*param_4,param_2,local_40);
          *param_4 = lVar5;
          uStack_60 = 0;
        }
        goto LAB_00261854;
      }
      pcVar7 = "Too few delimiters in argument";
    }
    else {
      pcVar7 = "Too many delimiters in argument";
    }
    _AMSupportLogInternal(3,"AMSupportCopySetValueAtTypedKeypath",pcVar7);
  }
LAB_00261854:
  _CFRelease(lVar4);
  if (local_40 != 0) {
    _CFRelease();
  }
LAB_0026186a:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uStack_60;
}

