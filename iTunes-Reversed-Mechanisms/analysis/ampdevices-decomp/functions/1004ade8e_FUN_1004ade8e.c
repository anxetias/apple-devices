// name: FUN_1004ade8e
// address: 1004ade8e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004ade8e(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int local_68;
  undefined8 local_64;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  int iStack_58;
  undefined2 uStack_54;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1004aa626();
  if (cVar1 == '\0') {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_68 = 0x8220202;
      local_64 = "Assertion failure";
      uStack_5c = 0x822;
      uStack_5a = 0x393b;
      iStack_58 = 0x1007d;
      uStack_54 = 0;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1004ae1b0;
  }
  cVar1 = FUN_1004aa626(param_1);
  if ((cVar1 == '\0') || (*(char *)(param_1 + 0x778) == '\0')) {
    if (*(int *)(param_1 + 0xc0) == 0) {
      if (((*(int *)(param_1 + 0xcc) != 0) || (*(int *)(param_1 + 0xd0) != 0)) ||
         (*(int *)(param_1 + 0xc4) != 0)) goto LAB_1004adfe3;
      lVar5 = 0;
      if (*(int *)(param_1 + 200) != 0) goto LAB_1004adfe6;
    }
    else {
      lVar5 = FUN_100314a6c();
      if (lVar5 == 0) {
LAB_1004adfe3:
        lVar5 = 0;
      }
      else {
        FUN_100313e0b(lVar5);
      }
LAB_1004adfe6:
      uVar2 = FUN_1004af69d(param_1);
      FUN_1004bb191(param_1,(int *)(param_1 + 0xc0),uVar2);
    }
    piVar7 = (int *)(param_1 + 0xec);
    if ((((*(int *)(param_1 + 0xec) != 0) || (*(int *)(param_1 + 0xf8) != 0)) ||
        (((*(int *)(param_1 + 0xfc) == 0 &&
          ((*(int *)(param_1 + 0xf0) == 0 && (*(int *)(param_1 + 0xf4) == 0)))) &&
         (FUN_1004abe13(param_1,0x61706c73,piVar7), *(int *)(param_1 + 0xec) != 0)))) ||
       ((((*(int *)(param_1 + 0xf8) != 0 || (*(int *)(param_1 + 0xfc) != 0)) ||
         (*(int *)(param_1 + 0xf0) != 0)) || (*(int *)(param_1 + 0xf4) != 0)))) {
      if (lVar5 == 0) {
        if ((*(int *)(param_1 + 0xc0) == 0) || (lVar5 = FUN_100314a6c(), lVar5 == 0)) {
          lVar5 = 0;
        }
        else {
          FUN_100313e0b(lVar5);
        }
      }
      uVar2 = FUN_1004af69d(param_1);
      goto LAB_1004ae19e;
    }
  }
  else {
    uVar3 = FUN_1001c631b(param_1 + 0xc0,&local_68,0x2c);
    if (local_68 == 0) {
      auVar8._0_4_ = -(uint)((int)local_64 == _DAT_1007075e0);
      auVar8._4_4_ = -(uint)(local_64._4_4_ == _UNK_1007075e4);
      auVar8._8_4_ = -(uint)(CONCAT22(uStack_5a,uStack_5c) == _UNK_1007075e8);
      auVar8._12_4_ = -(uint)(iStack_58 == _UNK_1007075ec);
      uVar3 = movmskps(uVar3,auVar8);
      uVar3 = uVar3 ^ 0xf;
      if ((char)uVar3 == '\0') {
        for (lVar5 = FUN_1004aa784(param_1); uVar3 = 0, lVar5 != 0; lVar5 = FUN_1004ab52d(lVar5)) {
          if (((*(int *)(lVar5 + 0xc0) != 0) || (*(int *)(lVar5 + 0xcc) != 0)) ||
             ((*(int *)(lVar5 + 0xd0) != 0 ||
              ((*(int *)(lVar5 + 0xc4) != 0 || (*(int *)(lVar5 + 200) != 0)))))) {
            uVar3 = FUN_1001c631b(lVar5 + 0xc0,&local_68,0x2c);
            break;
          }
        }
      }
    }
    if (local_68 == 0) {
      auVar9._0_4_ = -(uint)((int)local_64 == _DAT_1007075e0);
      auVar9._4_4_ = -(uint)(local_64._4_4_ == _UNK_1007075e4);
      auVar9._8_4_ = -(uint)(CONCAT22(uStack_5a,uStack_5c) == _UNK_1007075e8);
      auVar9._12_4_ = -(uint)(iStack_58 == _UNK_1007075ec);
      uVar4 = movmskps(uVar3,auVar9);
      if ((char)uVar4 == '\x0f') {
        lVar5 = 0;
        goto LAB_1004ae1a3;
      }
    }
    if ((local_68 == 0) || (lVar5 = FUN_100314a6c(), lVar5 == 0)) {
      lVar5 = 0;
    }
    else {
      FUN_100313e0b(lVar5);
    }
    uVar2 = FUN_1004af69d(param_1);
    piVar7 = &local_68;
LAB_1004ae19e:
    FUN_1004bb191(param_1,piVar7,uVar2);
  }
LAB_1004ae1a3:
  if (lVar5 != 0) {
    FUN_1002fbbfc(lVar5);
  }
LAB_1004ae1b0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

