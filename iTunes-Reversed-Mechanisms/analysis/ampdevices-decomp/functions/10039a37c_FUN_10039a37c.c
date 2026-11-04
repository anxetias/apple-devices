// name: FUN_10039a37c
// address: 10039a37c

int FUN_10039a37c(long param_1,byte param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  undefined2 local_42;
  char *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 8) == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "mPodController != nullptr";
LAB_10039a5d7:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (*(long *)(param_1 + 0x438) != 0) {
      if (*(int *)(param_1 + 0xaa8) == 0) {
        local_5c = 0;
        if (param_2 == 0) {
          iVar2 = _VVVShouldAllowUpdate(*(long *)(param_1 + 8),*(long *)(param_1 + 0x438),&local_5c)
          ;
        }
        else {
          iVar2 = _VVVShouldAllowRestore();
        }
        if (iVar2 != 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "result == eVVVUpdateSuccess";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        switch(local_5c) {
        case 0:
        case 7:
          *(uint *)(param_1 + 0xaa8) = 2 - (uint)param_2;
          if (*(char *)(param_1 + 0x678) == '\0') {
            *(undefined1 *)(param_1 + 0x464) = 0;
LAB_10039a655:
            iVar2 = *(int *)(param_1 + 0x448);
            if (iVar2 == 0) {
              iVar2 = *(int *)(param_1 + 0x44c);
            }
            iVar2 = FUN_100399d2b(iVar2,param_1 + 0x450,0);
            if (iVar2 != -0x80) {
              if (iVar2 != 0) {
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 != '\0') {
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                  goto LAB_10039a87e;
                }
                goto LAB_10039a83e;
              }
              iVar2 = FUN_100399be4(param_1,param_2);
              if (iVar2 == 0) {
                iVar2 = 0;
                FUN_10039a91c(FUN_10039aa6a,0,param_1,*param_3,param_3[1]);
                goto LAB_10039a46d;
              }
            }
          }
          else {
            iVar2 = FUN_1004ddbd3(0x69506f64,*(undefined8 *)(param_1 + 0x440));
            if (iVar2 == 0) {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "objectID != 0";
                __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
              iVar2 = 0x45f;
            }
            else {
              iVar2 = FUN_1004f4333(iVar2,&local_5c);
              *(bool *)(param_1 + 0x464) = (char)local_5c != '\0';
              if (iVar2 == -0x80) break;
              if (iVar2 == 0) goto LAB_10039a655;
            }
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
LAB_10039a87e:
              local_4c = 0x400;
              local_54 = "Assertion failure";
              local_58 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
LAB_10039a83e:
            if (iVar2 == 0) {
              iVar2 = 0;
              goto LAB_10039a46d;
            }
          }
          break;
        case 1:
          iVar2 = 0x5ab;
          break;
        case 2:
          iVar2 = 0x5ac;
          break;
        case 3:
          iVar2 = 0x5ad;
          break;
        case 4:
          iVar2 = 0x5ae;
          break;
        case 5:
          iVar2 = 0x5af;
          break;
        case 6:
          iVar2 = 0x5b0;
          break;
        case 8:
          iVar2 = 0x5b2;
          break;
        case 9:
          iVar2 = 0x5b3;
          break;
        case 10:
          iVar2 = 0x5b4;
          break;
        case 0xb:
          iVar2 = 0x5b5;
          break;
        case 0xc:
          iVar2 = 0x5b6;
          break;
        default:
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220302;
            local_4a = "0";
            local_42 = 0x822;
            local_40 = "Unrecognized PodUpdater error!";
            pcVar4 = "%{public}s: %{public}s (%{public}s)";
            uVar5 = 0x20;
            goto LAB_10039a5a9;
          }
          goto LAB_10039a3e4;
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_4a = "mState == kIdle";
          pcVar4 = "%{public}s: (%{public}s)";
          uVar5 = 0x16;
LAB_10039a5a9:
          local_4c = 0x822;
          local_54 = "Assertion failure";
          __os_log_error_impl(0x100000000,uVar3,0x10,pcVar4,&local_58,uVar5);
        }
LAB_10039a3e4:
        FUN_1001782e9(0,0);
        iVar2 = -0x32;
      }
      *(undefined4 *)(param_1 + 0xaa8) = 0;
      goto LAB_10039a46d;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "mPod != 0";
      goto LAB_10039a5d7;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_10039a46d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

