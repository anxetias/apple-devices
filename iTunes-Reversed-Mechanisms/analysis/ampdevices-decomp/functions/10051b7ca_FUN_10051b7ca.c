// name: FUN_10051b7ca
// address: 10051b7ca

int FUN_10051b7ca(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  uint *puVar6;
  long local_1118;
  undefined1 local_1109;
  uint local_10c8;
  char *local_10c4;
  undefined2 local_10bc;
  int local_10ba;
  uint local_10a8;
  undefined4 uStack_10a4;
  undefined4 uStack_10a0;
  undefined2 local_109c;
  int local_109a;
  uint local_c88;
  char *local_c84;
  undefined2 local_c7c;
  char *local_c7a;
  uint local_868;
  char *local_864;
  undefined2 local_85c;
  int local_85a;
  undefined1 local_448 [1048];
  undefined8 uStack_30;
  long local_28;
  
  uStack_30 = 0x10051b7de;
  lVar4 = FUN_100108310();
  lVar4 = -lVar4;
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined8 *)((long)&local_28 + lVar4) = 0x10051b806;
  iVar3 = FUN_1003870d4(3,0,local_448);
  if (iVar3 == -0x80) goto LAB_10051bc24;
  if (iVar3 == 0) {
    *(undefined8 *)((long)&local_28 + lVar4) = 0x10051b837;
    iVar3 = FUN_1001888ba(local_448,"iPodTZData.dat",&local_868,0);
    if (iVar3 == -0x80) goto LAB_10051bc24;
    if (iVar3 == 0) {
      local_10c8 = local_10c8 & 0xffff0000;
      local_10a8 = 0;
      uStack_10a4 = 0;
      *(undefined8 *)((long)&local_28 + lVar4) = 0x10051b879;
      iVar3 = FUN_10017cc65(&local_868,0x64617461,0x201);
      if (iVar3 != -0x80) {
        if (iVar3 == 0) {
          *(undefined8 *)((long)&local_28 + lVar4) = 0x10051b89b;
          iVar3 = FUN_10017d068(CONCAT44(uStack_10a4,local_10a8),0);
          if (iVar3 != -0x80) {
            if (iVar3 == 0) {
              *(undefined8 *)((long)&local_28 + lVar4) = 0x10051b8d3;
              iVar3 = FUN_10017d186(CONCAT44(uStack_10a4,local_10a8),&local_10c8,2,1,&local_1118);
              if (iVar3 != -0x80) {
                if (iVar3 == 0) {
                  if (local_1118 != 2) {
                    *(undefined8 *)((long)&local_28 + lVar4) = 0x10051b8fa;
                    uVar5 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_28 + lVar4) = 0x10051b90a;
                    cVar2 = _os_log_type_enabled(uVar5,0x10);
                    if (cVar2 != '\0') {
                      local_c88 = 0x8220202;
                      local_c84 = "Assertion failure";
                      local_c7c = 0x822;
                      local_c7a = "bytesRead == 2";
                      *(undefined8 *)((long)&local_28 + lVar4) = 0x10051bd1d;
                      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",
                                          &local_c88,0x16);
                    }
                    *(undefined8 *)((long)&local_28 + lVar4) = 0x10051b91b;
                    FUN_1001782e9(0,0);
                  }
                }
                else {
                  *(undefined8 *)((long)&local_28 + lVar4) = 0x10051ba82;
                  uVar5 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_28 + lVar4) = 0x10051ba92;
                  cVar2 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar2 != '\0') {
                    local_c7a = (char *)CONCAT44(local_c7a._4_4_,iVar3);
                    goto LAB_10051bac8;
                  }
                }
              }
            }
            else {
              *(undefined8 *)((long)&local_28 + lVar4) = 0x10051ba31;
              uVar5 = FUN_1001cc310();
              *(undefined8 *)((long)&local_28 + lVar4) = 0x10051ba41;
              cVar2 = _os_log_type_enabled(uVar5,0x10);
              if (cVar2 != '\0') {
                local_c7a = (char *)CONCAT44(local_c7a._4_4_,iVar3);
                goto LAB_10051bac8;
              }
            }
          }
        }
        else {
          *(undefined8 *)((long)&local_28 + lVar4) = 0x10051b9dd;
          uVar5 = FUN_1001cc310();
          *(undefined8 *)((long)&local_28 + lVar4) = 0x10051b9ed;
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            local_c7a = (char *)CONCAT44(local_c7a._4_4_,iVar3);
LAB_10051bac8:
            local_c7c = 0x400;
            local_c84 = "Assertion failure";
            local_c88 = 0x8220202;
            *(undefined8 *)((long)&local_28 + lVar4) = 0x10051badb;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_c88,0x12);
          }
        }
      }
      *(undefined8 *)((long)&local_28 + lVar4) = 0x10051bae7;
      FUN_10017cdfb(CONCAT44(uStack_10a4,local_10a8));
      if ((ushort)local_10c8 == 0) {
        *(undefined8 *)((long)&local_28 + lVar4) = 0x10051bbe6;
        uVar5 = FUN_1001cc310();
        *(undefined8 *)((long)&local_28 + lVar4) = 0x10051bbf6;
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_c88 = 0x8220202;
          local_c84 = "Assertion failure";
          local_c7c = 0x822;
          local_c7a = "iTunesDSTRulesFileVersion != 0";
          *(undefined8 *)((long)&local_28 + lVar4) = 0x10051bc95;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_c88,0x16);
        }
        *(undefined8 *)((long)&local_28 + lVar4) = 0x10051bc03;
        FUN_1001782e9(0,0);
        iVar3 = -0x27;
        goto LAB_10051bc24;
      }
      iVar3 = 0;
      if ((ushort)local_10c8 <= *(ushort *)(param_1 + 0x454)) goto LAB_10051bc24;
      uVar1 = *(undefined4 *)(param_1 + 0x66b0);
      *(undefined8 *)((long)&local_28 + lVar4) = 0x10051bb2d;
      iVar3 = FUN_1002441f8(uVar1,param_1 + 0x6b40,0x64766365,1,&local_c88);
      if (iVar3 == -0x80) goto LAB_10051bc24;
      if (iVar3 == 0) {
        *(undefined8 *)((long)&local_28 + lVar4) = 0x10051bb56;
        FUN_1001c62d9(&local_1118,0x50);
        local_1109 = 0;
        *(undefined8 *)((long)&local_28 + lVar4) = 0x10051bb7c;
        iVar3 = FUN_100182f89(1,&local_868,&local_c88,&local_10a8,&local_1118);
        if ((iVar3 == -0x80) || (iVar3 == 0)) goto LAB_10051bc24;
        *(undefined8 *)((long)&local_28 + lVar4) = 0x10051bb96;
        uVar5 = FUN_1001cc310();
        *(undefined8 *)((long)&local_28 + lVar4) = 0x10051bba6;
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 == '\0') goto LAB_10051bc24;
        puVar6 = &local_10c8;
        local_10c8 = 0x8220202;
        local_10c4 = "Assertion failure";
        local_10bc = 0x400;
        local_10ba = iVar3;
      }
      else {
        *(undefined8 *)((long)&local_28 + lVar4) = 0x10051bc10;
        uVar5 = FUN_1001cc310();
        *(undefined8 *)((long)&local_28 + lVar4) = 0x10051bc20;
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 == '\0') goto LAB_10051bc24;
        puVar6 = &local_10a8;
        local_10a8 = 0x8220202;
        uStack_10a4 = 0x7a0a90;
        uStack_10a0 = 1;
        local_109c = 0x400;
        local_109a = iVar3;
      }
    }
    else {
      *(undefined8 *)((long)&local_28 + lVar4) = 0x10051b976;
      uVar5 = FUN_1001cc310();
      *(undefined8 *)((long)&local_28 + lVar4) = 0x10051b986;
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 == '\0') goto LAB_10051bc24;
      puVar6 = &local_c88;
      local_c88 = 0x8220202;
      local_c84 = "Assertion failure";
      local_c7c = 0x400;
      local_c7a = (char *)CONCAT44(local_c7a._4_4_,iVar3);
    }
  }
  else {
    *(undefined8 *)((long)&local_28 + lVar4) = 0x10051b925;
    uVar5 = FUN_1001cc310();
    *(undefined8 *)((long)&local_28 + lVar4) = 0x10051b935;
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 == '\0') goto LAB_10051bc24;
    puVar6 = &local_868;
    local_868 = 0x8220202;
    local_864 = "Assertion failure";
    local_85c = 0x400;
    local_85a = iVar3;
  }
  *(undefined8 *)((long)&local_28 + lVar4) = 0x10051b9d3;
  __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",puVar6,0x12);
LAB_10051bc24:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((long)&local_28 + lVar4) = FUN_10051bd27;
  ___stack_chk_fail();
}

