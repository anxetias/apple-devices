// rea decompile_all
// name: _AMAuthInstallProvisioningCopyResponse
// address: 0x2988b6
// body: available
// range: 0x2988b6-0x299064 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x299060 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _AMAuthInstallProvisioningCopyResponse
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  char *pcVar12;
  long lVar13;
  long local_a0;
  long local_98;
  ulong local_90;
  undefined1 local_84 [72];
  int local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_a0 = 0;
  uVar3 = _CFDataGetBytePtr(param_2);
  uVar4 = _CFDataGetLength(param_2);
  lVar5 = _CFStringCreateWithBytes(param_1,uVar3,uVar4,0x8000100,0);
  if (lVar5 == 0) {
    local_90 = 3;
  }
  else {
    _AMAuthInstallLog(5,"AMAuthInstallProvisioningCopyResponse","Response:%@",lVar5);
    lVar6 = _CFDictionaryCreateMutable
                      (param_1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    local_90 = 2;
    if (lVar6 != 0) {
      lVar7 = _CFStringCreateArrayBySeparatingStrings(param_1,lVar5,&cf__);
      if (lVar7 == 0) {
        uVar3 = 0;
        local_90 = 3;
        _AMAuthInstallLog(3,"AMAuthInstallProvisioningCopyResponse","responseParts is NULL");
        uVar4 = 0;
        lVar7 = 0;
        goto LAB_00298ec2;
      }
      lVar8 = _CFArrayGetCount(lVar7);
      if (lVar8 == 0) {
        uVar3 = 0;
        local_90 = 3;
        _AMAuthInstallLog(3,"AMAuthInstallProvisioningCopyResponse","arrayCount is 0");
        uVar4 = 0;
        goto LAB_00298ec2;
      }
      local_98 = lVar7;
      if (0 < lVar8) {
        lVar13 = 0;
        do {
          uVar3 = _CFArrayGetValueAtIndex(lVar7,lVar13);
          uVar9 = _CFStringFind(uVar3,&cf__,0);
          if (uVar9 == 0xffffffffffffffff) {
            _AMAuthInstallLog(3,"AMAuthInstallProvisioningCopyResponse",
                              "could not split parameter: %@",uVar3);
          }
          else {
            lVar7 = _CFStringGetLength(uVar3);
            lVar10 = _CFStringCreateWithSubstring(param_1,uVar3,0,uVar9);
            lVar7 = _CFStringCreateWithSubstring(param_1,uVar3,uVar9 + 1,~uVar9 + lVar7);
            if (lVar7 == 0 || lVar10 == 0) {
              _AMAuthInstallLog(3,"AMAuthInstallProvisioningCopyResponse",
                                "failed to create key(%@) or value (%@)",lVar10,lVar7);
            }
            else {
              _CFDictionarySetValue(lVar6,lVar10,lVar7);
            }
            _SafeRelease(lVar10);
            _SafeRelease(lVar7);
            lVar7 = local_98;
          }
          lVar13 = lVar13 + 1;
        } while (lVar8 != lVar13);
      }
      lVar7 = _CFDictionaryGetValue(lVar6,&cf_MEID);
      if (lVar7 != 0) {
        _AMAuthInstallLog(5,"AMAuthInstallProvisioningCopyResponse","MEID:%@",lVar7);
      }
      lVar7 = _CFDictionaryGetValue(lVar6,&cf_IMEI);
      if (lVar7 != 0) {
        _AMAuthInstallLog(5,"AMAuthInstallProvisioningCopyResponse","IMEI:%@",lVar7);
      }
      lVar7 = _CFDictionaryGetValue(lVar6,&cf_IMEI2);
      if (lVar7 != 0) {
        _AMAuthInstallLog(5,"AMAuthInstallProvisioningCopyResponse","IMEI2:%@",lVar7);
      }
      lVar7 = _CFDictionaryGetValue(lVar6,&cf_EID);
      if (lVar7 != 0) {
        _AMAuthInstallLog(5,"AMAuthInstallProvisioningCopyResponse","EID:%@",lVar7);
      }
      lVar7 = _CFDictionaryGetValue(lVar6,&cf_WIFI_MAC);
      if (lVar7 != 0) {
        _AMAuthInstallLog(5,"AMAuthInstallProvisioningCopyResponse","WIFI_MAC:%@",lVar7);
      }
      lVar7 = _CFDictionaryGetValue(lVar6,&cf_BT_MAC);
      if (lVar7 != 0) {
        _AMAuthInstallLog(5,"AMAuthInstallProvisioningCopyResponse","BT_MAC:%@",lVar7);
      }
      lVar7 = _CFDictionaryGetValue(lVar6,&cf_USB_ETHER_MAC);
      if (lVar7 != 0) {
        _AMAuthInstallLog(5,"AMAuthInstallProvisioningCopyResponse","USB_ETHER_MAC:%@",lVar7);
      }
      lVar7 = _CFDictionaryGetValue(lVar6,&cf_WIFI_MAC2);
      if (lVar7 != 0) {
        _AMAuthInstallLog(5,"AMAuthInstallProvisioningCopyResponse","WIFI_MAC2:%@",lVar7);
      }
      lVar7 = _CFDictionaryGetValue(lVar6,&cf_BT_MAC2);
      if (lVar7 != 0) {
        _AMAuthInstallLog(5,"AMAuthInstallProvisioningCopyResponse","BT_MAC2:%@",lVar7);
      }
      lVar7 = _CFDictionaryGetValue(lVar6,&cf_ETH_MAC);
      if (lVar7 != 0) {
        _AMAuthInstallLog(5,"AMAuthInstallProvisioningCopyResponse","ETH_MAC:%@",lVar7);
      }
      lVar7 = _CFDictionaryGetValue(lVar6,&cf_ETHER_MAC2);
      if (lVar7 != 0) {
        _AMAuthInstallLog(5,"AMAuthInstallProvisioningCopyResponse","ETHER_MAC2:%@",lVar7);
      }
      lVar7 = _CFDictionaryGetValue(lVar6,&cf_T_MAC);
      if (lVar7 != 0) {
        _AMAuthInstallLog(5,"AMAuthInstallProvisioningCopyResponse","T_MAC:%@",lVar7);
      }
      lVar7 = _CFDictionaryGetValue(lVar6,&cf_ETHER_MAC3);
      if (lVar7 != 0) {
        _AMAuthInstallLog(5,"AMAuthInstallProvisioningCopyResponse","ETHER_MAC3:%@",lVar7);
      }
      lVar7 = _CFDictionaryGetValue(lVar6,&cf_B64_SECDATA);
      if (lVar7 == 0) {
        _AMAuthInstallLog(6,"AMAuthInstallProvisioningCopyResponse",
                          "B64_SECDATA not found in response");
        goto LAB_00298e3c;
      }
      uVar2 = _AMAuthInstallSupportBase64Decode
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,lVar7,&local_a0);
      if (uVar2 != 0) {
        uVar3 = 0;
        _AMAuthInstallLog(3,"AMAuthInstallProvisioningCopyResponse",
                          "AMAuthInstallSupportBase64Decode failed");
        uVar4 = 0;
        lVar7 = local_98;
        local_90 = (ulong)uVar2;
        goto LAB_00298ec2;
      }
      if (local_a0 == 0) {
        pcVar12 = "decodedData is NULL";
LAB_0029902e:
        local_90 = 3;
LAB_00299051:
        _AMAuthInstallLog(3,"AMAuthInstallProvisioningCopyResponse",pcVar12);
      }
      else {
        uVar9 = _CFDataGetLength();
        if (uVar9 < 0x4c) {
          pcVar12 = "decodedData is too small";
          goto LAB_0029902e;
        }
        _CFDataGetBytes(local_a0,0,0x4c,local_84);
        if (local_3c != 0) {
          lVar7 = _CFDataGetBytePtr(local_a0);
          lVar7 = _CFDataCreate(param_1,lVar7 + 0x4c,local_3c);
          if (lVar7 != 0) {
            _CFDictionarySetValue(lVar6,&cf_MANIFESTDATA,lVar7);
            _AMAuthInstallLog(5,"AMAuthInstallProvisioningCopyResponse",
                              "Found secure manifest in response: \'%@\'",lVar7);
            _CFRelease(lVar7);
            goto LAB_00298e3c;
          }
          pcVar12 = "tempData is NULL";
          goto LAB_00299051;
        }
LAB_00298e3c:
        lVar7 = _CFDictionaryGetValue(lVar6,&cf_STATUS);
        if (lVar7 != 0) {
          local_90 = 0;
          uVar3 = _CFNumberFormatterCreate(param_1,0,0);
          uVar4 = _CFNumberFormatterCreateNumberFromString(param_1,uVar3,lVar7,0,1);
          cVar1 = _CFNumberGetValue(uVar4,3,param_3);
          if (cVar1 == '\0') {
            local_90 = 3;
            _AMAuthInstallLog(3,"AMAuthInstallProvisioningCopyResponse",
                              "failed to convert statusNumber");
            lVar7 = local_98;
          }
          else {
            uVar11 = _CFRetain(lVar6);
            *param_4 = uVar11;
            lVar7 = local_98;
          }
          goto LAB_00298ec2;
        }
        _AMAuthInstallLog(3,"AMAuthInstallProvisioningCopyResponse","statusString is NULL");
        local_90 = 0x11;
      }
      uVar3 = 0;
      uVar4 = 0;
      lVar7 = local_98;
      goto LAB_00298ec2;
    }
  }
  uVar3 = 0;
  uVar4 = 0;
  lVar6 = 0;
  lVar7 = 0;
LAB_00298ec2:
  _SafeRelease(lVar5);
  _SafeRelease(lVar6);
  _SafeRelease(local_a0);
  _SafeRelease(0);
  _SafeRelease(lVar7);
  _SafeRelease(uVar4);
  _SafeRelease(uVar3);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_90;
}

