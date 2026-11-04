// name: FUN_100505a56
// address: 100505a56

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100505a56(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar3 = _DAT_100718a70;
  auVar1 = pshufb(*param_1,_DAT_100718a70);
  *param_1 = auVar1;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *(ulong *)(param_1[1] + 4);
  auVar1 = pshufb(auVar1,auVar3);
  *(long *)(param_1[1] + 4) = auVar1._0_8_;
  auVar1 = pshufb(ZEXT416(*(uint *)(param_1[1] + 0xc)),_DAT_100741f00);
  *(int *)(param_1[1] + 0xc) = auVar1._0_4_;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(ulong *)param_1[2];
  auVar3 = pshufb(auVar2,auVar3);
  *(long *)param_1[2] = auVar3._0_8_;
  return;
}

