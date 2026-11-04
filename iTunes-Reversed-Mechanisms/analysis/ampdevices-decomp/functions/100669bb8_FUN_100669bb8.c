// name: FUN_100669bb8
// address: 100669bb8

undefined8 * FUN_100669bb8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__objc_release_10082c7b0;
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    uVar1 = *param_1;
    *param_1 = 0;
    uVar2 = *param_3;
    *param_3 = uVar1;
    (*(code *)puVar3)(uVar2);
    uVar1 = param_1[1];
    param_1[1] = 0;
    uVar2 = param_3[1];
    param_3[1] = uVar1;
    (*(code *)puVar3)(uVar2);
    uVar1 = param_1[2];
    param_1[2] = 0;
    uVar2 = param_3[2];
    param_3[2] = uVar1;
    (*(code *)puVar3)(uVar2);
    param_3 = param_3 + 3;
  }
  return param_3;
}

