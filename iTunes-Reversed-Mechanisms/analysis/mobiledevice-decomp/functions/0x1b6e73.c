// rea decompile_all
// name: _AMAuthInstallBasebandLocalSign
// address: 0x1b6e73
// body: available
// range: 0x1b6e73-0x1b74a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallBasebandLocalSign(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 local_58;
  undefined4 local_4c;
  long *local_48;
  undefined8 local_40;
  long local_38;
  
  _AMAuthInstallLog(8,"AMAuthInstallBasebandLocalSign",
                    "We are using this local signing for setting baseband generated provisioning info in the AMAI object for later use."
                   );
  _AMAuthInstallLog(5,"AMAuthInstallBasebandLocalSign","Input request dict: %@",param_3);
  if (param_1 == 0) {
    _AMAuthInstallBasebandLocalSign_cold_16();
LAB_001b7470:
    uVar9 = 99;
    local_38 = 0;
    uVar6 = 0;
  }
  else {
    if (param_3 == 0) {
      _AMAuthInstallBasebandLocalSign_cold_15();
      goto LAB_001b7470;
    }
    lVar3 = _CFDictionaryGetValue(param_3,&cf_ProvisionedInfo);
    local_48 = param_4;
    if (lVar3 == 0) {
      pcVar10 = "Provisined info does not exist - device must already be provisioned";
      uVar6 = 5;
    }
    else {
      lVar4 = _CFGetTypeID(lVar3);
      lVar5 = _CFDictionaryGetTypeID();
      if (lVar4 != lVar5) {
        _AMAuthInstallBasebandLocalSign_cold_1();
        goto LAB_001b7470;
      }
      _AMAuthInstallLog(8,"AMAuthInstallBasebandLocalSign",
                        "baseband updater provisioned info output: %@",lVar3);
      _SafeRelease(*(undefined8 *)(param_1 + 0x138));
      uVar6 = _CFRetain(lVar3);
      *(undefined8 *)(param_1 + 0x138) = uVar6;
      pcVar10 = "Set provisioned info in the AMAI obj.";
      uVar6 = 8;
    }
    _AMAuthInstallLog(uVar6,"AMAuthInstallBasebandLocalSign",pcVar10);
    lVar3 = _CFDictionaryGetValue(param_3,&cf_BasebandProvInfo);
    if (lVar3 == 0) {
      _AMAuthInstallBasebandLocalSign_cold_14();
      goto LAB_001b7470;
    }
    lVar4 = _CFGetTypeID(lVar3);
    lVar5 = _CFDictionaryGetTypeID();
    if (lVar4 != lVar5) {
      _AMAuthInstallBasebandLocalSign_cold_2();
      goto LAB_001b7470;
    }
    _AMAuthInstallLog(8,"AMAuthInstallBasebandLocalSign","baseband updater baseband info output: %@"
                      ,lVar3);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _AMAuthInstallLog(5,"AMAuthInstallBasebandLocalSign","Old BB params saved");
    lVar4 = __AMAuthInstallBasebandParametersCreate();
    *(long *)(param_1 + 0x30) = lVar4;
    if (lVar4 == 0) {
      _AMAuthInstallBasebandLocalSign_cold_13();
      uVar9 = 2;
LAB_001b7414:
      local_38 = 0;
    }
    else {
      _AMAuthInstallLog(5,"AMAuthInstallBasebandLocalSign","New amai->bbParameters created");
      lVar4 = _CFDictionaryGetValue(lVar3,&cf_ChipID);
      if (lVar4 == 0) {
        _AMAuthInstallBasebandLocalSign_cold_12();
        uVar9 = 99;
        goto LAB_001b7414;
      }
      lVar5 = _CFGetTypeID(lVar4);
      lVar7 = _CFDataGetTypeID();
      if (lVar5 != lVar7) {
        _AMAuthInstallBasebandLocalSign_cold_3();
        uVar9 = 1;
        goto LAB_001b7414;
      }
      _AMAuthInstallLog(5,"AMAuthInstallBasebandLocalSign","BB chipId found in the dictionary");
      uVar8 = _CFDataGetLength(lVar4);
      uVar9 = _CFDataGetBytePtr(lVar4);
      if (uVar8 - 9 < 0xfffffffffffffff8) {
        _AMAuthInstallBasebandLocalSign_cold_11();
LAB_001b740e:
        uVar9 = 3;
        goto LAB_001b7414;
      }
      if (uVar8 < 5) {
        puVar12 = (undefined8 *)&local_4c;
        local_4c = 0;
        ___memcpy_chk(puVar12,uVar9,uVar8,4);
        uVar9 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        uVar11 = 3;
      }
      else {
        puVar12 = &local_58;
        local_58 = 0;
        ___memcpy_chk(puVar12,uVar9,uVar8,8);
        uVar9 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        uVar11 = 4;
      }
      lVar4 = _CFNumberCreate(uVar9,uVar11,puVar12);
      if (lVar4 == 0) {
        _AMAuthInstallBasebandLocalSign_cold_10();
        goto LAB_001b740e;
      }
      _AMAuthInstallLog(5,"AMAuthInstallBasebandLocalSign",
                        "BB chipId successfully converted to CFNum");
      local_38 = lVar4;
      iVar2 = _AMAuthInstallSupportGetUInt32(lVar4,*(long *)(param_1 + 0x30) + 4);
      if (iVar2 == 0) {
        _AMAuthInstallLog(5,"AMAuthInstallBasebandLocalSign",
                          "BB chipId successfully set in the amai object");
        lVar4 = _CFDictionaryGetValue(lVar3,&cf_ChipSerialNo);
        if (lVar4 == 0) {
          _AMAuthInstallBasebandLocalSign_cold_9();
          uVar9 = 99;
        }
        else {
          local_40 = uVar6;
          lVar5 = _CFGetTypeID(lVar4);
          lVar7 = _CFDataGetTypeID();
          if (lVar5 != lVar7) {
            _AMAuthInstallBasebandLocalSign_cold_5();
            uVar9 = 1;
            bVar1 = false;
LAB_001b7497:
            lVar3 = 0;
            uVar6 = local_40;
            goto LAB_001b7372;
          }
          _AMAuthInstallLog(5,"AMAuthInstallBasebandLocalSign","BB snum found in the dictionary");
          _SafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10));
          uVar6 = _SavageSafeRetain(lVar4);
          *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10) = uVar6;
          _AMAuthInstallLog(5,"AMAuthInstallBasebandLocalSign",
                            "BB snum successfully set in the amai object");
          lVar4 = _CFDictionaryGetValue(lVar3,&cf_IMEI);
          if (lVar4 != 0) {
            _SafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x28));
            uVar6 = _SavageSafeRetain(lVar4);
            *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x28) = uVar6;
          }
          _AMAuthInstallLog(5,"AMAuthInstallBasebandLocalSign",
                            "BB IMEI1 successfully set in the amai object");
          lVar4 = _CFDictionaryGetValue(lVar3,&cf_IMEI2);
          if (lVar4 != 0) {
            _SafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x30));
            uVar6 = _SavageSafeRetain(lVar4);
            *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x30) = uVar6;
          }
          _AMAuthInstallLog(5,"AMAuthInstallBasebandLocalSign",
                            "BB IMEI2 successfully set in the amai object");
          lVar3 = _CFDictionaryGetValue(lVar3,&cf_EID);
          if (lVar3 == 0) {
            pcVar10 = "No valid eSIM EID - skip its setup in the amai object";
          }
          else {
            lVar4 = _CFStringGetTypeID();
            lVar5 = _CFGetTypeID(lVar3);
            if (lVar4 != lVar5) {
              _AMAuthInstallBasebandLocalSign_cold_6();
              uVar9 = 0;
              bVar1 = true;
              goto LAB_001b7497;
            }
            _SafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x38));
            uVar6 = _SavageSafeRetain(lVar3);
            *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x38) = uVar6;
            pcVar10 = "BB eSIM EID successfully set in the amai object";
          }
          uVar6 = local_40;
          _AMAuthInstallLog(5,"AMAuthInstallBasebandLocalSign",pcVar10);
          _AMAuthInstallLog(8,"AMAuthInstallBasebandLocalSign",
                            "Completed baseband parameters setup in the AMAI obj.");
          lVar3 = _CFDataCreate(uVar9,0,0);
          if (lVar3 != 0) {
            uVar11 = _CFGetAllocator(param_1);
            uVar9 = 0;
            lVar4 = _CFDictionaryCreateMutable
                              (uVar11,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                               PTR__kCFTypeDictionaryValueCallBacks_004411b8);
            *local_48 = lVar4;
            if (lVar4 == 0) {
              _AMAuthInstallBasebandLocalSign_cold_7();
              uVar9 = 2;
              bVar1 = false;
            }
            else {
              _CFDictionarySetValue(lVar4,&cf_Cellular1_Ticket,lVar3);
              _AMAuthInstallLog(8,"AMAuthInstallBasebandLocalSign","Set the dummy manifest as well")
              ;
              bVar1 = true;
            }
            goto LAB_001b7372;
          }
          _AMAuthInstallBasebandLocalSign_cold_8();
          uVar9 = 2;
        }
      }
      else {
        _AMAuthInstallBasebandLocalSign_cold_4();
        uVar9 = 3;
      }
    }
  }
  bVar1 = false;
  lVar3 = 0;
LAB_001b7372:
  _SafeRelease(local_38);
  _SafeRelease(lVar3);
  if (!bVar1) {
    __AMAuthInstallBasebandParametersFinalize(*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  __AMAuthInstallBasebandParametersFinalize(uVar6);
  return uVar9;
}

