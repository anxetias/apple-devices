// name: FUN_10051af54
// address: 10051af54

int FUN_10051af54(long param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = (int *)0x0;
  iVar2 = FUN_100594adc(&local_60,0);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      lVar4 = FUN_1002f9fc5(*(undefined8 *)(param_1 + 0x30));
      if (lVar4 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = 0;
        do {
          if ((*(long *)(*(long *)(lVar4 + 0x10) + 8) != 0) &&
             ((((((*(byte *)(lVar4 + 0x48) & 0x80) == 0 || (*(long *)(lVar4 + 8) == 0)) ||
                (*(long *)(*(long *)(lVar4 + 8) + 0x10) == 0)) ||
               (*(long *)(*(long *)(lVar4 + 0x10) + 0x38) == 0)) &&
              ((iVar2 = FUN_10059571f(local_60,lVar4,0), iVar2 != -0x80 && (iVar2 != 0)))))) {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
          lVar4 = FUN_1002fa118(lVar4);
        } while (lVar4 != 0);
      }
      if (local_60 == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = local_60;
        if (((*local_60 == 0x4f4c5354) && (local_60[1] != 0)) &&
           (iVar7 = (int)((ulong)(*(long *)(local_60 + 4) - *(long *)(local_60 + 2)) >> 3) *
                    -0x49249249, iVar7 != 0)) {
          iVar8 = 0;
          do {
            lVar4 = FUN_100596915(local_60,iVar8,0);
            if (lVar4 == 0) {
              uVar5 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar5,0x10);
              if (cVar1 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "trackInstance != nullptr";
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
            else {
              iVar3 = FUN_1002b0559(lVar4,2);
              if (iVar3 == 0) {
                iVar3 = FUN_1003c3248(lVar4,1,0,0,0,0);
                if ((iVar3 != -0x80) && (iVar3 != 0)) {
                  uVar5 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar1 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x400;
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                    __os_log_error_impl(0x100000000,uVar5,0x10);
                  }
                }
                if ((*(byte *)(lVar4 + 0x48) & 0x80) == 0) {
                  uVar5 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar1 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = "trackInstance->drmVersionsValid";
                    __os_log_error_impl(0x100000000,uVar5,0x10);
                  }
                  FUN_1001782e9(0,0);
                }
                if (((*(long *)(lVar4 + 8) == 0) || (*(long *)(*(long *)(lVar4 + 8) + 0x10) == 0))
                   || (*(long *)(*(long *)(lVar4 + 0x10) + 0x38) == 0)) {
                  uVar5 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar1 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = "TrackInstanceHasValidIntStoreID(trackInstance)";
                    __os_log_error_impl(0x100000000,uVar5,0x10);
                  }
                  FUN_1001782e9(0,0);
                }
              }
              FUN_1001b1464();
            }
            iVar8 = iVar8 + 1;
            piVar6 = local_60;
          } while (iVar7 != iVar8);
        }
      }
      FUN_100595344(piVar6);
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

