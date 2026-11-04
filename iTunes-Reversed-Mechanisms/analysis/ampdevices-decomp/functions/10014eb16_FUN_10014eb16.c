// name: FUN_10014eb16
// address: 10014eb16

void FUN_10014eb16(void *param_1)

{
  undefined *puVar1;
  
  FUN_10012dbb6();
  puVar1 = PTR__objc_release_10082c7b0;
  if (param_1 != (void *)0x0) {
    (*(code *)PTR__objc_release_10082c7b0)(*(undefined8 *)((long)param_1 + 0xb8));
    (*(code *)puVar1)(*(undefined8 *)((long)param_1 + 0xb0));
    FUN_10012da54(param_1);
    operator_delete(param_1);
    return;
  }
  return;
}

