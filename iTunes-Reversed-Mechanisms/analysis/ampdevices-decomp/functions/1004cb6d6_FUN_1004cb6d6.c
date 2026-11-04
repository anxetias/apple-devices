// name: FUN_1004cb6d6
// address: 1004cb6d6

void FUN_1004cb6d6(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined1 local_30 [16];
  undefined1 local_20 [8];
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_1001ab042(local_20);
  FUN_1001a7b5a(local_30,param_3);
  plVar2 = *(long **)(lVar1 + 0x20);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,local_20,local_30);
    FUN_1001a7a94(local_30);
    FUN_1001ab006(local_20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10016bf14();
}

