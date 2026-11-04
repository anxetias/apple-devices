// name: FUN_1001e2384
// address: 1001e2384

undefined8 FUN_1001e2384(undefined8 param_1,long param_2,uint param_3)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 local_238 [520];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006bbffb(uVar2);
    }
    FUN_1001782e9(0,0);
    FUN_1001b7b04(param_1,"");
  }
  else {
    if ((param_3 & 1) != 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_1006bbf85(uVar2);
      }
      FUN_1001782e9(0,0);
      param_3 = param_3 & 0xfffffffe;
    }
    dVar3 = (double)FUN_1001711f6(param_2);
    FUN_1001e24eb((long)(dVar3 + *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008),param_3
                  ,local_238);
    FUN_1001b8dfc(param_1,local_238);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

