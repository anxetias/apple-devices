// name: FUN_10027a94e
// address: 10027a94e

void FUN_10027a94e(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 local_450 [16];
  undefined1 local_440 [1056];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10015805a();
  *param_1 = &PTR_FUN_100844c00;
  *(undefined1 *)((long)param_1 + 0xf9) = 1;
  if (DAT_1008b5b08 == 0) {
    uVar2 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                          PTR__kCFTypeDictionaryValueCallBacks_10082e140);
    FUN_1001a8d40(local_450,uVar2);
    FUN_1001a7b1c(&DAT_1008b5b08,local_450);
    FUN_1001a8fac(local_450);
    iVar1 = FUN_100533411(1,0,0,local_440);
    if (iVar1 == 0) {
      lVar3 = FUN_10016aa8e(0,local_440,"Preferences.plist",0,0);
      if (lVar3 != 0) {
        FUN_1001a8d40(local_450,lVar3);
        FUN_1001a7b1c(&DAT_1008b5b08,local_450);
        FUN_1001a8fac(local_450);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

