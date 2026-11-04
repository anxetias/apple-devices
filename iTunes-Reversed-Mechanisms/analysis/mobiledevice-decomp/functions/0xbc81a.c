// rea decompile_all
// name: _MISAgentHandleMessage
// address: 0xbc81a
// body: available
// range: 0xbc81a-0xbcb09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xbcb05 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _MISAgentHandleMessage(undefined8 param_1,code *param_2,code *param_3,code *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int local_7c;
  cfstringStruct *local_78;
  undefined8 local_70;
  long local_68;
  cfstringStruct *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  cfstringStruct *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  iVar1 = __MISAgentReceiveMessage();
  if (iVar1 != 0) goto LAB_000bcae3;
  lVar2 = _CFDictionaryGetValue(0,&cf_ProfileType);
  local_7c = -0x17ff7ff3;
  if (lVar2 == 0) goto LAB_000bca17;
  lVar3 = 0;
  lVar2 = _CFStringCompare(lVar2,&cf_Provisioning,0);
  if (lVar2 != 0) goto LAB_000bca1a;
  lVar2 = _CFDictionaryGetValue(0,&cf_MessageType);
  if (lVar2 == 0) {
LAB_000bca17:
    lVar3 = 0;
  }
  else {
    lVar3 = _CFStringCompare(lVar2,&cf_Install,0);
    if (lVar3 == 0) {
      lVar2 = _CFDictionaryGetValue(0,&cf_Profile);
      if (lVar2 != 0) {
        lVar2 = _MISProfileCreateWithData(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,lVar2);
        if (lVar2 == 0) {
          local_7c = -0x17ff7ffd;
        }
        else {
          local_7c = (*param_2)(lVar2);
          _CFRelease(lVar2);
        }
      }
      goto LAB_000bca17;
    }
    lVar3 = _CFStringCompare(lVar2,&cf_Remove,0);
    if (lVar3 == 0) {
      lVar2 = _CFDictionaryGetValue(0,&cf_ProfileID);
      if (lVar2 != 0) {
        local_7c = (*param_3)(lVar2);
      }
      goto LAB_000bca17;
    }
    lVar3 = 0;
    lVar2 = _CFStringCompare(lVar2,&cf_CopyAll,0);
    if (lVar2 == 0) {
      local_58 = (cfstringStruct *)0x0;
      local_7c = (*param_4)(&local_58);
      if (local_58 == (cfstringStruct *)0x0 || local_7c != 0) goto LAB_000bca17;
      lVar2 = _CFArrayGetCount();
      lVar3 = _CFArrayCreateMutable
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,lVar2,
                         PTR__kCFTypeArrayCallBacks_004411a8);
      if (0 < lVar2 && lVar3 != 0) {
        lVar6 = 0;
        do {
          uVar4 = _CFArrayGetValueAtIndex(local_58,lVar6);
          _CFArrayAppendValue(lVar3,uVar4);
          lVar6 = lVar6 + 1;
        } while (lVar2 != lVar6);
      }
      _CFRelease(local_58);
    }
  }
LAB_000bca1a:
  uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  uVar5 = _CFNumberCreate(uVar4,9);
  local_48 = &cf_Payload;
  local_58 = &cf_MessageType;
  uStack_50 = 0x452a30;
  uStack_4c = 0;
  local_78 = &cf_Response;
  local_70 = uVar5;
  local_68 = lVar3;
  lVar2 = _CFDictionaryCreate(uVar4,&local_58,&local_78,3 - (ulong)(lVar3 == 0),
                              PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                              PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar2 == 0) {
    iVar1 = -0x17ff7ff6;
  }
  else {
    iVar1 = __MISAgentSendMessage(param_1,lVar2);
    _CFRelease(lVar2);
  }
  _CFRelease(uVar5);
  if (local_7c != 0) {
    iVar1 = local_7c;
  }
  _CFRelease(0);
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
LAB_000bcae3:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

