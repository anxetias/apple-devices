// name: FUN_1002dff9b
// address: 1002dff9b

ulong FUN_1002dff9b(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_1002de174(param_1,param_2,*(undefined4 *)(param_3 + 8),0x120);
  if ((int)uVar1 == 0) {
    uVar1 = (ulong)(-(uint)(*(uint *)(param_1 + 8) < *(uint *)(param_2 + 8)) | 1);
  }
  return uVar1;
}

