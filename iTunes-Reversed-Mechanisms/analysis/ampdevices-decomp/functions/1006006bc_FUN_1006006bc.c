// name: FUN_1006006bc
// address: 1006006bc

void FUN_1006006bc(long param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 local_28 [8];
  
  uVar1 = *param_2;
  cVar2 = FUN_1001e8dbb(**(undefined8 **)(param_1 + 8));
  if (cVar2 != '\0') {
    **(undefined4 **)(param_1 + 0x10) = uVar1;
    FUN_1001a7ad8(*(undefined8 *)(param_1 + 0x18),param_3);
    FUN_1001a7b90(local_28);
    FUN_1001a9164(param_3,local_28,*(undefined8 *)(param_1 + 0x20));
    FUN_1001ab240(local_28);
    FUN_1001e8f15(**(undefined8 **)(param_1 + 8));
  }
  return;
}

