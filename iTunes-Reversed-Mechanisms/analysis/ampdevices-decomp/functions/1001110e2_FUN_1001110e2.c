// name: FUN_1001110e2
// address: 1001110e2

void FUN_1001110e2(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_10010bca8();
  *param_1 = &PTR_FUN_100835988;
  *(undefined1 *)(param_1 + 0x489) = 1;
  *(undefined4 *)((long)param_1 + 0x244c) = 0;
  *(uint *)((long)param_1 + 0x244c) = (uint)(*(int *)(param_2 + 0x38) == *(int *)(param_2 + 0x2c));
  param_1[0x48a] = 0;
  param_1[0x48b] = 0;
  param_1[0x48c] = 0;
  param_1[0x48d] = 0;
  param_1[0x48e] = 0;
  param_1[0x48f] = 0;
  param_1[0x490] = 0;
  param_1[0x491] = 0;
  param_1[0x492] = 0;
  param_1[0x493] = 0;
  param_1[0x494] = 0;
  param_1[0x495] = 0;
  if (*(uint *)(param_2 + 0x38) < 0x15888) {
    uVar1 = FUN_100105f68(0x1cbd0);
    FUN_1001150b4(uVar1,*(undefined1 *)((long)param_1 + 0x244c));
  }
  else {
    uVar1 = FUN_100105f68(0x1cd70);
    FUN_100116e42(uVar1,0);
  }
  param_1[0x488] = uVar1;
  return;
}

