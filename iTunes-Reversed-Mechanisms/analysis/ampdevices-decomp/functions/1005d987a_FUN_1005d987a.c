// name: FUN_1005d987a
// address: 1005d987a

int FUN_1005d987a(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(param_2,0xb0);
  *param_2 = *(undefined8 *)(param_1 + 0x20);
  iVar4 = FUN_10015d28d(param_1,0x746b6864,&local_50);
  if (iVar4 == -0x80) goto LAB_1005d9ad5;
  if (iVar4 != 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
      goto LAB_1005d9b73;
    }
    goto LAB_1005d9a62;
  }
  if (local_50 == 0) {
LAB_1005d9a68:
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_3a = "element != nullptr";
LAB_1005d9bfd:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
LAB_1005d9ac7:
    FUN_1001782e9(0,0);
  }
  else {
    puVar2 = *(uint **)(local_50 + 0x20);
    param_2[1] = puVar2;
    uVar1 = *puVar2;
    if ((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) < 0x5c) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_3a = "atomSize >= sizeof(TrackHeaderAtom)";
        goto LAB_1005d9bfd;
      }
      goto LAB_1005d9ac7;
    }
    iVar4 = FUN_10015d28d(param_1,0x74726566,&local_50);
    if (iVar4 == -0x80) goto LAB_1005d9ad5;
    if (iVar4 == 0) {
      if (local_50 != 0) {
        param_2[3] = *(undefined8 *)(local_50 + 0x20);
      }
      iVar4 = FUN_10015d28d(param_1,0x6c6f6164,&local_50);
      if (iVar4 == -0x80) goto LAB_1005d9ad5;
      if (iVar4 == 0) {
        if (local_50 != 0) {
          param_2[4] = *(undefined8 *)(local_50 + 0x20);
        }
        iVar4 = FUN_10015d28d(param_1,0x6d646961,&local_50);
        if (iVar4 == -0x80) goto LAB_1005d9ad5;
        if (iVar4 == 0) {
          if (local_50 == 0) goto LAB_1005d9a68;
          uVar1 = **(uint **)(local_50 + 0x20);
          if ((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) <
              0x28) {
LAB_1005d9c78:
            uVar5 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar5,0x10);
            if (cVar3 != '\0') {
              local_3a = "atomSize >= requiredSize";
              goto LAB_1005d9bfd;
            }
            goto LAB_1005d9ac7;
          }
          iVar4 = FUN_1005d9db6(local_50,param_2 + 5);
          if (iVar4 == -0x80) goto LAB_1005d9ad5;
          if (iVar4 == 0) {
            iVar4 = FUN_10015d28d(param_1,0x65647473,&local_50);
            if (iVar4 == -0x80) goto LAB_1005d9ad5;
            if (iVar4 == 0) {
              if (local_50 != 0) {
                puVar2 = *(uint **)(local_50 + 0x20);
                param_2[2] = puVar2;
                uVar1 = *puVar2;
                if (0xfffffff0 <
                    (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18
                    ) - 0x18) goto LAB_1005d9c78;
              }
              iVar4 = FUN_10015d28d(param_1,0x75647461,&local_50);
              if (iVar4 == -0x80) goto LAB_1005d9ad5;
              if (iVar4 == 0) {
                iVar4 = 0;
                if (local_50 != 0) {
                  param_2[0x15] = *(undefined8 *)(local_50 + 0x20);
                }
                goto LAB_1005d9ad5;
              }
              uVar5 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar5,0x10);
              if (cVar3 != '\0') {
                local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
                goto LAB_1005d9b73;
              }
            }
            else {
              uVar5 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar5,0x10);
              if (cVar3 != '\0') {
                local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
                goto LAB_1005d9b73;
              }
            }
          }
          else {
            uVar5 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar5,0x10);
            if (cVar3 != '\0') {
              local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
              goto LAB_1005d9b73;
            }
          }
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
            goto LAB_1005d9b73;
          }
        }
      }
      else {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
          goto LAB_1005d9b73;
        }
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
LAB_1005d9b73:
        local_3c = 0x400;
        local_44 = "Assertion failure";
        local_48 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
LAB_1005d9a62:
    if (iVar4 != 0) goto LAB_1005d9ad5;
  }
  iVar4 = -0xd0;
LAB_1005d9ad5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

