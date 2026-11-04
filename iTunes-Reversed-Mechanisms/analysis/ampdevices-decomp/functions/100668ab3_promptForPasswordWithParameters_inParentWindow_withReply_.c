// name: promptForPasswordWithParameters:inParentWindow:withReply:
// address: 100668ab3

/* Function Stack Size: 0x28 bytes */

void AMPDevicesClientBroadcaster::promptForPasswordWithParameters_inParentWindow_withReply_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *local_70;
  ID local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  SEL local_48;
  undefined8 local_40;
  SEL local_38;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  local_38 = param_2;
  local_40 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  uVar2 = (*(code *)puVar1)(param_4);
  uVar3 = (*(code *)puVar1)(param_5);
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(param_1,PTR_s_xpcDispatchQueue_10088df38);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar4 = local_40;
  puVar1 = PTR__objc_retain_10082c7b8;
  local_88 = PTR___NSConcreteStackBlock_10082caf0;
  local_80 = 0xc2000000;
  local_78 = FUN_100668bef;
  local_70 = &DAT_100871b10;
  local_60 = local_40;
  local_48 = local_38;
  local_68 = param_1;
  local_58 = uVar2;
  local_50 = uVar3;
  local_38 = (SEL)(*(code *)PTR__objc_retain_10082c7b8)(uVar2);
  uVar2 = (*(code *)puVar1)(uVar3);
  uVar4 = (*(code *)puVar1)(uVar4);
  _dispatch_async(uVar5,&local_88);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  (*(code *)puVar1)(local_58);
  (*(code *)puVar1)(local_50);
  (*(code *)puVar1)(local_60);
  (*(code *)puVar1)(local_38);
  (*(code *)puVar1)(uVar2);
  (*(code *)puVar1)(uVar4);
  return;
}

