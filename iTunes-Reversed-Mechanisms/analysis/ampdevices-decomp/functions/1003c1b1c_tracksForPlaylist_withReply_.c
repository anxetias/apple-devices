// name: tracksForPlaylist:withReply:
// address: 1003c1b1c

/* Function Stack Size: 0x20 bytes */

void __thiscall
AMPDevicesFrameworkConnection::tracksForPlaylist_withReply_
          (AMPDevicesFrameworkConnection *this,ID param_1,SEL param_2,unsigned_long_long param_3,
          ID param_4,undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *local_78;
  AMPDevicesFrameworkConnection *local_70;
  undefined8 local_68;
  SEL local_60;
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  uVar3 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  local_90 = PTR___NSConcreteStackBlock_10082caf0;
  local_88 = 0xc2000000;
  local_80 = FUN_1003c1c28;
  local_78 = &DAT_100857278;
  local_70 = this;
  local_60 = param_2;
  local_68 = (*(code *)puVar1)(uVar3);
  puVar2 = PTR_s_processRequestBlockOnMainThread__10088ca10;
  local_58 = PTR___NSConcreteStackBlock_10082caf0;
  local_50 = 0xc2000000;
  local_48 = FUN_1003c1cf9;
  local_40 = &DAT_10083f548;
  local_38 = local_68;
  uVar3 = (*(code *)puVar1)(local_68);
  processRequestBlockOnMainThread_withTimeoutBlock_
            ((ID)this,puVar2,(ID)&local_90,(int)&local_58,param_4,param_5);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(local_38);
  (*(code *)puVar1)(local_68);
  (*(code *)puVar1)(uVar3);
  return;
}

