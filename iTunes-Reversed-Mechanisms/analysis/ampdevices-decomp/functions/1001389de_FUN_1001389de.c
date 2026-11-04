// name: FUN_1001389de
// address: 1001389de

void FUN_1001389de(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_1001a8c12(param_1 + 9);
  FUN_1001b7a50(param_1 + 7);
  FUN_1001aaad2(param_1 + 6);
  plVar1 = (long *)param_1[4];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100138a2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + lVar2))();
  return;
}

