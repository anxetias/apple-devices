// name: FUN_10021838c
// address: 10021838c

void FUN_10021838c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    LOCK();
    *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  puVar1 = operator_new(0x28);
  *puVar1 = &PTR_FUN_10083dce0;
  puVar1[1] = FUN_10020fe5c;
  puVar1[2] = param_2;
  puVar1[3] = param_3;
  puVar1[4] = param_4;
  *(undefined8 **)(param_1 + 0x20) = puVar1;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}

