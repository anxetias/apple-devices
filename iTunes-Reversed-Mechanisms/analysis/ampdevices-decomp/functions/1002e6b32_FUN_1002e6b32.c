// name: FUN_1002e6b32
// address: 1002e6b32

ulong FUN_1002e6b32(long *param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 uVar9;
  undefined1 local_88 [20];
  int local_74;
  undefined1 local_70 [8];
  undefined1 local_68 [15];
  byte local_59;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44(local_88);
  if (*param_1 == 0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_4a = "inSocialProfile != nullptr";
LAB_1002e6e16:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_1002e6e3b:
    uVar9 = 0;
  }
  else {
    if (((int)param_2[2] != 0) && ((int)param_2[2] != 0x46)) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_4a = 
        "(inInfo.sourceKind == ArtworkSourceInfoKind::eUnknown) || (inInfo.sourceKind == ArtworkSourceInfoKind::eSocialProfileCloud)"
        ;
        goto LAB_1002e6e16;
      }
      goto LAB_1002e6e3b;
    }
    lVar5 = FUN_1003070df();
    if (lVar5 == 0) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_4a = "trackData != nullptr";
        goto LAB_1002e6e16;
      }
      goto LAB_1002e6e3b;
    }
    FUN_1001b7a5c(&local_58,*param_1 + 0x80);
    FUN_1001b80b2(local_88,&local_58);
    FUN_1001b7a50(&local_58);
    local_59 = FUN_1001b8428(local_88);
    if ((int)param_2[2] == 0) {
      cVar2 = FUN_1002ea320(param_2);
      if (cVar2 != '\0') {
LAB_1002e6f3e:
        if (local_59 == 0) {
          FUN_10058e184(*param_1);
          if ((int)param_2[2] == 0) {
            uVar7 = *(undefined8 *)(*param_1 + 0x18);
            FUN_1001aaf14(&local_58,local_88);
            FUN_1002e3d90(lVar5,uVar7,&local_58,"social");
            FUN_1001ab006(&local_58);
          }
        }
        lVar5 = *param_1;
        iVar1 = (int)param_2[2];
        local_74 = *(int *)(lVar5 + 0x98);
        if (local_74 != iVar1) {
          *(int *)(lVar5 + 0x98) = iVar1;
          FUN_10058e136(lVar5,4);
          lVar5 = *param_1;
        }
        FUN_1001b7f2a(&local_58,param_2 + 4);
        bVar3 = FUN_10058e1dc(lVar5,&local_58);
        FUN_1001b7a50(&local_58);
        lVar5 = *param_1;
        FUN_1001b7f2a(&local_58,param_2 + 3);
        bVar4 = FUN_10058e22a(lVar5,&local_58);
        FUN_1001b7a50(&local_58);
        lVar5 = *param_1;
        cVar2 = *(char *)(lVar5 + 0x9c);
        if (cVar2 != '\0') {
          *(undefined1 *)(lVar5 + 0x9c) = 0;
          FUN_10058e136(lVar5,8);
        }
        uVar8 = CONCAT71((int7)((ulong)param_1 >> 8),
                         local_74 != iVar1 | local_59 ^ 1 | bVar3 | bVar4 | cVar2 != '\0');
        goto LAB_1002e6e4b;
      }
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_4a = "inInfo.empty()";
        goto LAB_1002e6e16;
      }
      goto LAB_1002e6e3b;
    }
    if (*param_2 == 0) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      uVar9 = 1;
      if (cVar2 != '\0') {
        local_4a = "inInfo.dbID != 0";
LAB_1002e6f02:
        local_4c = 0x822;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        uVar9 = 1;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
    }
    else {
      if (*(long *)(*param_1 + 0x18) == param_2[1]) {
        lVar6 = FUN_1001ab132(param_2 + 4);
        if (lVar6 == 0) {
          lVar6 = FUN_1001ab132(param_2 + 3);
          if (lVar6 == 0) {
            uVar7 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar7,0x10);
            uVar9 = 1;
            if (cVar2 != '\0') {
              local_4a = "(inInfo.token.GetLength() > 0) || (inInfo.url.GetLength() > 0)";
              goto LAB_1002e6f02;
            }
            goto LAB_1002e6e3e;
          }
        }
        lVar6 = FUN_1001ab132(param_2 + 5);
        if (lVar6 != 0) {
          uVar7 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar7,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "inInfo.storeID.IsEmpty()";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        if (param_2[6] != 0) {
          uVar7 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar7,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "inInfo.cloudID == 0";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        FUN_1001b7a5c(&local_58,*param_1 + 0x60);
        FUN_1001aaf14(local_70,&local_58);
        FUN_1001b7a50(&local_58);
        FUN_1001b7a5c(&local_58,*param_1 + 0x70);
        FUN_1001aaf14(local_68,&local_58);
        FUN_1001b7a50(&local_58);
        cVar2 = FUN_1001a85de(local_70,param_2 + 4);
        if (cVar2 == '\0') {
          FUN_1001ab006(local_68);
          FUN_1001ab006(local_70);
        }
        else {
          cVar2 = FUN_1001a85de(local_68,param_2 + 3);
          FUN_1001ab006(local_68);
          FUN_1001ab006(local_70);
          if (cVar2 != '\0') {
            uVar8 = 0;
            goto LAB_1002e6e4b;
          }
        }
        goto LAB_1002e6f3e;
      }
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      uVar9 = 1;
      if (cVar2 != '\0') {
        local_4a = "inSocialProfile->GetPersistentID() == inInfo.persistentID";
        goto LAB_1002e6f02;
      }
    }
  }
LAB_1002e6e3e:
  uVar8 = 0;
  FUN_1001782e9(0,uVar9);
LAB_1002e6e4b:
  FUN_1001b7a50(local_88);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar8 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

