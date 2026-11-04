// name: FUN_1001547d6
// address: 1001547d6

void FUN_1001547d6(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)((undefined8 *)*param_1)[1];
  for (puVar2 = *(undefined8 **)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    _CFRelease(*puVar2);
  }
  return;
}

