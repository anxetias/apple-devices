// name: FUN_10014f29a
// address: 10014f29a

void FUN_10014f29a(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  uVar2 = (*(code *)PTR__objc_retain_10082c7b8)(*param_2);
  *param_1 = uVar2;
  uVar2 = (*(code *)puVar1)(param_2[1]);
  param_1[1] = uVar2;
  uVar2 = (*(code *)puVar1)(param_2[2]);
  param_1[2] = uVar2;
  FUN_1001b7a5c(param_1 + 3,param_2 + 3);
  return;
}

