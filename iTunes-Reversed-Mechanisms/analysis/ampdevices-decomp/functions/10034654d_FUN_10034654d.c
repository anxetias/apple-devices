// name: FUN_10034654d
// address: 10034654d

int FUN_10034654d(long param_1,undefined8 param_2,undefined8 param_3,ushort *param_4,ushort *param_5
                 ,undefined2 *param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_6b8;
  undefined4 local_6b0;
  undefined2 uStack_6ac;
  undefined2 uStack_6aa;
  undefined2 uStack_6a8;
  undefined4 local_6a0;
  ushort *local_688;
  undefined1 local_678 [12];
  undefined2 local_66c;
  char *local_66a;
  int local_478 [7];
  char local_45c [1028];
  undefined1 local_58 [12];
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_4 = 0;
  *param_6 = 0;
  iVar2 = FUN_100317a87(*(undefined8 *)(param_1 + 0x30),param_2,local_478);
  if (iVar2 == -0x80) goto LAB_10034698c;
  if (iVar2 == 0) {
    iVar2 = FUN_10017dbac(local_478,param_4);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        cVar1 = FUN_1004e9c24(param_2,param_6);
        if (cVar1 == '\0') {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_678._0_4_ = 0x8220202;
            local_678._4_8_ = "Assertion failure";
            local_66c = 0x822;
            local_66a = "GetIPodTrackFileExtension(trackInstance, extension)";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",local_678,0x16);
          }
          FUN_1001782e9(0,0);
          iVar2 = -0xd0;
          goto LAB_10034698c;
        }
        iVar2 = FUN_1004f0455(param_1,param_2,param_3,1,local_678);
        if (iVar2 == -0x80) goto LAB_10034698c;
        if (iVar2 == 0) {
          FUN_1001c62d9(&local_6b8,0x38);
          local_6b0 = SUB84(param_6,0);
          uStack_6ac = (undefined2)((ulong)param_6 >> 0x20);
          uStack_6aa = (undefined2)((ulong)param_6 >> 0x30);
          local_6a0 = 0x1f;
          local_688 = param_5;
          local_6b8 = local_678;
          iVar2 = FUN_10018166a(local_478,&local_6b8);
          if (iVar2 == -0x80) goto LAB_10034698c;
          if (iVar2 == 0) {
            if (*param_4 == 0) {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                local_58._0_4_ = 0x8220202;
                local_58._4_8_ = "Assertion failure";
                local_4c = 0x822;
                local_4a = "filePath[0] != 0";
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",local_58,0x16)
                ;
              }
              FUN_1001782e9(0,0);
              iVar2 = -0x25;
            }
            else {
              uVar3 = (uint)*param_4;
              if (*param_5 + uVar3 + 1 < 0x100) {
                if (param_4[uVar3] != 0x2f) {
                  *param_4 = (ushort)(uVar3 + 1);
                  param_4[uVar3 + 1 & 0xffff] = 0x2f;
                }
                FUN_1001e1890(param_5,param_4);
                iVar2 = 0;
              }
              else {
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                if (cVar1 != '\0') {
                  local_58._0_4_ = 0x8220202;
                  local_58._4_8_ = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "filePath[0] + 1 + fileName[0] <= 255";
                  __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                iVar2 = -0x83e;
              }
            }
            goto LAB_10034698c;
          }
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 == '\0') goto LAB_10034698c;
          puVar5 = (undefined8 *)local_58;
          local_58._0_4_ = 0x8220202;
          local_58._4_8_ = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 == '\0') goto LAB_10034698c;
          puVar5 = &local_6b8;
          local_6b8 = (undefined1 *)0x7a0a9008220202;
          local_6b0 = 1;
          uStack_6ac = 0x400;
          uStack_6aa = (undefined2)iVar2;
          uStack_6a8 = (undefined2)((uint)iVar2 >> 0x10);
        }
        goto LAB_10034670b;
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_678._0_4_ = 0x8220202;
        local_678._4_8_ = "Assertion failure";
        local_66c = 0x400;
        local_66a = (char *)CONCAT44(local_66a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_678,0x12);
      }
    }
    if (local_478[0] == 0x41464350) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar4 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar1 != '\0') {
        local_678._4_8_ = local_45c;
        local_678._0_4_ = 0x8220202;
        local_66c = 0x400;
        local_66a = (char *)CONCAT44(local_66a._4_4_,iVar2);
        __os_log_impl(0x100000000,uVar4,0x10,
                      "airtraffic> JRFileSpecGetFullPath failed for \"%{public}s\" (%d) - <rdar://problem/9375210>"
                      ,local_678,0x12);
      }
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 == '\0') goto LAB_10034698c;
    puVar5 = (undefined8 *)local_678;
    local_678._0_4_ = 0x8220202;
    local_678._4_8_ = "Assertion failure";
    local_66c = 0x400;
    local_66a = (char *)CONCAT44(local_66a._4_4_,iVar2);
LAB_10034670b:
    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",puVar5,0x12);
  }
LAB_10034698c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

