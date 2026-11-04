// name: FUN_10045d62e
// address: 10045d62e

int FUN_10045d62e(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int iVar11;
  undefined8 local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = FUN_10017cc65(param_2,0x64617461,0x201,param_1);
  if (iVar3 == -0x80) goto LAB_10045d922;
  if (iVar3 == 0) {
    iVar3 = FUN_10017ce92(*param_1,&local_60);
    if (iVar3 == -0x80) goto LAB_10045d922;
    if (iVar3 == 0) {
      iVar3 = FUN_10045b864(param_1,local_60,0);
      if (iVar3 == -0x80) goto LAB_10045d922;
      if (iVar3 == 0) {
        puVar7 = (uint *)param_1[2];
        iVar11 = -0xd0;
        iVar3 = iVar11;
        if (puVar7 == (uint *)param_1[3]) goto LAB_10045d922;
        bVar1 = false;
        uVar4 = 0;
        do {
          if ((puVar7[1] == *(uint *)(param_1 + 1)) && (!bVar1)) {
            uVar4 = *puVar7;
            bVar1 = true;
          }
          puVar7 = puVar7 + 2;
        } while (puVar7 != (uint *)param_1[3]);
        if ((!bVar1) || (puVar9 = (undefined8 *)param_1[6], puVar9 == (undefined8 *)0x0))
        goto LAB_10045d922;
        puVar8 = param_1 + 6;
        do {
          if (*(uint *)(puVar9 + 4) >= uVar4) {
            puVar8 = puVar9;
          }
          puVar9 = (undefined8 *)puVar9[*(uint *)(puVar9 + 4) < uVar4];
        } while (puVar9 != (undefined8 *)0x0);
        if ((puVar8 == param_1 + 6) || (uVar4 < *(uint *)(puVar8 + 4))) goto LAB_10045d922;
        uVar10 = puVar8[6];
        if (uVar10 < 5) {
          uVar6 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar6,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "exifLocation.mLength > 4";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          goto LAB_10045d922;
        }
        iVar3 = FUN_10017d068(*param_1,puVar8[5] + 4);
        if (iVar3 == -0x80) goto LAB_10045d922;
        if (iVar3 != 0) {
          uVar6 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar6,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
          goto LAB_10045d922;
        }
        uVar10 = uVar10 - 4;
        iVar3 = iVar11;
        if (0x1400000 < uVar10) goto LAB_10045d922;
        lVar5 = FUN_1001c63e1(uVar10);
        if (lVar5 == 0) {
          uVar6 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar6,0x10);
          if (cVar2 != '\0') {
            local_4a = "exifBuffer != nullptr";
LAB_10045dad1:
            local_4c = 0x822;
            local_54 = "Assertion failure";
            local_58 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
        }
        else {
          iVar3 = FUN_10017d186(*param_1,lVar5,uVar10,0,0);
          if (iVar3 == -0x80) goto LAB_10045d922;
          if (iVar3 != 0) {
            uVar6 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar6,0x10);
            if (cVar2 == '\0') goto LAB_10045d922;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
            goto LAB_10045d90f;
          }
          lVar5 = FUN_100165bd7(DAT_1008c4d90,lVar5,uVar10);
          *param_3 = lVar5;
          iVar3 = 0;
          if (lVar5 != 0) goto LAB_10045d922;
          uVar6 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar6,0x10);
          if (cVar2 != '\0') {
            local_4a = "*outCFData != nullptr";
            goto LAB_10045dad1;
          }
        }
        FUN_1001782e9(0,0);
        iVar3 = -0x6c;
        goto LAB_10045d922;
      }
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 == '\0') goto LAB_10045d922;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
    }
    else {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 == '\0') goto LAB_10045d922;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
    }
  }
  else {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 == '\0') goto LAB_10045d922;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
  }
LAB_10045d90f:
  local_4c = 0x400;
  local_54 = "Assertion failure";
  local_58 = 0x8220202;
  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
LAB_10045d922:
  FUN_10017cdfb(*param_1);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

