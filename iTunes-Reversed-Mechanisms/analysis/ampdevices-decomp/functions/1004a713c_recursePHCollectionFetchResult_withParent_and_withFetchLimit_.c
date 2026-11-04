// name: recursePHCollectionFetchResult:withParent:and:withFetchLimit:
// address: 1004a713c

/* Function Stack Size: 0x30 bytes */

void AMPPhotoKitImporter::recursePHCollectionFetchResult_withParent_and_withFetchLimit_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,unsigned_long_long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *local_68;
  ID local_60;
  undefined8 local_58;
  undefined8 local_50;
  unsigned_long_long local_48;
  ID local_40;
  unsigned_long_long local_38;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  local_40 = param_3;
  local_38 = param_6;
  uVar3 = (*(code *)PTR__objc_retain_10082c7b8)(param_4);
  local_50 = (*(code *)puVar1)(param_5);
  puVar2 = PTR_s_enumerateObjectsUsingBlock__10088bdc8;
  local_80 = PTR___NSConcreteStackBlock_10082caf0;
  local_78 = 0xc2000000;
  local_70 = FUN_1004a723b;
  local_68 = &DAT_10085cf58;
  local_48 = local_38;
  local_60 = param_1;
  local_58 = uVar3;
  uVar4 = (*(code *)puVar1)(local_50);
  uVar3 = (*(code *)puVar1)(uVar3);
  (*(code *)PTR__objc_msgSend_10082c770)(local_40,puVar2,&local_80);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(local_50);
  (*(code *)puVar1)(local_58);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar3);
  return;
}

