// name: FUN_1001ba026
// address: 1001ba026

int FUN_1001ba026(long *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  size_t *psVar3;
  undefined8 local_38;
  size_t *psStack_30;
  
  if (param_1[1] == 0) {
    if (*param_1 == 0) {
      if (param_2 == (char *)0x0) {
        return 0;
      }
      return -(uint)(*param_2 != '\0');
    }
    if (param_2 != (char *)0x0) {
      sVar2 = _strlen(param_2);
      local_38 = 0;
      psStack_30 = (size_t *)0x0;
      if (sVar2 != 0) {
        psVar3 = operator_new(sVar2 + 0x10,(nothrow_t *)PTR_nothrow_10082c970);
        *psVar3 = sVar2;
        *(undefined4 *)(psVar3 + 1) = 1;
        *(undefined1 *)((long)psVar3 + sVar2 + 0xc) = 0;
        _memcpy((void *)((long)psVar3 + 0xc),param_2,sVar2);
        psStack_30 = psVar3;
      }
      iVar1 = FUN_1001b9c66(param_1,&local_38);
      FUN_1001b811c(&local_38);
      return iVar1;
    }
  }
  else if (param_2 != (char *)0x0) {
    iVar1 = _strcmp((char *)(param_1[1] + 0xc),param_2);
    return iVar1;
  }
  return 1;
}

