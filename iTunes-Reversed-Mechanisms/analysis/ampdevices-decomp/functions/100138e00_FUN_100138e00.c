// name: FUN_100138e00
// address: 100138e00

void FUN_100138e00(long param_1)

{
  long *plVar1;
  undefined1 local_40 [16];
  undefined1 local_30 [24];
  char local_18;
  
  FUN_1001370aa(local_40,param_1 + 0x38);
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_1 + 0x30,local_40);
    if (local_18 == '\x01') {
      FUN_1001a8c12(local_30);
      FUN_1001b7a50(local_40);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10016bf14();
}

