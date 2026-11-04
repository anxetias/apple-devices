// name: moveItemAtURL:toURL:withReply:
// address: 100660648

/* Function Stack Size: 0x28 bytes */

ID AMPDevicesClientConnection::moveItemAtURL_toURL_withReply_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *local_60;
  ID local_58;
  undefined8 local_50;
  undefined8 local_48;
  ID local_40;
  undefined8 local_38;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  local_40 = param_4;
  uVar2 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  local_48 = (*(code *)puVar1)(param_5);
  local_78 = PTR___NSConcreteStackBlock_10082caf0;
  local_70 = 0xc2000000;
  local_68 = FUN_100660750;
  local_60 = &DAT_1008719a0;
  local_58 = param_1;
  local_50 = uVar2;
  local_38 = (*(code *)puVar1)(local_48);
  uVar2 = (*(code *)puVar1)(uVar2);
  uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                    (param_1,PTR_s_copyItemAtURL_toURL_withReply__10088de00,uVar2,local_40,&local_78
                    );
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(local_48);
  (*(code *)puVar1)(local_50);
  (*(code *)puVar1)(local_38);
  (*(code *)puVar1)(uVar2);
  IVar4 = _objc_autoreleaseReturnValue(uVar3);
  return IVar4;
}

