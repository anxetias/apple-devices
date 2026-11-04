// name: FUN_100392e8a
// address: 100392e8a

void FUN_100392e8a(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x890);
  *plVar2 = 0;
  plVar2[1] = 0;
  FUN_1001a7a9e(plVar2 + 2,param_2);
  _memcpy(plVar2 + 4,(void *)(param_2 + 0x10),0x848);
  FUN_1001b7a5c(plVar2 + 0x10d,param_2 + 0x858);
  *(undefined4 *)(plVar2 + 0x10f) = *(undefined4 *)(param_2 + 0x868);
  FUN_1001a8c1c(plVar2 + 0x110,param_2 + 0x870);
  FUN_1001a8c1c(plVar2 + 0x111,param_2 + 0x878);
  plVar2[1] = (long)param_1;
  lVar1 = *param_1;
  *plVar2 = lVar1;
  *(long **)(lVar1 + 8) = plVar2;
  *param_1 = (long)plVar2;
  param_1[2] = param_1[2] + 1;
  return;
}

