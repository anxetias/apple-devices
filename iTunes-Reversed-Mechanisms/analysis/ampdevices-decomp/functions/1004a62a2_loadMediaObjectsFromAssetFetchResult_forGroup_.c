// name: loadMediaObjectsFromAssetFetchResult:forGroup:
// address: 1004a62a2

/* Function Stack Size: 0x20 bytes */

void AMPPhotoKitImporter::loadMediaObjectsFromAssetFetchResult_forGroup_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *local_48;
  ID local_40;
  undefined8 local_38;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  uVar2 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  uVar3 = (*(code *)puVar1)(param_4);
  uVar4 = _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_10082dfa0);
  local_60 = PTR___NSConcreteStackBlock_10082caf0;
  local_58 = 0xc2000000;
  local_50 = FUN_1004a63b3;
  local_48 = &DAT_10085cf28;
  local_40 = param_1;
  uVar4 = (*(code *)PTR__objc_retain_10082c7b8)(uVar4);
  local_38 = uVar4;
  (*(code *)PTR__objc_msgSend_10082c770)
            (uVar2,PTR_s_enumerateObjectsUsingBlock__10088bdc8,&local_60);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_setMediaObjects__10088d5a8,uVar4);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(local_38);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar3);
  (*(code *)puVar1)(uVar2);
  return;
}

