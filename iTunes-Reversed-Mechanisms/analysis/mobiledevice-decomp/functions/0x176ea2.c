// rea decompile_all
// name: _send_paircu
// address: 0x176ea2
// body: available
// range: 0x176ea2-0x1770e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _send_paircu(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 *param_5,
                undefined8 *param_6,undefined8 *param_7)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long local_38;
  
  local_38 = 0;
  if (*(long *)(param_1 + 0x38) == 0) {
    return -0x17fffff5;
  }
  if (param_5 == (undefined8 *)0x0) {
    return -0x17fffff9;
  }
  if (param_7 == (undefined8 *)0x0) {
    return -0x17fffff9;
  }
  lVar2 = __CreateMessageDict_5150(&cf_PairCU);
  if (lVar2 != 0) {
    lVar3 = _CFDictionaryCreateMutable
                      (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar3 == 0) {
      iVar1 = -0x17fffffd;
    }
    else {
      _CFDictionarySetValue(lVar3,&cf_PairRecord,param_2);
      if (param_3 != 0) {
        _CFDictionarySetValue(lVar3,&cf_PermissionSlip,param_3);
      }
      if (param_4 != 0) {
        _CFDictionarySetValue(lVar3,&cf_PairingOptions,param_4);
      }
      lVar4 = _SCDynamicStoreCopyComputerName(0,0);
      if (lVar4 != 0) {
        _CFDictionarySetValue(lVar3,&cf_HostName,lVar4);
      }
      iVar1 = _doCryptoSendReceive(param_1,lVar2,lVar3,&local_38);
      lVar3 = local_38;
      if (iVar1 == 0) {
        lVar5 = _CFDataGetTypeID();
        lVar3 = _CFDictionaryGetValue(lVar3,&cf_EscrowBag);
        if ((lVar3 == 0) || (lVar6 = _CFGetTypeID(lVar3), lVar6 != lVar5)) {
          uVar7 = 0;
        }
        else {
          uVar7 = _CFRetain(lVar3);
        }
        lVar3 = local_38;
        *param_5 = uVar7;
        lVar5 = _CFStringGetTypeID();
        lVar3 = _CFDictionaryGetValue(lVar3,&cf_UDID);
        if ((lVar3 == 0) || (lVar6 = _CFGetTypeID(lVar3), lVar6 != lVar5)) {
          uVar7 = 0;
        }
        else {
          uVar7 = _CFRetain(lVar3);
        }
        *param_7 = uVar7;
      }
      lVar3 = local_38;
      if (param_6 != (undefined8 *)0x0 && local_38 != 0) {
        lVar5 = _CFDictionaryGetTypeID();
        lVar3 = _CFDictionaryGetValue(lVar3,&cf_ExtendedResponse);
        if ((lVar3 == 0) || (lVar6 = _CFGetTypeID(lVar3), lVar6 != lVar5)) {
          uVar7 = 0;
        }
        else {
          uVar7 = _CFRetain(lVar3);
        }
        *param_6 = uVar7;
      }
      if (local_38 != 0) {
        _CFRelease(local_38);
      }
      _CFRelease(lVar2);
      lVar2 = lVar4;
      if (lVar4 == 0) {
        return iVar1;
      }
    }
    _CFRelease(lVar2);
    return iVar1;
  }
  return -0x17fffffd;
}

