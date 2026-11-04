// name: FUN_100618a2e
// address: 100618a2e

undefined1 FUN_100618a2e(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  long local_c38;
  undefined8 local_c30;
  undefined1 local_c28 [3080];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_c38 = 0;
  FUN_10016bec9(&local_c30,param_1);
  iVar3 = _AMSCopyCrashReportPath(local_c30,&local_c38,0);
  FUN_10016d588(&local_c30);
  if (local_c38 == 0 || iVar3 != 0) {
    uVar2 = 0;
    goto LAB_100618aed;
  }
  cVar1 = FUN_100169c3a(local_c38,local_c28,0xbfe);
  if (cVar1 == '\0') {
LAB_100618acf:
    uVar2 = 0;
  }
  else {
    iVar3 = FUN_10018ddf7(local_c28,param_2,0);
    if (iVar3 != 0) goto LAB_100618acf;
    uVar2 = FUN_10017fbfb(param_2);
  }
  FUN_10017060f(local_c38);
LAB_100618aed:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

