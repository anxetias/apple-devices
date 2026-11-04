// name: FUN_1001e991a
// address: 1001e991a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1001e991a(int *param_1,ulong param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  bool bVar8;
  double dVar9;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x63636d70)) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      FUN_1006c1f01(uVar6);
    }
    FUN_1001782e9(0,0);
    uVar6 = 0xffffffce;
  }
  else {
    uVar3 = param_1[2];
    if ((uVar3 & 1) == 0) {
      dVar9 = (double)(long)param_2 * _DAT_100712248;
      uVar7 = 0;
      do {
        while( true ) {
          LOCK();
          uVar1 = param_1[2];
          bVar8 = uVar3 == uVar1;
          if (bVar8) {
            param_1[2] = uVar3 | 2;
            uVar1 = uVar3;
          }
          uVar3 = uVar1;
          UNLOCK();
          if (bVar8) break;
          if ((uVar3 & 1) != 0) goto LAB_1001e9ac3;
        }
        if (param_2 < 0x7fffffffffffffff) {
          if (uVar7 == 0) {
            lVar4 = FUN_1001ebcfb();
            uVar7 = lVar4 + param_2;
          }
          FUN_1001b0d8d(dVar9);
          uVar3 = param_1[2];
          if ((uVar3 & 1) != 0) goto LAB_1001e9ac3;
        }
        else {
          FUN_1001b0be5();
          uVar3 = param_1[2];
          if ((uVar3 & 1) != 0) goto LAB_1001e9ac3;
          if ((*(byte *)(param_1 + 1) & 1) == 0) {
            uVar6 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar6,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = 
              "(timeoutInMicros < 0x7FFFFFFFFFFFFFFFull) || ((completion->options & kCooperativeCompletionSupportsMultipleNotifies) != 0)"
              ;
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
        }
        do {
          LOCK();
          uVar1 = param_1[2];
          bVar8 = uVar3 == uVar1;
          if (bVar8) {
            param_1[2] = uVar3 & 0xfffffffd;
            uVar1 = uVar3;
          }
          uVar3 = uVar1;
          UNLOCK();
        } while (!bVar8);
        FUN_1001b0d8d(0);
        if ((param_2 < 0x7fffffffffffffff) && (uVar5 = FUN_1001ebcfb(), uVar7 <= uVar5)) {
          uVar6 = 0x3c;
          break;
        }
        uVar3 = param_1[2];
        uVar6 = 0;
      } while ((uVar3 & 1) == 0);
    }
    else {
LAB_1001e9ac3:
      uVar6 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

