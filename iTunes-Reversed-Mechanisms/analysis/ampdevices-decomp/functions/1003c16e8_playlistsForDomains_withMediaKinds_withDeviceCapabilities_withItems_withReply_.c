// name: playlistsForDomains:withMediaKinds:withDeviceCapabilities:withItems:withReply:
// address: 1003c16e8

/* Function Stack Size: 0x34 bytes */

void AMPDevicesFrameworkConnection::
     playlistsForDomains_withMediaKinds_withDeviceCapabilities_withItems_withReply_
               (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4,
               unsigned_long_long param_5,char param_6,ID param_7,undefined4 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  unsigned_long_long uVar3;
  undefined3 in_register_00000089;
  undefined4 uVar4;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *local_98;
  ID local_90;
  undefined8 local_88;
  unsigned_long_long local_80;
  unsigned_long_long local_78;
  unsigned_long_long local_70;
  undefined1 local_68;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined4 local_34;
  
  uVar4 = CONCAT31(in_register_00000089,param_6);
  uVar3 = param_5;
  local_34 = uVar4;
  uVar2 = (*(code *)PTR__objc_retain_10082c7b8)(param_7);
  local_b0 = PTR___NSConcreteStackBlock_10082caf0;
  local_a8 = 0xc2000000;
  local_a0 = FUN_1003c1815;
  local_98 = &DAT_100857218;
  local_68 = (undefined1)local_34;
  local_90 = param_1;
  local_80 = param_3;
  local_78 = param_4;
  local_70 = param_5;
  local_88 = (*(code *)PTR__objc_retain_10082c7b8)(uVar2);
  puVar1 = PTR_s_processRequestBlockOnMainThread__10088ca10;
  local_60 = PTR___NSConcreteStackBlock_10082caf0;
  local_58 = 0xc2000000;
  local_50 = FUN_1003c18fa;
  local_48 = &DAT_10083f548;
  local_40 = local_88;
  uVar2 = (*(code *)PTR__objc_retain_10082c7b8)(local_88);
  processRequestBlockOnMainThread_withTimeoutBlock_
            (param_1,puVar1,(ID)&local_b0,(int)&local_60,uVar3,uVar4);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(local_40);
  (*(code *)puVar1)(local_88);
  (*(code *)puVar1)(uVar2);
  return;
}

