// name: mediaItemsForDomains:withMediaKinds:withDeviceCapabilities:withReply:
// address: 1003c14da

/* Function Stack Size: 0x30 bytes */

void AMPDevicesFrameworkConnection::
     mediaItemsForDomains_withMediaKinds_withDeviceCapabilities_withReply_
               (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4,
               unsigned_long_long param_5,ID param_6,undefined4 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  unsigned_long_long uVar3;
  undefined4 uVar4;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *local_88;
  ID local_80;
  undefined8 local_78;
  unsigned_long_long local_70;
  unsigned_long_long local_68;
  unsigned_long_long local_60;
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  
  uVar4 = (undefined4)param_6;
  uVar3 = param_5;
  uVar2 = (*(code *)PTR__objc_retain_10082c7b8)(param_6);
  local_a0 = PTR___NSConcreteStackBlock_10082caf0;
  local_98 = 0xc2000000;
  local_90 = FUN_1003c15f5;
  local_88 = &DAT_1008571e8;
  local_80 = param_1;
  local_70 = param_3;
  local_68 = param_4;
  local_60 = param_5;
  local_78 = (*(code *)PTR__objc_retain_10082c7b8)(uVar2);
  puVar1 = PTR_s_processRequestBlockOnMainThread__10088ca10;
  local_58 = PTR___NSConcreteStackBlock_10082caf0;
  local_50 = 0xc2000000;
  local_48 = FUN_1003c16d4;
  local_40 = &DAT_10083f548;
  local_38 = local_78;
  uVar2 = (*(code *)PTR__objc_retain_10082c7b8)(local_78);
  processRequestBlockOnMainThread_withTimeoutBlock_
            (param_1,puVar1,(ID)&local_a0,(int)&local_58,uVar3,uVar4);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(local_38);
  (*(code *)puVar1)(local_78);
  (*(code *)puVar1)(uVar2);
  return;
}

