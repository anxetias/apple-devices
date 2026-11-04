// name: FUN_100430f31
// address: 100430f31

long FUN_100430f31(long param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = FUN_1002ba294(*(undefined8 *)(param_2 + 8),0xb,0);
  if (lVar4 != 0) {
    for (lVar5 = FUN_100485529(lVar4); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x18)) {
      lVar6 = FUN_100597ce2(lVar5,*(undefined8 *)(param_1 + 0x30));
      if (((lVar6 == 0) || (lVar1 = *(long *)(lVar6 + 8), lVar1 == 0)) ||
         (*(long *)(lVar1 + 0x10) == 0)) {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "TrackInstanceIsValid(trackInstance)";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else if (((-1 < *(int *)(lVar1 + 0xc2)) &&
               (uVar3 = FUN_1004744bf(lVar1,0), (uVar3 >> 0xd & 1) == 0)) &&
              (lVar6 = FUN_10048584d(*(undefined8 *)(lVar6 + 8),param_2,0), lVar6 != 0)) {
        *(undefined4 *)(lVar6 + 0x5c) = param_3;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

