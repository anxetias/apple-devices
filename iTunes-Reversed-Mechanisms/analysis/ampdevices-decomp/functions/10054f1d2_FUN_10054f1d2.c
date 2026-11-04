// name: FUN_10054f1d2
// address: 10054f1d2

int FUN_10054f1d2(long param_1,int param_2,undefined8 param_3,undefined8 *param_4,uint param_5,
                 undefined1 *param_6,undefined8 *param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined2 local_78;
  undefined2 uStack_76;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_59;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_70 = 0;
  FUN_1001c62d9(&local_78,8);
  uStack_76 = 0xffff;
  if ((param_2 == 0x4d46494c) || (iVar2 = -0x32, param_2 == 0x46494c45)) {
    iVar2 = FUN_1005d38c7(0,0,&local_70);
    if (iVar2 == 0) {
      iVar2 = FUN_100548d34(0,param_1,param_2,param_3,0,1);
      if (iVar2 == 0) {
        if (DAT_1008c7848 != 0) {
          iVar2 = -0x2f;
          if ((param_5 >> 0xc & 1) == 0) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              local_4c = 0x822;
              local_4a = "(options & kGetInfoRequestIsPreemptive) != 0";
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          goto LAB_10054f42a;
        }
        iVar2 = FUN_100549f1e(param_1,0,param_2,param_3,0,0,0);
        if (iVar2 == 0) {
          local_64 = 0;
          local_60 = 0;
          iVar2 = FUN_1005d872c(param_1 + 0x710,0,0,&local_58);
          if (CONCAT44(uStack_54,local_58) != 0 && iVar2 == 0) {
            iVar2 = FUN_1003affb3(CONCAT44(uStack_54,local_58),local_70,&local_64,&local_60);
            FUN_1001c8d4b(CONCAT44(uStack_54,local_58),0);
            if (iVar2 == 0) {
              local_78 = (undefined2)local_64;
              uStack_74 = local_60;
              iVar2 = 0;
            }
          }
          uVar4 = local_70;
          if (((param_5 & 0x40) == 0) && (iVar3 = FUN_1005d3a5b(local_70), iVar3 == 0)) {
            FUN_10054eec2(param_1,uVar4,param_5);
            lVar5 = FUN_1005d3da4(uVar4,0);
            if (lVar5 != 0) {
              local_59 = 1;
              FUN_1005d36e5(lVar5,0x61776765);
            }
          }
          if (iVar2 != 0) goto LAB_10054f42a;
        }
      }
      if (param_6 != (undefined1 *)0x0) {
        *param_6 = 1;
      }
      iVar2 = 0;
      if (param_7 != (undefined8 *)0x0) {
        *param_7 = CONCAT44(uStack_74,CONCAT22(uStack_76,local_78));
        iVar2 = 0;
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
LAB_10054f42a:
  *param_4 = local_70;
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

