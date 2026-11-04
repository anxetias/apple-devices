// name: FUN_10049a09d
// address: 10049a09d

/* WARNING: Type propagation algorithm not settling */

int FUN_10049a09d(long param_1,void *param_2,long param_3,int param_4)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int local_85c [2];
  char *local_854;
  undefined2 local_84c;
  int local_84a;
  undefined4 local_838;
  char *local_834;
  undefined2 local_82c;
  char *local_82a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) {
LAB_10049a1ad:
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_82a = "ITImageInstanceIsValid(imageInstance)";
LAB_10049a302:
      local_82c = 0x822;
      local_834 = "Assertion failure";
      local_838 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_838,0x16);
    }
  }
  else {
    cVar2 = FUN_100495380(*(undefined8 *)(*(long *)(param_1 + 8) + 0x10));
    if (cVar2 == '\0') goto LAB_10049a1ad;
    lVar4 = FUN_100499456(param_1);
    if (lVar4 != 0) {
      if (param_2 == (void *)0x0) {
        FUN_1001dcff5(lVar4,*(undefined4 *)(param_1 + 0x44));
        iVar3 = 0;
        *(undefined4 *)(param_1 + 0x44) = 0;
        FUN_1001dcff5(lVar4,*(undefined4 *)(param_1 + 0x478));
        *(undefined4 *)(param_1 + 0x478) = 0;
        *(undefined1 *)(param_1 + 0x53) = 2;
      }
      else {
        if (param_4 == 0 || param_3 == 0) {
          lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10);
          lVar6 = 0;
          if (*(char *)(lVar1 + 0xf98) != '\0') {
            lVar6 = lVar1 + 0xb78;
          }
          iVar3 = FUN_10017dbe8(param_2,lVar6,&local_838,0x3ff,local_85c);
          if (iVar3 == 0) {
            iVar3 = FUN_1001ddddc(lVar4,&local_838,local_85c[0] * 2,param_1 + 0x44);
            if ((iVar3 != -0x80) && (iVar3 != 0)) {
              uVar5 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar5,0x10);
              if (cVar2 != '\0') {
                local_85c[1] = 0x8220202;
                local_854 = "Assertion failure";
                local_84c = 0x400;
                local_84a = iVar3;
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",local_85c + 1,
                                    0x12);
              }
            }
          }
        }
        else {
          iVar3 = FUN_1001ddddc(lVar4,param_3,param_4 * 2,param_1 + 0x44);
          if ((iVar3 != -0x80) && (iVar3 != 0)) {
            uVar5 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar5,0x10);
            if (cVar2 != '\0') {
              local_838 = 0x8220202;
              local_834 = "Assertion failure";
              local_82c = 0x400;
              local_82a = (char *)CONCAT44(local_82a._4_4_,iVar3);
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_838,0x12);
            }
            goto LAB_10049a1d9;
          }
        }
        if (iVar3 == 0) {
          _memcpy((void *)(param_1 + 0x58),param_2,0x420);
          *(undefined1 *)(param_1 + 0x53) = 1;
          iVar3 = 0;
        }
      }
      goto LAB_10049a1d9;
    }
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_82a = "stringCache != nullptr";
      goto LAB_10049a302;
    }
  }
  FUN_1001782e9(0,0);
  iVar3 = -0x32;
LAB_10049a1d9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

