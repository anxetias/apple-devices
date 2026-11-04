// name: FUN_10037c4ac
// address: 10037c4ac

void FUN_10037c4ac(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_2 != param_3) {
    puVar1 = (undefined8 *)FUN_100382e00(param_3,*(undefined8 *)(param_1 + 8),param_2);
    puVar2 = *(undefined8 **)(param_1 + 8);
    while (puVar2 != puVar1) {
      puVar2 = puVar2 + -10;
      (**(code **)*puVar2)(puVar2);
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}

