// name: FUN_100382da2
// address: 100382da2

void FUN_100382da2(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  plVar1 = (long *)*param_1;
  puVar2 = (undefined8 *)*plVar1;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  puVar4 = (undefined8 *)plVar1[1];
  puVar3 = puVar2;
  if (puVar4 != puVar2) {
    do {
      puVar4 = puVar4 + -10;
      (**(code **)*puVar4)(puVar4);
    } while (puVar4 != puVar2);
    puVar3 = *(undefined8 **)*param_1;
  }
  plVar1[1] = (long)puVar2;
  operator_delete(puVar3);
  return;
}

