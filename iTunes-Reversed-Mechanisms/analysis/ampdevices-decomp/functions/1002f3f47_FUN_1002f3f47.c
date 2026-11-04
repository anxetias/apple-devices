// name: FUN_1002f3f47
// address: 1002f3f47

long FUN_1002f3f47(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 local_528 [256];
  char local_428 [512];
  undefined1 local_228 [512];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = FUN_100174e82();
  lVar2 = FUN_1002f3c5d(uVar1,&cf_href);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    FUN_1001e5e36(param_2,local_228,0x200);
    FUN_10018a3cf(local_228,0x2f,local_428,0x200,local_528,0x100);
    lVar3 = FUN_100169bc7(DAT_1008c4d90,local_428);
    if (lVar3 != 0) {
      if (local_428[0] != '\0') {
        FUN_100169c28(lVar3,"/");
      }
      FUN_10017415e(lVar3,lVar2);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

