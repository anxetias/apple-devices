// name: FUN_1005f341a
// address: 1005f341a

void FUN_1005f341a(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = operator_new(0x18);
  *puVar2 = &PTR_FUN_10086fff0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[2] = uVar1;
  return;
}

