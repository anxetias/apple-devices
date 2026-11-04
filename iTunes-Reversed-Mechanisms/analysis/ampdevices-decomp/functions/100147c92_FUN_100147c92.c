// name: FUN_100147c92
// address: 100147c92

void FUN_100147c92(long *param_1,char *param_2)

{
  size_t sVar1;
  char *pcVar2;
  ulong uVar3;
  
  sVar1 = _strlen(param_2);
  if (0xfffffffffffffff7 < sVar1) {
    FUN_100147d20(param_1);
    return;
  }
  if (sVar1 < 0x17) {
    *(char *)param_1 = (char)sVar1 * '\x02';
    pcVar2 = (char *)((long)param_1 + 1);
    if (sVar1 == 0) goto LAB_100147d0a;
  }
  else {
    uVar3 = 0x1a;
    if ((sVar1 | 7) != 0x17) {
      uVar3 = (sVar1 | 7) + 1;
    }
    pcVar2 = operator_new(uVar3);
    param_1[2] = (long)pcVar2;
    *param_1 = uVar3 + 1;
    param_1[1] = sVar1;
  }
  _memmove(pcVar2,param_2,sVar1);
LAB_100147d0a:
  pcVar2[sVar1] = '\0';
  return;
}

