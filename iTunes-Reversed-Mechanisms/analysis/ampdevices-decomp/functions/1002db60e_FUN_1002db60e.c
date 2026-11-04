// name: FUN_1002db60e
// address: 1002db60e

int FUN_1002db60e(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  bool bVar9;
  uint local_78;
  uint local_74;
  ulong local_70;
  long local_68;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_68 = param_3;
  if (param_1 == 0) {
LAB_1002db69b:
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_1002db69b;
    }
    if (param_2[2] != 0) {
      local_60 = 0;
      local_74 = (uint)*(ushort *)(param_1 + 0x40a);
      if (*(ushort *)(param_1 + 0x40a) == 0) {
        local_78 = 0;
        local_74 = 1;
      }
      else {
        local_78 = (uint)*(ushort *)(param_1 + 0x408);
      }
      plVar6 = (long *)*param_2;
      if (plVar6 != param_2 + 1) {
        plVar1 = (long *)(local_68 + 8);
        do {
          local_70 = plVar6[4];
          plVar8 = (long *)*plVar1;
          plVar7 = plVar1;
          if (plVar8 == (long *)0x0) {
LAB_1002db72b:
            if ((local_60 == 0) && (iVar3 = FUN_10041503c(0,&local_60,0), iVar3 != 0)) {
              if (iVar3 != -0x80) {
                uVar5 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar5,0x10);
                if (cVar2 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                  __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
                }
              }
              goto LAB_1002db836;
            }
            uVar4 = FUN_10041576c(local_60);
            iVar3 = FUN_1000eccc0(uVar4,&local_78,local_70,0);
            if (iVar3 == -0xa415) {
              FUN_1002b7e7c(local_68,&local_70);
            }
            else if (iVar3 != 0) {
              uVar5 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar5,0x10);
              if (cVar2 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "status == noErr || status == kDRMInvalidKeyError";
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
          }
          else {
            do {
              if ((ulong)plVar8[4] >= local_70) {
                plVar7 = plVar8;
              }
              plVar8 = (long *)plVar8[(ulong)plVar8[4] < local_70];
            } while (plVar8 != (long *)0x0);
            if ((plVar7 == plVar1) || (local_70 < (ulong)plVar7[4])) goto LAB_1002db72b;
          }
          plVar8 = (long *)plVar6[1];
          plVar7 = plVar6;
          if ((long *)plVar6[1] == (long *)0x0) {
            do {
              plVar6 = (long *)plVar7[2];
              bVar9 = (long *)*plVar6 != plVar7;
              plVar7 = plVar6;
            } while (bVar9);
          }
          else {
            do {
              plVar6 = plVar8;
              plVar8 = (long *)*plVar6;
            } while ((long *)*plVar6 != (long *)0x0);
          }
        } while (plVar6 != param_2 + 1);
        if (local_60 != 0) {
          FUN_1004152d5(&local_60,0);
        }
      }
    }
    iVar3 = 0;
  }
LAB_1002db836:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

