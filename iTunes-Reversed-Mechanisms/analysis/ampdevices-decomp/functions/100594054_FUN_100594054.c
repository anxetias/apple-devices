// name: FUN_100594054
// address: 100594054

ulong FUN_100594054(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = 0xffffffff;
  if (*param_2 <= *param_1) {
    uVar1 = (ulong)(*param_2 < *param_1);
  }
  return uVar1;
}

