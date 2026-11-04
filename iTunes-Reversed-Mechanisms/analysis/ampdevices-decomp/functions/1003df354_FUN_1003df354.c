// name: FUN_1003df354
// address: 1003df354

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1003df354(undefined8 *param_1,ulong *param_2,uint *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  ulong local_78;
  long local_70;
  undefined8 local_68;
  ulong local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = (**(code **)(*(long *)*param_1 + 0x168))();
  if (iVar2 != 1) {
    iVar2 = (**(code **)(*(long *)*param_1 + 0x168))();
    iVar3 = -0x32;
    if (iVar2 != 3) goto LAB_1003df49b;
  }
  iVar3 = (**(code **)(*(long *)*param_1 + 0x100))((long *)*param_1,&local_78);
  if (iVar3 == -0x80) goto LAB_1003df49b;
  if (iVar3 == 0) {
    iVar3 = (**(code **)(*(long *)*param_1 + 0xf0))((long *)*param_1,0);
    if (iVar3 == -0x80) goto LAB_1003df49b;
    if (iVar3 == 0) {
      local_60 = 0;
      local_70 = 8;
      iVar2 = (**(code **)(*(long *)*param_1 + 0xa8))((long *)*param_1,&local_70,&local_68);
      if ((iVar2 == 0) || (local_70 != 8)) {
        bVar5 = 0;
        do {
          auVar6._8_8_ = 0;
          auVar6._0_8_ = local_68;
          auVar6 = pshufb(auVar6,_DAT_10070e4b0);
          local_68 = auVar6._0_8_;
          iVar3 = (**(code **)(*(long *)*param_1 + 0xf8))((long *)*param_1,&local_60);
          if (iVar3 != 0) {
            if (iVar3 != -0x80) {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
LAB_1003df6db:
                local_4c = 0x400;
                local_54 = "Assertion failure";
                local_58 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
            }
            goto LAB_1003df428;
          }
          if ((ulong)local_68._4_4_ == 0) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "chunk.ckSize != 0";
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
LAB_1003df715:
            iVar3 = -0x27;
            goto LAB_1003df428;
          }
          if ((int)local_68 == 0x464f524d) {
            local_60 = local_60 + 4;
LAB_1003df579:
            if (local_78 < local_60) goto LAB_1003df715;
            iVar3 = (**(code **)(*(long *)*param_1 + 0xf0))();
            if (iVar3 != 0) {
              if (iVar3 != -0x80) {
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                if (cVar1 != '\0') {
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                  goto LAB_1003df6db;
                }
              }
              goto LAB_1003df428;
            }
            bVar5 = local_68._4_1_;
          }
          else {
            if ((int)local_68 == 0x49443320) {
              if (param_3 != (uint *)0x0) {
                *param_3 = local_68._4_4_;
              }
              *param_2 = local_60;
              iVar3 = 0;
              goto LAB_1003df49b;
            }
            if ((~bVar5 & 1) != 0 || (local_68 & 0xe0) != 0) {
              local_60 = local_68._4_4_ + local_60;
              if ((local_68 & 0x100000000) != 0) {
                local_60 = local_60 + 1;
              }
              goto LAB_1003df579;
            }
            local_60 = local_60 - 9;
            iVar2 = (**(code **)(*(long *)*param_1 + 0xf0))();
            bVar5 = 0;
            if ((iVar2 != -0x80) && (bVar5 = 0, iVar2 != 0)) {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
              bVar5 = 0;
            }
          }
          local_70 = 8;
          iVar2 = (**(code **)(*(long *)*param_1 + 0xa8))((long *)*param_1,&local_70,&local_68);
        } while ((iVar2 == 0) || (local_70 != 8));
      }
      iVar3 = -0x24;
LAB_1003df428:
      *param_2 = local_60;
      goto LAB_1003df49b;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 == '\0') goto LAB_1003df49b;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 == '\0') goto LAB_1003df49b;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
  }
  local_4c = 0x400;
  local_54 = "Assertion failure";
  local_58 = 0x8220202;
  __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
LAB_1003df49b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

