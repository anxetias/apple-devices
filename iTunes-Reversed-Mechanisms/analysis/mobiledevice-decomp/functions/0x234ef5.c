// rea decompile_all
// name: UARPSuperBinaryPayloadBackDeploy::composeTSSRequest:asMeasurement:
// address: 0x234ef5
// body: available
// range: 0x234ef5-0x2353d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2353d7 to 0x60aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x1c bytes */

ID UARPSuperBinaryPayloadBackDeploy::composeTSSRequest_asMeasurement_
             (ID param_1,SEL param_2,unsigned_long_long param_3,char param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ID IVar15;
  
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar7);
  puVar1 = PTR__objc_msgSend_00441098;
  uVar6 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSMutableDictionary,"new");
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  (*(code *)puVar2)(uVar7);
  uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSMutableString,"new");
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  (*(code *)puVar2)(uVar7);
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x30),"appendFormat:",&cf___,
                    *(undefined8 *)(param_1 + 0x40));
  if (*(char *)(param_1 + 0x48) != '\0') {
    (*(code *)PTR__objc_msgSend_00441098)
              (*(undefined8 *)(param_1 + 0x30),"appendFormat:",&cf__lu,param_3);
  }
  (*(code *)PTR__objc_msgSend_00441098)(*(undefined8 *)(param_1 + 0x30),"appendFormat:",&cf__Ticket)
  ;
  puVar1 = PTR__objc_msgSend_00441098;
  if (param_4 == '\0') {
    uVar7 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSMutableString,"new");
    (*(code *)puVar1)(uVar7,"appendFormat:",&cf____,*(undefined8 *)(param_1 + 0x30));
    uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x28),"setObject:forKeyedSubscript:",uVar6,uVar7);
    (*(code *)PTR__objc_release_004410a0)(uVar6);
    uVar6 = (*(code *)puVar1)(param_1,"tssKeyName:unitNumber:",&cf_BoardID,param_3);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar5 = (*(code *)puVar1)(param_1,"boardID");
    uVar8 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithUnsignedInt:",uVar5);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x28),"setObject:forKeyedSubscript:",uVar8,uVar6);
    puVar2 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(uVar8);
    uVar8 = (*(code *)puVar1)(param_1,"tssKeyName:unitNumber:",&cf_ChipID,param_3);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    uVar5 = (*(code *)puVar1)(param_1,"chipID");
    uVar9 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithUnsignedInt:",uVar5);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x28),"setObject:forKeyedSubscript:",uVar9,uVar8);
    (*(code *)puVar2)(uVar9);
    uVar9 = (*(code *)puVar1)(param_1,"tssKeyName:unitNumber:",&cf_ECID,param_3);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    uVar10 = (*(code *)puVar1)(param_1,"ecID");
    uVar10 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithUnsignedLongLong:",uVar10);
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x28),"setObject:forKeyedSubscript:",uVar10,uVar9);
    puVar2 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(uVar10);
    uVar10 = (*(code *)puVar1)(param_1,"tssKeyName:unitNumber:",&cf_Nonce,param_3);
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    uVar11 = (*(code *)puVar1)(param_1,"nonce");
    uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
    (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x28),"setObject:forKeyedSubscript:",uVar11,uVar10);
    (*(code *)puVar2)(uVar11);
    uVar11 = (*(code *)puVar1)(param_1,"tssKeyName:unitNumber:",&cf_ProductionMode,param_3);
    uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
    cVar3 = (*(code *)puVar1)(param_1,"productionMode");
    uVar12 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithBool:",cVar3 != '\0');
    uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
    (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x28),"setObject:forKeyedSubscript:",uVar12,uVar11);
    puVar2 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(uVar12);
    uVar12 = (*(code *)puVar1)(param_1,"tssKeyName:unitNumber:",&cf_SecurityDomain,param_3);
    uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
    uVar4 = (*(code *)puVar1)(param_1,"securityDomain");
    uVar13 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithUnsignedChar:",uVar4);
    uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
    (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x28),"setObject:forKeyedSubscript:",uVar13,uVar12);
    (*(code *)puVar2)(uVar13);
    uVar13 = (*(code *)puVar1)(param_1,"tssKeyName:unitNumber:",&cf_SecurityMode,param_3);
    uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
    cVar3 = (*(code *)puVar1)(param_1,"securityMode");
    uVar14 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithBool:",cVar3 != '\0');
    uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
    (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x28),"setObject:forKeyedSubscript:",uVar14,uVar13);
    (*(code *)puVar2)(uVar14);
    (*(code *)puVar2)(uVar13);
    (*(code *)puVar2)(uVar12);
    (*(code *)puVar2)(uVar11);
    (*(code *)puVar2)(uVar10);
    (*(code *)puVar2)(uVar9);
    (*(code *)puVar2)(uVar8);
    (*(code *)puVar2)(uVar6);
    (*(code *)puVar2)(uVar7);
  }
  puVar1 = PTR__objc_msgSend_00441098;
  (*(code *)PTR__objc_msgSend_00441098)
            (param_1,"processMeasurementsForTSSOptions:unitNumber:asMeasurement:",
             *(undefined8 *)(param_1 + 0x28),param_3,(int)param_4);
  IVar15 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,"dictionaryWithDictionary:",
                             *(undefined8 *)(param_1 + 0x28));
  return IVar15;
}

