// rea decompile_all
// name: _AMAuthInstallBasebandHandleUpdaterStatus
// address: 0x1a4b06
// body: available
// range: 0x1a4b06-0x1a5210 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBasebandHandleUpdaterStatus(long param_1,char param_2,long param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int local_3c;
  int local_38;
  char local_31;
  
  if (param_1 == 0) {
    return 1;
  }
  pcVar8 = "YES";
  if (param_2 == '\0') {
    pcVar8 = "NO";
  }
  _AMAuthInstallLog(7,"AMAuthInstallBasebandHandleUpdaterStatus","commandAccepted: %s",pcVar8);
  iVar11 = 1;
  if (param_3 == 0) {
    pcVar8 = "outputDict is NULL";
    goto LAB_001a51b2;
  }
  local_38 = 0;
  _AMAuthInstallLog(7,"AMAuthInstallBasebandHandleUpdaterStatus","outputDict: %@",param_3);
  lVar3 = _CFDictionaryGetValue(param_3,&cf_provisioning);
  if (lVar3 == 0) goto LAB_001a4d42;
  if (*(long *)(param_1 + 0x30) == 0) {
    pcVar8 = "amai->bbParameters is NULL";
    goto LAB_001a51b2;
  }
  lVar4 = _CFDictionaryGetValue(lVar3,&cf_MEID);
  if (lVar4 != 0) {
    lVar5 = _CFGetTypeID(lVar4);
    lVar6 = _CFStringGetTypeID();
    if (lVar5 == lVar6) {
      _SafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20));
      uVar7 = _CFRetain(lVar4);
      *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20) = uVar7;
      goto LAB_001a4c02;
    }
    pcVar8 = "mistyped meid";
LAB_001a51ac:
    iVar11 = 1;
LAB_001a51b2:
    _AMAuthInstallLog(3,"AMAuthInstallBasebandHandleUpdaterStatus",pcVar8);
    return iVar11;
  }
LAB_001a4c02:
  lVar4 = _CFDictionaryGetValue(lVar3,&cf_IMEI);
  if (lVar4 != 0) {
    lVar5 = _CFGetTypeID(lVar4);
    lVar6 = _CFStringGetTypeID();
    if (lVar5 != lVar6) {
      pcVar8 = "mistyped imei";
      goto LAB_001a51ac;
    }
    _SafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x28));
    uVar7 = _CFRetain(lVar4);
    *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x28) = uVar7;
  }
  lVar4 = _CFDictionaryGetValue(lVar3,&cf_IMEI2);
  if (lVar4 != 0) {
    lVar5 = _CFGetTypeID(lVar4);
    lVar6 = _CFStringGetTypeID();
    if (lVar5 != lVar6) {
      pcVar8 = "mistyped imei2";
      goto LAB_001a51ac;
    }
    _SafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x30));
    uVar7 = _CFRetain(lVar4);
    *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x30) = uVar7;
  }
  lVar4 = _CFDictionaryGetValue(lVar3,&cf_EID);
  if (lVar4 != 0) {
    lVar5 = _CFGetTypeID(lVar4);
    lVar6 = _CFStringGetTypeID();
    if (lVar5 != lVar6) {
      pcVar8 = "mistyped eid";
      goto LAB_001a51ac;
    }
    _SafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x38));
    uVar7 = _CFRetain(lVar4);
    *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x38) = uVar7;
  }
  lVar3 = _CFDictionaryGetValue(lVar3,&cf_ICCID);
  if (lVar3 != 0) {
    lVar4 = _CFGetTypeID(lVar3);
    lVar5 = _CFStringGetTypeID();
    if (lVar4 != lVar5) {
      pcVar8 = "mistyped iccid";
      goto LAB_001a51ac;
    }
    _SafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40));
    uVar7 = _CFRetain(lVar3);
    *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40) = uVar7;
  }
LAB_001a4d42:
  switch(*(undefined4 *)(param_1 + 0x130)) {
  case 1:
    lVar3 = _CFDictionaryGetValue(param_3,&cf_done);
    if ((lVar3 != 0) && (cVar1 = _CFBooleanGetValue(lVar3), cVar1 == '\x01')) {
      if (*(char *)(param_1 + 0x148) != '\0') {
        iVar11 = 0x13;
        pcVar8 = "Attempt to force provision baseband failed";
        goto LAB_001a51b2;
      }
      local_38 = 0;
      _AMAuthInstallLog(5,"AMAuthInstallBasebandHandleUpdaterStatus",
                        "Provisioning never started by BBUpdater, skipping for BB");
      goto switchD_001a4d62_caseD_6;
    }
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x130) = 3;
    break;
  case 4:
  case 5:
    local_3c = 0x67;
    lVar3 = _CFDictionaryGetValue(param_3,&cf_provisioning);
    if (lVar3 == 0) {
      _AMAuthInstallBasebandHandleUpdaterStatus_cold_4();
    }
    else {
      lVar3 = _CFDictionaryGetValue(lVar3,&cf_Status);
      if (lVar3 == 0) {
        _AMAuthInstallBasebandHandleUpdaterStatus_cold_3();
      }
      else {
        lVar4 = _CFGetTypeID(lVar3);
        lVar5 = _CFNumberGetTypeID();
        if (lVar4 == lVar5) {
          cVar1 = _CFNumberGetValue(lVar3,3,&local_3c);
          if (cVar1 == '\0') {
            _AMAuthInstallBasebandHandleUpdaterStatus_cold_2();
          }
        }
        else {
          _AMAuthInstallBasebandHandleUpdaterStatus_cold_1();
        }
      }
      if (local_3c == 0) goto switchD_001a4d62_caseD_6;
    }
    _AMAuthInstallLog(3,"_AMAuthInstallBasebandCheckProvisioningStatus",
                      "Baseband provisioning failed. Informing server.");
    _AMAuthInstallProvisioningSendAck(param_1,0x67);
    *(undefined4 *)(param_1 + 0x130) = 8;
    _CFRelease(*(undefined8 *)(param_1 + 0x138));
    *(undefined8 *)(param_1 + 0x138) = 0;
    local_38 = 0x13;
    break;
  case 6:
switchD_001a4d62_caseD_6:
    *(undefined4 *)(param_1 + 0x130) = 7;
  }
  if (*(long *)(param_1 + 0xb0) == 0) {
    iVar10 = 0;
    iVar11 = local_38;
    goto LAB_001a50be;
  }
  lVar3 = _CFDictionaryGetValue(param_3,&cf_attemptedToFuse);
  local_31 = '\x01';
  bVar12 = true;
  if (lVar3 != 0) {
    lVar4 = _CFGetTypeID(lVar3);
    lVar5 = _CFBooleanGetTypeID();
    if (lVar4 == lVar5) {
      cVar1 = _CFBooleanGetValue(lVar3);
      bVar12 = cVar1 == '\0';
    }
  }
  lVar3 = _CFDictionaryGetValue(param_3,&cf_fuseAttemptSucceeded);
  iVar11 = local_38;
  if (lVar3 != 0) {
    lVar4 = _CFGetTypeID(lVar3);
    lVar5 = _CFBooleanGetTypeID();
    iVar11 = local_38;
    if (lVar4 == lVar5) {
      cVar1 = _CFBooleanGetValue(lVar3);
      local_31 = cVar1 == '\0';
    }
  }
  if (param_2 == '\0') {
    if (bVar12) {
      iVar10 = 0;
      _AMAuthInstallLog(5,"AMAuthInstallBasebandHandleUpdaterStatus",
                        "unrelated failure; will reclaim fusing program");
      uVar9 = 0;
    }
    else {
      _AMAuthInstallLog(3,"AMAuthInstallBasebandHandleUpdaterStatus",
                        "fusing attempt failed; will consume program");
      uVar9 = 1;
      iVar10 = 0x12;
    }
LAB_001a505b:
    if (*(char *)(param_1 + 0xb9) != '\0') {
LAB_001a50ab:
      *(undefined8 *)(param_1 + 0xb0) = 0;
      *(undefined1 *)(param_1 + 0xb8) = 1;
      goto LAB_001a50be;
    }
    iVar2 = *(int *)(*(long *)(param_1 + 0x30) + 4);
    if (iVar2 < 0x19f0e1) {
      if (((iVar2 == 0xe50e1) || (iVar2 == 0x1440e1)) || (iVar2 == 0x1720e1)) {
LAB_001a509f:
        _CFRelease(*(undefined8 *)(param_1 + 0xb0));
        goto LAB_001a50ab;
      }
    }
    else if (((iVar2 == 0x19f0e1) || (iVar2 == 0x1fe0e1)) || (iVar2 == 0x2af0e1)) goto LAB_001a509f;
    uVar7 = _CFGetAllocator(param_1);
    iVar2 = _AMAuthInstallFusingProgramAck
                      (uVar7,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xb0),uVar9);
    _CFRelease(*(undefined8 *)(param_1 + 0xb0));
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined1 *)(param_1 + 0xb8) = 1;
    if (iVar2 == 0) goto LAB_001a50be;
    pcVar8 = "*******************************************************";
    _AMAuthInstallLog(4,"AMAuthInstallBasebandHandleUpdaterStatus",
                      "*******************************************************");
    _AMAuthInstallLog(4,"AMAuthInstallBasebandHandleUpdaterStatus",
                      "*   failed to ack fusing program; continuing anyway   *");
    uVar7 = 4;
  }
  else {
    if (!bVar12) {
      if (local_31 == '\0') {
        if (*(long *)(param_1 + 0x30) == 0) {
          _AMAuthInstallBasebandHandleUpdaterStatus_cold_5();
          iVar10 = 1;
          goto LAB_001a50be;
        }
        if (*(long *)(*(long *)(param_1 + 0x30) + 0x10) == 0) {
          _AMAuthInstallLog(5,"AMAuthInstallBasebandHandleUpdaterStatus",
                            "fusing attempt succeeded; will consume program");
        }
        else {
          uVar7 = _CFGetAllocator(param_1);
          uVar7 = __CopyHexStringFromData(uVar7,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10));
          _AMAuthInstallLog(5,"AMAuthInstallBasebandHandleUpdaterStatus",
                            "fusing attempt succeeded (snum=%@); will consume program",uVar7);
          _SafeRelease(uVar7);
        }
        iVar10 = 0;
        uVar9 = 1;
      }
      else {
        _AMAuthInstallLog(3,"AMAuthInstallBasebandHandleUpdaterStatus",
                          "unrecognized state; will consume program (commandAccepted=%s, attemptedToFuse=%s, fuseAttemptSucceeded=%s)"
                          ,"YES","YES","NO");
        uVar9 = 1;
        iVar10 = 0xe;
      }
      goto LAB_001a505b;
    }
    pcVar8 = "unrelated stage; will hold fusing program";
    iVar10 = 0;
    uVar7 = 5;
  }
  _AMAuthInstallLog(uVar7,"AMAuthInstallBasebandHandleUpdaterStatus",pcVar8);
LAB_001a50be:
  if (iVar11 == 0) {
    return iVar10;
  }
  return iVar11;
}

