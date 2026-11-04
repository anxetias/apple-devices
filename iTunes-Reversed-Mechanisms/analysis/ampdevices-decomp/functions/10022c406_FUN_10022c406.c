// name: FUN_10022c406
// address: 10022c406

void FUN_10022c406(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10083e3e0;
  if (param_1[0x3e] != 0) {
    FUN_1001c64c1();
  }
  if (param_1[0x42] != 0) {
    FUN_1001c64c1();
  }
  if (param_1[0x5a] != 0) {
    FUN_1001c8d4b(param_1[0x5a],1);
  }
  if (param_1[0x5b] != 0) {
    FUN_1001c64c1();
  }
  if (param_1[0x3c] != 0) {
    FUN_1002ea25a();
  }
  pvVar1 = (void *)param_1[0x50];
  if (pvVar1 != (void *)0x0) {
    param_1[0x51] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x4d];
  if (pvVar1 != (void *)0x0) {
    param_1[0x4e] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x4a];
  if (pvVar1 != (void *)0x0) {
    param_1[0x4b] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

