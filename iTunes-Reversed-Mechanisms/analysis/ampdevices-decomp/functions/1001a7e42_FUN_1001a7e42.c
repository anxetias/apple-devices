// name: FUN_1001a7e42
// address: 1001a7e42

long FUN_1001a7e42(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  
  FUN_1001a8bb0(local_28,param_1);
  FUN_1001a8bb0(local_20,param_2);
  plVar1 = *(long **)(param_3 + 0x20);
  if (plVar1 != (long *)0x0) {
    iVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,local_28,local_20);
    FUN_1001ab240(local_20);
    FUN_1001ab240(local_28);
    lVar3 = 0;
    if (iVar2 != 0) {
      lVar3 = (ulong)(-1 < iVar2) * 2 + -1;
    }
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10016bf14();
}

