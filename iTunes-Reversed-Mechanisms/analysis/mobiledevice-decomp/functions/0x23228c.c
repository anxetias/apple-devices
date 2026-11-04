// rea decompile_all
// name: AppleTypeCRetimerFirmwareRequestCreatorBackDeploy::parseOptions:
// address: 0x23228c
// body: available
// range: 0x23228c-0x232811 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

char AppleTypeCRetimerFirmwareRequestCreatorBackDeploy::parseOptions_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  cfstringStruct *pcVar19;
  bool bVar20;
  
  uVar5 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  uVar6 = (*(code *)PTR__objc_msgSend_00441098)(uVar5,"objectForKeyedSubscript:",&cf_FirmwareData);
  lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
  if (lVar7 == 0) {
    bVar20 = false;
    (*(code *)PTR__objc_msgSend_00441098)(param_1,"log:",&cf_Unabletolocatefirmwaredata);
  }
  else {
    uVar6 = _objc_alloc(&objc::class_t::FTABFileBackDeploy);
    uVar8 = (*(code *)PTR__objc_msgSend_00441098)(uVar6,"initWithData:",lVar7);
    lVar10 = _ftab;
    uVar6 = *(undefined8 *)(param_1 + _ftab);
    *(undefined8 *)(param_1 + _ftab) = uVar8;
    (*(code *)PTR__objc_release_004410a0)(uVar6);
    lVar9 = *(long *)(param_1 + lVar10);
    if (lVar9 == 0) {
      pcVar19 = &cf_Failedtoparseftab;
    }
    else {
      uVar6 = (*(code *)PTR__objc_msgSend_00441098)(lVar9,"subfileWithTag:",&cf_rrko);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar6);
      lVar9 = _rrko;
      uVar6 = *(undefined8 *)(param_1 + _rrko);
      *(undefined8 *)(param_1 + _rrko) = uVar8;
      (*(code *)PTR__objc_release_004410a0)(uVar6);
      if (*(long *)(param_1 + lVar9) == 0) {
        pcVar19 = &cf_Failedtolocaterrkofileinftab;
      }
      else {
        uVar6 = (*(code *)PTR__objc_msgSend_00441098)
                          (*(undefined8 *)(param_1 + lVar10),"subfileWithTag:",&cf_rkos);
        uVar8 = _objc_retainAutoreleasedReturnValue(uVar6);
        lVar9 = _rkos;
        uVar6 = *(undefined8 *)(param_1 + _rkos);
        *(undefined8 *)(param_1 + _rkos) = uVar8;
        (*(code *)PTR__objc_release_004410a0)(uVar6);
        if (*(long *)(param_1 + lVar9) != 0) {
          uVar6 = (*(code *)PTR__objc_msgSend_00441098)
                            (uVar5,"objectForKeyedSubscript:",&cf_DeviceInfo);
          lVar9 = _objc_retainAutoreleasedReturnValue(uVar6);
          if (lVar9 == 0) {
            bVar20 = false;
            (*(code *)PTR__objc_msgSend_00441098)(param_1,"log:",&cf_Unabletolocatedeviceinfo);
          }
          else {
            uVar6 = (*(code *)PTR__objc_msgSend_00441098)
                              (lVar9,"objectForKeyedSubscript:",&cf_TagNumber);
            lVar10 = _objc_retainAutoreleasedReturnValue(uVar6);
            puVar1 = PTR__objc_msgSend_00441098;
            if (lVar10 == 0) {
              bVar20 = false;
              (*(code *)PTR__objc_msgSend_00441098)
                        (param_1,"log:",&cf_Unabletolocatetagnumberindeviceinfo);
            }
            else {
              uVar3 = (*(code *)PTR__objc_msgSend_00441098)(lVar10,"unsignedCharValue");
              *(undefined1 *)(param_1 + _tagNumber) = uVar3;
              uVar6 = (*(code *)puVar1)(lVar9,"objectForKeyedSubscript:",&cf_HardwareID);
              lVar11 = _objc_retainAutoreleasedReturnValue(uVar6);
              puVar1 = PTR__objc_msgSend_00441098;
              if (lVar11 == 0) {
                bVar20 = false;
                (*(code *)PTR__objc_msgSend_00441098)
                          (param_1,"log:",&cf_UnabletolocatehardwareIDdata);
              }
              else {
                uVar6 = (*(code *)PTR__objc_msgSend_00441098)
                                  (lVar11,"objectForKeyedSubscript:",&cf_ChipID);
                uVar8 = _objc_retainAutoreleasedReturnValue(uVar6);
                uVar4 = (*(code *)puVar1)(uVar8,"unsignedShortValue");
                *(undefined2 *)(param_1 + _chipID) = uVar4;
                uVar6 = (*(code *)puVar1)(lVar11,"objectForKeyedSubscript:",&cf_BoardID);
                uVar12 = _objc_retainAutoreleasedReturnValue(uVar6);
                uVar4 = (*(code *)puVar1)(uVar12,"unsignedShortValue");
                *(undefined2 *)(param_1 + _boardID) = uVar4;
                uVar6 = (*(code *)puVar1)(lVar11,"objectForKeyedSubscript:",&cf_SecurityEpoch);
                uVar13 = _objc_retainAutoreleasedReturnValue(uVar6);
                uVar3 = (*(code *)puVar1)(uVar13,"unsignedCharValue");
                *(undefined1 *)(param_1 + _securityEpoch) = uVar3;
                uVar6 = (*(code *)puVar1)(lVar11,"objectForKeyedSubscript:",&cf_ProductionStatus);
                uVar14 = _objc_retainAutoreleasedReturnValue(uVar6);
                uVar3 = (*(code *)puVar1)(uVar14,"unsignedCharValue");
                *(undefined1 *)(param_1 + _productionStatus) = uVar3;
                uVar6 = (*(code *)puVar1)(lVar11,"objectForKeyedSubscript:",&cf_SecurityMode);
                uVar15 = _objc_retainAutoreleasedReturnValue(uVar6);
                uVar3 = (*(code *)puVar1)(uVar15,"unsignedCharValue");
                *(undefined1 *)(param_1 + _securityMode) = uVar3;
                uVar6 = (*(code *)puVar1)(lVar11,"objectForKeyedSubscript:",&cf_SecurityDomain);
                uVar16 = _objc_retainAutoreleasedReturnValue(uVar6);
                uVar3 = (*(code *)puVar1)(uVar16,"unsignedCharValue");
                *(undefined1 *)(param_1 + _securityDomain) = uVar3;
                uVar6 = (*(code *)puVar1)(lVar11,"objectForKeyedSubscript:",&cf_ECID);
                uVar17 = _objc_retainAutoreleasedReturnValue(uVar6);
                uVar6 = (*(code *)puVar1)(uVar17,"unsignedLongLongValue");
                *(undefined8 *)(param_1 + _ecid) = uVar6;
                uVar6 = (*(code *)puVar1)(lVar11,"objectForKeyedSubscript:",&cf_Nonce);
                uVar18 = _objc_retainAutoreleasedReturnValue(uVar6);
                lVar2 = _nonce;
                uVar6 = *(undefined8 *)(param_1 + _nonce);
                *(undefined8 *)(param_1 + _nonce) = uVar18;
                (*(code *)PTR__objc_release_004410a0)(uVar6);
                puVar1 = PTR__objc_msgSend_00441098;
                bVar20 = *(long *)(param_1 + lVar2) == 0;
                if (bVar20) {
                  (*(code *)PTR__objc_msgSend_00441098)
                            (param_1,"log:",&cf_Noncemissingfromhardwaredictionary);
                }
                else {
                  uVar6 = (*(code *)PTR__objc_msgSend_00441098)
                                    (lVar11,"objectForKeyedSubscript:",&cf_ChipRev);
                  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
                  uVar3 = (*(code *)puVar1)(uVar6,"unsignedCharValue");
                  *(undefined1 *)(param_1 + _chipRev) = uVar3;
                  uVar18 = (*(code *)puVar1)(lVar11,"objectForKeyedSubscript:",&cf_Demote);
                  uVar18 = _objc_retainAutoreleasedReturnValue(uVar18);
                  uVar3 = (*(code *)puVar1)(uVar18,"boolValue");
                  *(undefined1 *)(param_1 + _demote) = uVar3;
                  puVar1 = PTR__objc_release_004410a0;
                  (*(code *)PTR__objc_release_004410a0)(uVar18);
                  (*(code *)puVar1)(uVar6);
                }
                puVar1 = PTR__objc_release_004410a0;
                bVar20 = !bVar20;
                (*(code *)PTR__objc_release_004410a0)(uVar17);
                (*(code *)puVar1)(uVar16);
                (*(code *)puVar1)(uVar15);
                (*(code *)puVar1)(uVar14);
                (*(code *)puVar1)(uVar13);
                (*(code *)puVar1)(uVar12);
                (*(code *)puVar1)(uVar8);
              }
              (*(code *)PTR__objc_release_004410a0)(lVar11);
            }
            (*(code *)PTR__objc_release_004410a0)(lVar10);
          }
          (*(code *)PTR__objc_release_004410a0)(lVar9);
          goto LAB_002327ee;
        }
        pcVar19 = &cf_Failedtolocaterkosfileinftab;
      }
    }
    bVar20 = false;
    (*(code *)PTR__objc_msgSend_00441098)(param_1,"log:",pcVar19);
  }
LAB_002327ee:
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(lVar7);
  (*(code *)puVar1)(uVar5);
  return bVar20;
}

