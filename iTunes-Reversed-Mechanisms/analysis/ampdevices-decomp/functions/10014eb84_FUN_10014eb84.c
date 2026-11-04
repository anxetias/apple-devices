// name: FUN_10014eb84
// address: 10014eb84

void FUN_10014eb84(long param_1)

{
  void *pvVar1;
  undefined *puVar2;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  FUN_10012dbb6(pvVar1);
  puVar2 = PTR__objc_release_10082c7b0;
  if (pvVar1 != (void *)0x0) {
    (*(code *)PTR__objc_release_10082c7b0)(*(undefined8 *)((long)pvVar1 + 0xb8));
    (*(code *)puVar2)(*(undefined8 *)((long)pvVar1 + 0xb0));
    FUN_10012da54(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

