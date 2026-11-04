// name: FUN_1001b9b0c
// address: 1001b9b0c

ulong FUN_1001b9b0c(long *param_1,char *param_2,undefined4 param_3)

{
  uint uVar1;
  ulong uVar2;
  size_t sVar3;
  size_t *psVar4;
  undefined8 local_48;
  size_t *psStack_40;
  
  if (param_1[1] == 0) {
    if (*param_1 == 0) {
      return (ulong)-(uint)(param_2 != (char *)0x0);
    }
    if (param_2 != (char *)0x0) {
      sVar3 = _strlen(param_2);
      local_48 = 0;
      psStack_40 = (size_t *)0x0;
      if (sVar3 != 0) {
        psVar4 = operator_new(sVar3 + 0x10,(nothrow_t *)PTR_nothrow_10082c970);
        *psVar4 = sVar3;
        *(undefined4 *)(psVar4 + 1) = 1;
        *(undefined1 *)((long)psVar4 + sVar3 + 0xc) = 0;
        _memcpy((void *)((long)psVar4 + 0xc),param_2,sVar3);
        psStack_40 = psVar4;
      }
      uVar1 = FUN_1001b96de(param_1,&local_48,param_3);
      FUN_1001b811c(&local_48);
      return (ulong)uVar1;
    }
  }
  else if (param_2 != (char *)0x0) {
    uVar2 = FUN_1001b9bf8(param_1[1],param_2,param_3);
    return uVar2;
  }
  return 1;
}

