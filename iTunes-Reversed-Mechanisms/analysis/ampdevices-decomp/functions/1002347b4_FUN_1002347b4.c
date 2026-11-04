// name: FUN_1002347b4
// address: 1002347b4

void FUN_1002347b4(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = operator_new(0x20);
  *puVar2 = &PTR_FUN_10083e590;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}

