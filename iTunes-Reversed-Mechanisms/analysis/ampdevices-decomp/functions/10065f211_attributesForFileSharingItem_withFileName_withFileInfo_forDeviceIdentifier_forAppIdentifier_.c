// name: attributesForFileSharingItem:withFileName:withFileInfo:forDeviceIdentifier:forAppIdentifier:
// address: 10065f211

/* Function Stack Size: 0x38 bytes */

ID AMPDevicesClientConnection::
   attributesForFileSharingItem_withFileName_withFileInfo_forDeviceIdentifier_forAppIdentifier_
             (ID param_1,SEL param_2,const_JRFileSpec__ param_3,unsigned_short *param_4,
             const_JRFileSpecInfo__ param_5,ID param_6,ID param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID IVar8;
  cfstringStruct *pcVar9;
  undefined8 local_80;
  const_JRFileSpec__ local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  local_50 = (*(code *)PTR__objc_retain_10082c7b8)(param_6);
  local_40 = (*(code *)puVar1)(param_7);
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSMutableDictionary_10082dfb0,PTR_s_dictionary_10088c4a0);
  local_70 = _objc_retainAutoreleasedReturnValue(uVar4);
  local_68 = FUN_10036e653(param_3);
  local_78 = param_3;
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(local_68,PTR_s_pathComponents_10088d978);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSString_10082c6b8;
  local_60 = uVar4;
  lVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_count_10088bdc0);
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar4,PTR_s_subarrayWithRange__10088dd98,1,lVar5 + -1);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(puVar1,PTR_s_pathWithComponents__10088dda0,uVar4);
  local_38 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  uVar4 = local_70;
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSCharacterSet_10082c648,
                     PTR_s_URLPathAllowedCharacterSet_10088dda8);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                    (local_38,PTR_s_stringByAddingPercentEncodingWit_10088ddb0,uVar6);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  puVar2 = PTR_s_stringWithFormat__10088c038;
  local_58 = uVar7;
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSString_10082c6b8,PTR_s_stringWithFormat__10088c038,
                     &cf_afc___________,local_50,local_40,uVar7);
  local_48 = _objc_retainAutoreleasedReturnValue(uVar6);
  puVar1 = PTR_s_setObject_forKey__10088c000;
  pcVar9 = &cf_folder;
  if (param_5->field0_0x0 == '\0') {
    pcVar9 = &cf_file;
  }
  (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_setObject_forKey__10088c000,pcVar9,&cf_type);
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSString_10082c6b8,
                     PTR_s_stringWithCharacters_length__10088d820,param_4 + 1,*param_4);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar4,puVar1,uVar6,&cf_name);
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSString_10082c6b8,puVar2,&cf______,local_40,local_38);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar4,puVar1,uVar6,&cf_path);
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar4,puVar1,local_48,&cf_url);
  if (param_5->field5_0x8 != 0) {
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                      ((double)param_5->field5_0x8 -
                       *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008,
                       PTR__OBJC_CLASS___NSDate_10082df88,
                       PTR_s_dateWithTimeIntervalSinceReferen_10088c448);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)PTR__objc_msgSend_10082c770)(uVar4,puVar1,uVar6,&cf_date);
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  }
  if (param_5->field0_0x0 == '\0') {
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSNumber_10082c690,
                       PTR_s_numberWithUnsignedLongLong__10088be20,
                       *(long *)((long)&(param_5->field9_0x1c).field0.field1_0x8 + 4) +
                       *(long *)((long)&(param_5->field9_0x1c).field0.field0_0x0 + 4));
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)PTR__objc_msgSend_10082c770)(uVar4,puVar1,uVar6,&cf_size);
  }
  else {
    local_80 = 0;
    iVar3 = FUN_100182a5c(local_78,0,&local_80,0);
    if (iVar3 != 0) goto LAB_10065f563;
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSNumber_10082c690,
                       PTR_s_numberWithUnsignedLongLong__10088be20,local_80);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)PTR__objc_msgSend_10082c770)(uVar4,puVar1,uVar6,&cf_size);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
LAB_10065f563:
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(local_48);
  (*(code *)puVar1)(local_58);
  (*(code *)puVar1)(local_38);
  (*(code *)puVar1)(local_60);
  (*(code *)puVar1)(local_68);
  (*(code *)puVar1)(local_40);
  (*(code *)puVar1)(local_50);
  IVar8 = _objc_autoreleaseReturnValue(uVar4);
  return IVar8;
}

