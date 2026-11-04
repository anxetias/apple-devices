// name: FUN_1001cebfc
// address: 1001cebfc

undefined8 FUN_1001cebfc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_1001e9fee(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  FUN_1001ea046(param_1 + 0x38);
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = uVar2;
  }
  return uVar1;
}

