// name: FUN_10048bbac
// address: 10048bbac

long FUN_10048bbac(undefined8 param_1,undefined2 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  undefined1 local_238 [520];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_100315ede();
  if (lVar2 != 0) {
    do {
      cVar1 = FUN_10048b9b5(lVar2,param_2);
      if (cVar1 != '\0') {
        if (param_3 == 0) goto LAB_10048bc2f;
        FUN_1004870ae(lVar2,local_238);
        cVar1 = FUN_1001e3edc(local_238,param_3,1);
        if (cVar1 != '\0') goto LAB_10048bc2f;
      }
      lVar2 = FUN_100316031(lVar2);
    } while (lVar2 != 0);
  }
  lVar2 = 0;
LAB_10048bc2f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

