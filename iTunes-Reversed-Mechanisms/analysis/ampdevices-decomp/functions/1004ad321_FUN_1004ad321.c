// name: FUN_1004ad321
// address: 1004ad321

int FUN_1004ad321(long param_1,uint param_2,short *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ushort local_238;
  undefined2 uStack_236;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x778) == '\0') {
    if (*(int *)(param_1 + 0x1304) == 0x636f7079) {
      *param_3 = 0;
      FUN_100187cb2(param_1 + 0x1308,&local_238);
      if (local_238 != 0) {
        if (local_238 < param_2) {
          param_2 = (uint)local_238;
        }
        FUN_1001c631b(&uStack_236,param_3 + 1,param_2 * 2);
        *param_3 = (short)param_2;
      }
      iVar2 = 0;
    }
    else {
      iVar2 = -0x32;
      if (*(int *)(param_1 + 0x1304) == 0x68747470) {
        *param_3 = 0;
        lVar5 = FUN_1004aa733(param_1);
        if (lVar5 == 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_238 = 0x202;
            uStack_236 = 0x822;
            uStack_234 = 0x7a0a90;
            uStack_230 = 1;
            local_22c = 0x822;
            local_22a = "currentURL != __null";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          iVar2 = FUN_1004b001d(lVar5,param_2,param_3);
          if (*param_3 == 0) {
            local_238 = 0;
            uStack_236 = 0;
            uStack_234 = 0;
            lVar6 = *(long *)(param_1 + 0x1310);
            if (lVar6 == 0) {
              FUN_100198282(*(undefined8 *)(param_1 + 0x1308),0,&local_238);
              lVar6 = CONCAT44(uStack_234,CONCAT22(uStack_236,local_238));
              if (lVar6 == 0) goto LAB_1004ad377;
            }
            lVar5 = FUN_100173bb7(lVar5,lVar6,0);
            if (lVar5 == 0) {
              iVar3 = FUN_1004b001d(lVar6,param_2,param_3);
              iVar2 = 0;
              if (iVar3 != 0) {
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                iVar2 = iVar3;
                if (cVar1 != '\0') {
                  local_238 = 0x202;
                  uStack_236 = 0x822;
                  uStack_234 = 0x7a0a90;
                  uStack_230 = 1;
                  local_22c = 0x400;
                  local_22a = (char *)CONCAT44(local_22a._4_4_,iVar3);
                  __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_238,
                                      0x12);
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_238 = 0x202;
      uStack_236 = 0x822;
      uStack_234 = 0x7a0a90;
      uStack_230 = 1;
      local_22c = 0x822;
      local_22a = "inItem->isContainer == false";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
LAB_1004ad377:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

