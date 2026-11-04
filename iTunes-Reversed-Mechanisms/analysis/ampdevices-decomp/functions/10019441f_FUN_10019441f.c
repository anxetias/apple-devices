// name: FUN_10019441f
// address: 10019441f

void FUN_10019441f(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 local_1c;
  
  lVar1 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  plVar2 = *(long **)(param_1 + 0x40);
  if (plVar2 != (long *)0x0) {
    if (lVar1 == 0) {
      local_1c = 0;
    }
    else {
      local_1c = FUN_10016925a(lVar1);
      plVar2 = *(long **)(param_1 + 0x40);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10016bf14();
      }
    }
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_1c);
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar1);
  return;
}

