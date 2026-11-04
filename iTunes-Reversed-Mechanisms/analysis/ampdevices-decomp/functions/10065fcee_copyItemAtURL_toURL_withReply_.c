// name: copyItemAtURL:toURL:withReply:
// address: 10065fcee

/* Function Stack Size: 0x28 bytes */

ID AMPDevicesClientConnection::copyItemAtURL_toURL_withReply_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  dispatch_queue_t pdVar5;
  undefined8 uVar6;
  ID IVar7;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  local_40 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  local_38 = (*(code *)puVar1)(param_4);
  uVar2 = (*(code *)puVar1)(param_5);
  uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSProgress_10082c6a8,
                     PTR_s_progressWithTotalUnitCount__10088dc00,0xffffffffffffffff);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  pdVar5 = _dispatch_get_current_queue();
  local_48 = _objc_retainAutoreleasedReturnValue(pdVar5);
  uVar6 = local_38;
  uVar3 = local_40;
  puVar1 = PTR__objc_retain_10082c7b8;
  local_90 = PTR___NSConcreteStackBlock_10082caf0;
  local_88 = 0xc2000000;
  local_80 = FUN_10065fe59;
  local_78 = &DAT_1008717b0;
  local_70 = local_40;
  local_68 = local_38;
  local_58 = uVar2;
  local_60 = (*(code *)PTR__objc_retain_10082c7b8)(uVar4);
  local_50 = local_60;
  uVar6 = (*(code *)puVar1)(uVar6);
  local_38 = (*(code *)puVar1)(uVar2);
  uVar2 = (*(code *)puVar1)(uVar3);
  uVar3 = local_48;
  _dispatch_async(local_48,&local_90);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  (*(code *)puVar1)(local_60);
  (*(code *)puVar1)(local_68);
  (*(code *)puVar1)(local_58);
  (*(code *)puVar1)(local_70);
  (*(code *)puVar1)(uVar6);
  (*(code *)puVar1)(local_38);
  (*(code *)puVar1)(uVar2);
  IVar7 = _objc_autoreleaseReturnValue(local_50);
  return IVar7;
}

