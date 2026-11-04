// name: FUN_100469954
// address: 100469954

ulong * FUN_100469954(ulong *param_1,void *param_2,char *param_3)

{
  byte bVar1;
  ulong uVar2;
  char *pcVar3;
  byte *pbVar4;
  
  bVar1 = (byte)*param_1;
  uVar2 = (ulong)bVar1;
  if ((bVar1 & 1) == 0) {
    if (param_3 < (char *)0x17) {
      pbVar4 = (byte *)((long)param_1 + 1);
LAB_1004699bd:
      if (param_3 != (char *)0x0) {
        _memmove(pbVar4,param_2,(size_t)param_3);
        uVar2 = (ulong)(byte)*param_1;
      }
      if ((uVar2 & 1) == 0) {
        *(char *)param_1 = (char)param_3 * '\x02';
      }
      else {
        param_1[1] = (ulong)param_3;
      }
      pbVar4[(long)param_3] = 0;
      return param_1;
    }
    uVar2 = (ulong)(bVar1 >> 1);
    pcVar3 = (char *)0x16;
  }
  else {
    uVar2 = *param_1;
    pcVar3 = (char *)((uVar2 & 0xfffffffffffffffe) - 1);
    if (param_3 <= pcVar3) {
      pbVar4 = (byte *)param_1[2];
      goto LAB_1004699bd;
    }
    uVar2 = param_1[1];
  }
  std::string::__grow_by_and_replace
            ((ulong)param_1,(ulong)pcVar3,(long)param_3 - (long)pcVar3,uVar2,0,uVar2,param_3);
  return param_1;
}

