// name: FUN_100129238
// address: 100129238

void FUN_100129238(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  
  lVar1 = *param_1;
  FUN_1001ab042(local_28);
  FUN_1001a8c1c(local_20,param_3);
  plVar2 = *(long **)(lVar1 + 0x20);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,local_28,local_20);
    FUN_1001ab240(local_20);
    FUN_1001ab006(local_28);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10016bf14();
}

