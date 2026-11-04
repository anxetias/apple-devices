// name: FUN_1002afa4c
// address: 1002afa4c

void FUN_1002afa4c(long param_1,long param_2,long param_3,long param_4,int param_5)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_3a = "trackInstance != nullptr";
      goto LAB_1002afced;
    }
LAB_1002afd12:
    FUN_1001782e9(0,0);
  }
  else {
    lVar1 = *(long *)(param_1 + 8);
    if (param_5 != 0) {
      if ((param_2 == 0 || param_4 == 0) && ((param_3 != 0 || param_2 != 0) || param_4 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          local_3a = 
          "cloudID != ((UInt64)0) && cloudUserID != 0 || cloudID == ((UInt64)0) && cloudUserID == 0 && cloudFlavorID == ((UInt64)0)"
          ;
LAB_1002afced:
          local_3c = 0x822;
          local_44 = "Assertion failure";
          local_48 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
      }
      else if (param_5 - 2U < 3) {
LAB_1002afbe8:
        if (param_5 == 2) {
          if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
            FUN_1002b6ee1(param_1,param_2,param_3);
            return;
          }
          goto LAB_1002afd86;
        }
        if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
          cVar2 = FUN_100475ea3(lVar1,param_2,param_4);
          if ((cVar2 != '\0') || (*(long *)(*(long *)(param_1 + 0x20) + 8) != param_3)) {
            if ((4 < *(uint *)(lVar1 + 0x98)) ||
               ((0x19U >> (*(uint *)(lVar1 + 0x98) & 0x1f) & 1) == 0)) {
              uVar3 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar3,0x10);
              if (cVar2 != '\0') {
                local_48 = 0x8220202;
                local_44 = "Assertion failure";
                local_3c = 0x822;
                local_3a = 
                "trackInfo->cloudInfo.cloudLibraryKind == kRemoteLibraryKind_Unknown || trackInfo->cloudInfo.cloudLibraryKind == kRemoteLibraryKind_CloudPurchases || trackInfo->cloudInfo.cloudLibraryKind == kRemoteLibraryKind_FamilyMemberPurchases"
                ;
                __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
            if (0xfffffffffffffffb < *(long *)(lVar1 + 0xa8) - 1U) {
              FUN_1002b6fe1(param_1);
            }
            FUN_1002af688(param_1);
            *(long *)(*(long *)(param_1 + 0x20) + 8) = param_3;
          }
          goto LAB_1002afd1b;
        }
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          local_3a = "TrackInstanceIsValid(trackInstance)";
          goto LAB_1002afced;
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          local_3a = "IsCloudLibraryKind(inCloudLibraryKind)";
          goto LAB_1002afced;
        }
      }
      goto LAB_1002afd12;
    }
    if ((param_3 != 0 || param_2 != 0) || param_4 != 0) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_3a = "cloudID == ((UInt64)0) && cloudUserID == 0 && cloudFlavorID == ((UInt64)0)";
        goto LAB_1002afced;
      }
      goto LAB_1002afd12;
    }
    param_5 = *(int *)(lVar1 + 0x98);
    if (param_5 - 2U < 3) goto LAB_1002afbe8;
  }
LAB_1002afd1b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
LAB_1002afd86:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

