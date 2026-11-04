// name: openPanelWithParameters:withReply:
// address: 10066953a

/* Function Stack Size: 0x20 bytes */

void AMPDevicesClientBroadcaster::openPanelWithParameters_withReply_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *local_60;
  ID local_58;
  undefined8 local_50;
  undefined8 local_48;
  SEL local_40;
  SEL local_38;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  local_38 = param_2;
  uVar2 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  uVar3 = (*(code *)puVar1)(param_4);
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(param_1,PTR_s_xpcDispatchQueue_10088df38);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  puVar1 = PTR__objc_retain_10082c7b8;
  local_78 = PTR___NSConcreteStackBlock_10082caf0;
  local_70 = 0xc2000000;
  local_68 = FUN_100669642;
  local_60 = &DAT_100871ab0;
  local_40 = local_38;
  local_58 = param_1;
  local_50 = uVar2;
  local_48 = uVar3;
  uVar3 = (*(code *)PTR__objc_retain_10082c7b8)(uVar3);
  uVar2 = (*(code *)puVar1)(uVar2);
  _dispatch_async(uVar4,&local_78);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  (*(code *)puVar1)(local_48);
  (*(code *)puVar1)(local_50);
  (*(code *)puVar1)(uVar3);
  (*(code *)puVar1)(uVar2);
  return;
}

