// name: openDevice:forClientID:withReply:
// address: 1003c113c

/* Function Stack Size: 0x24 bytes */

void AMPDevicesFrameworkConnection::openDevice_forClientID_withReply_
               (ID param_1,SEL param_2,ID param_3,unsigned_int param_4,ID param_5,undefined4 param_6
               )

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 in_register_0000000c;
  ID IVar4;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  ID local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  IVar4 = param_5;
  uVar2 = (*(code *)PTR__objc_retain_10082c7b8)
                    (param_3,param_2,param_3,CONCAT44(in_register_0000000c,param_4));
  uVar3 = (*(code *)puVar1)(param_5);
  local_70 = PTR___NSConcreteStackBlock_10082caf0;
  local_68 = 0xc2000000;
  local_60 = FUN_1003c127c;
  local_58 = &DAT_1008571b8;
  local_50 = uVar2;
  local_48 = param_1;
  local_78 = (*(code *)puVar1)(uVar3);
  local_98 = PTR___NSConcreteStackBlock_10082caf0;
  local_90 = 0xc2000000;
  local_88 = FUN_1003c14b9;
  local_80 = &DAT_10083f548;
  local_40 = local_78;
  local_38 = (*(code *)puVar1)(local_78);
  uVar2 = (*(code *)puVar1)(uVar2);
  processRequestBlockOnMainThread_withTimeoutBlock_
            (param_1,PTR_s_processRequestBlockOnMainThread__10088ca10,(ID)&local_70,(int)&local_98,
             IVar4,param_6);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(local_78);
  (*(code *)puVar1)(local_40);
  (*(code *)puVar1)(local_50);
  (*(code *)puVar1)(local_38);
  (*(code *)puVar1)(uVar2);
  return;
}

