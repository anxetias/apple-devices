// name: FUN_10026ac2c
// address: 10026ac2c

void FUN_10026ac2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  uVar2 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  local_58 = PTR___NSConcreteStackBlock_10082caf0;
  local_50 = 0xc2000000;
  local_48 = FUN_10026acca;
  local_40 = &DAT_10083f518;
  local_30 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x20));
  local_38 = uVar2;
  uVar2 = (*(code *)puVar1)(uVar2);
  _dispatch_async(PTR___dispatch_main_q_10082cb60,&local_58);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(local_38);
  (*(code *)puVar1)(local_30);
  (*(code *)puVar1)(uVar2);
  return;
}

