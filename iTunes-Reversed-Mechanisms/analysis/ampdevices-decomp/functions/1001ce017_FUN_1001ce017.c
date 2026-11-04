// name: FUN_1001ce017
// address: 1001ce017

undefined8
FUN_1001ce017(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             long *param_5,char param_6)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_138 [264];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006af762(uVar4);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffffce;
  }
  else {
    FUN_1001cda96(param_2,param_3,param_4,local_138);
    lVar2 = FUN_1001cda26(local_138,param_1);
    *param_5 = lVar2;
    uVar4 = 0xffffff40;
    if (lVar2 != 0) {
      lVar2 = FUN_1001705e9(lVar2);
      lVar3 = FUN_100170dbb();
      if (lVar2 == lVar3) {
        uVar4 = 0;
        if (param_6 != '\0') {
          uVar4 = 0;
          lVar2 = FUN_100170eb3(0,0,*param_5);
          if (lVar2 == 0) {
            uVar4 = 0xffffff94;
          }
          else {
            FUN_10017060f(*param_5);
          }
          *param_5 = lVar2;
        }
      }
      else {
        FUN_10017060f(*param_5);
        *param_5 = 0;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

