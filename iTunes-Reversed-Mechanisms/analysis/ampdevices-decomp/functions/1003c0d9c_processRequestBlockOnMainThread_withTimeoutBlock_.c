// name: processRequestBlockOnMainThread:withTimeoutBlock:
// address: 1003c0d9c

/* Function Stack Size: 0x20 bytes */

void AMPDevicesFrameworkConnection::processRequestBlockOnMainThread_withTimeoutBlock_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4,ID param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 in_register_0000000c;
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  uVar2 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  local_30 = (*(code *)puVar1)(CONCAT44(in_register_0000000c,param_4));
  local_58 = PTR___NSConcreteStackBlock_10082caf0;
  local_50 = 0xc2000000;
  local_48 = FUN_1003c0e48;
  local_40 = &DAT_100857188;
  local_38 = uVar2;
  uVar3 = (*(code *)puVar1)(local_30);
  uVar2 = (*(code *)puVar1)(uVar2);
  _dispatch_async(PTR___dispatch_main_q_10082cb60,&local_58);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(local_30);
  (*(code *)puVar1)(local_38);
  (*(code *)puVar1)(uVar3);
  (*(code *)puVar1)(uVar2);
  return;
}

