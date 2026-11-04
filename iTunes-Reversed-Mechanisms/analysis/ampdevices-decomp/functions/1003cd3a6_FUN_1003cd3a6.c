// name: FUN_1003cd3a6
// address: 1003cd3a6

undefined8 FUN_1003cd3a6(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_4f;
  
  if ((int)param_1 == 0x6e616d65) {
    FUN_1001c62d9(&local_58,0x38);
    local_58 = *(undefined8 *)(param_2 + 0x10);
    local_50 = *(undefined1 *)(param_2 + 8);
    local_4f = *(undefined1 *)(param_2 + 9);
    FUN_1002fc1ae(param_3,0x74647666,&local_58);
    return 0;
  }
  uVar1 = FUN_100182c9b(param_1,param_2);
  return uVar1;
}

